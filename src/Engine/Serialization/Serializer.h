#pragma once

#include <cassert>
#include <string>
#include <vector>

#include "Utility/Embedded.h"
#include "Utility/Streams/FileOutputStream.h"
#include "Utility/Streams/OutputStream.h"

class Serializer {
 public:
    Serializer(OutputStream *outputStream) {
        Reset(outputStream);
    }

    void Reset(OutputStream *outputStream) {
        assert(outputStream);

        outputStream_ = outputStream;
    }

    void WriteBytes(const void *src, size_t size) {
        outputStream_->Write(src, size);
    }

    template<class T>
    void WriteRaw(const T *src) {
        WriteBytes(src, sizeof(T));
    }

    template<class T>
    void WriteRawArray(const T *src, size_t size) {
        WriteBytes(src, sizeof(T) * size);
    }

    template<class T>
    void WriteVector(const std::vector<T> &src) {
        WriteVectorInternal(src);
    }

    template<class LegacyT, class T>
    void WriteLegacyVector(const std::vector<T> &src) {
        WriteVectorInternal<LegacyT>(src);
    }

    template<class T>
    void WriteSizedVector(const std::vector<T> &src) {
        WriteVectorInternal(src, false);
    }

    template<class LegacyT, class T>
    void ReadSizedLegacyVector(const std::vector<T> &src) {
        WriteVectorInternal<LegacyT>(src, false);
    }

 private:
    template<class LegacyT = void, class T>
    void WriteVectorInternal(const std::vector<T> &src, bool writeSize = true) {
        if (writeSize) {
            uint32_t size = src.size();
            WriteRaw(&size);
        }

        constexpr bool isLegacyMode = !std::is_same_v<LegacyT, void>;
        if constexpr (isLegacyMode) {
            LegacyT tmp;
            for (const T &element : src) {
                tmp.Serialize(&element);
                WriteRaw(&tmp);
            }
        } else {
            WriteRawArray(src.data(), src.size());
        }
    }

 private:
    OutputStream *outputStream_ = nullptr;
};


class FileSerializer : private Embedded<FileOutputStream>, public Serializer {
    using StreamBase = Embedded<FileOutputStream>;
 public:
    FileSerializer(const std::string &path):
        StreamBase(path),
        Serializer(&StreamBase::get())
    {}

    void Close() {
        StreamBase::get().Close();
    }
};
