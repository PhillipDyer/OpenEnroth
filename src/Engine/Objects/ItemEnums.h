#pragma once

#include "Utility/Flags.h"

enum DAMAGE_TYPE : unsigned int {
    DMGT_FIRE = 0,
    DMGT_ELECTR = 1,
    DMGT_COLD = 2,
    DMGT_EARTH = 3,
    DMGT_PHISYCAL = 4,
    DMGT_MAGICAL = 5,
    DMGT_SPIRIT = 6,
    DMGT_MIND = 7,
    DMGT_BODY = 8,
    DMGT_LIGHT = 9,
    DMGT_DARK = 10
};

/*  338 */
enum class ITEM_FLAG : uint32_t {
    ITEM_IDENTIFIED = 0x1,
    ITEM_BROKEN = 0x2,
    ITEM_TEMP_BONUS = 0x8,
    ITEM_AURA_EFFECT_RED = 0x10,
    ITEM_AURA_EFFECT_BLUE = 0x20,
    ITEM_AURA_EFFECT_GREEN = 0x40,
    ITEM_AURA_EFFECT_PURPLE = 0x80,
    ITEM_ENCHANT_ANIMATION_MASK = 0xF0,
    ITEM_STOLEN = 0x100,
    ITEM_HARDENED = 0x200,
};
using enum ITEM_FLAG;
MM_DECLARE_FLAGS(ITEM_FLAGS, ITEM_FLAG)
MM_DECLARE_OPERATORS_FOR_FLAGS(ITEM_FLAGS)

enum ITEM_ENCHANTMENT : unsigned int {
    ITEM_ENCHANTMENT_NULL = 0,

    ITEM_ENCHANTMENT_OF_PROTECTION = 1,    // Adds +10 to all Resistances
    ITEM_ENCHANTMENT_OF_GODS = 2,          // Adds +10 to all Seven Statistics
    ITEM_ENCHANTMENT_OF_CARNAGE = 3,       // Projectile explodes like fireball
    ITEM_ENCHANTMENT_OF_COLD = 4,          // Adds 3-4 points of cold damage
    ITEM_ENCHANTMENT_OF_FROST = 5,         // Adds 6-8 points of cold damage
    ITEM_ENCHANTMENT_OF_ICE = 6,           // Adds 9-12 points of cold damage
    ITEM_ENCHANTMENT_OF_SPARKS = 7,        // Adds 2-5 points of electrical damage
    ITEM_ENCHANTMENT_OF_LIGHTNING = 8,     // Adds 4-10 points of electrical damage
    ITEM_ENCHANTMENT_OF_THUNDERBOLTS = 9,  // Adds 6-15 points of electrical damage
    ITEM_ENCHANTMENT_OF_FIRE = 10,         // Adds 1-6 points of fire damage
    ITEM_ENCHANTMENT_OF_FLAME = 11,        // Adds 2-12 points of fire damage
    ITEM_ENCHANTMENT_OF_INFERNOS = 12,     // Adds 3-18 points of fire damage
    ITEM_ENCHANTMENT_OF_POISON = 13,       // Adds 5 points of body damage
    ITEM_ENCHANTMENT_OF_VENOM = 14,        // Adds 8 points of body damage
    ITEM_ENCHANTMENT_OF_ACID = 15,         // Adds 12 points of body damage
    ITEM_ENCHANTMENT_VAMPIRIC = 16,        // 20% of damage dealt given to wielder
    ITEM_ENCHANTMENT_OF_RECOVERY = 17,     // Increases rate of Recovery
    ITEM_ENCHANTMENT_OF_IMMUNITY = 18,     // Wearer immune to Diseases
    ITEM_ENCHANTMENT_OF_SANITY = 19,       // Wearer immune to Insanity
    ITEM_ENCHANTMENT_OF_FREEDOM = 20,      // Wearer immune to Paralysis
    ITEM_ENCHANTMENT_OF_ANTIDOTES = 21,    // Wearer immune to Poison
    ITEM_ENCHANTMENT_OF_ALARMS = 22,       // Wearer immune to Sleep
    ITEM_ENCHANTMENT_OF_MEDUSA = 23,       // Wearer immune to Stone
    ITEM_ENCHANTMENT_OF_FORCE = 24,        // Increased Knockback
    ITEM_ENCHANTMENT_OF_POWER = 25,        // Add +5 Levels
    ITEM_ENCHANTMENT_OF_AIR_MAGIC = 26,    // Increases effect of all Air spells
    ITEM_ENCHANTMENT_OF_BODY_MAGIC = 27,   // Increases effect of all Body spells
    ITEM_ENCHANTMENT_OF_DARK_MAGIC = 28,   // Increases effect of all Dark spells
    ITEM_ENCHANTMENT_OF_EARTH_MAGIC = 29,  // Increases effect of all Earth spells
    ITEM_ENCHANTMENT_OF_FIRE_MAGIC = 30,   // Increases effect of all Fire spells
    ITEM_ENCHANTMENT_OF_LIGHT_MAGIC = 31,  // Increases effect of all Light spells
    ITEM_ENCHANTMENT_OF_MIND_MAGIC = 32,   // Increases effect of all Mind spells
    ITEM_ENCHANTMENT_OF_SPIRIT_MAGIC = 33, // Increases effect of all Spirit spells
    ITEM_ENCHANTMENT_OF_WATER_MAGIC = 34,  // Increases effect of all Water spells
    ITEM_ENCHANTMENT_OF_THIEVERY = 35,     // Increases chance of Disarming (double)
    ITEM_ENCHANTMENT_OF_SHIELDING = 36,    // Half damage from all missile attacks (not cumulative)
    ITEM_ENCHANTMENT_OF_REGENERATION = 37, // Regenerate HP over time
    ITEM_ENCHANTMENT_OF_MANA = 38,         // Regenerate SP over time
    ITEM_ENCHANTMENT_DEMON_SLAYING = 39,   // Double damage vs Demons.
    ITEM_ENCHANTMENT_DRAGON_SLAYING = 40,  // Double damage vs Dragons
    ITEM_ENCHANTMENT_OF_DARKNESS = 41,     // Vampiric and Swift
    ITEM_ENCHANTMENT_OF_DOOM = 42,         // +1 to Seven Stats, HP, SP, Armor, Resistances
    ITEM_ENCHANTMENT_OF_EARTH = 43,        // +10 to Endurance, Armor, HP
    ITEM_ENCHANTMENT_OF_LIFE = 44,         // +10 HP and Regenerate HP over time
    ITEM_ENCHANTMENT_ROGUES = 45,          // Adds +5 Speed and Accuracy.
    ITEM_ENCHANTMENT_OF_DRAGON = 46,       // Adds 10-20 points of fire damage and +25 Might
    ITEM_ENCHANTMENT_OF_ECLIPSE = 47,      // +10 SP and Regenerate SP over time
    ITEM_ENCHANTMENT_OF_GOLEM = 48,        // +15 Endurance and +5 Armor
    ITEM_ENCHANTMENT_OF_MOON = 49,         // +10 Intellect and Luck
    ITEM_ENCHANTMENT_OF_PHOENIX = 50,      // +30 Fire Resistance and Regenerate HP over time
    ITEM_ENCHANTMENT_OF_SKY = 51,          // +10 Spell points, Speed, Intellect
    ITEM_ENCHANTMENT_OF_STARS = 52,        // +10 Endurance and Accuracy
    ITEM_ENCHANTMENT_OF_SUN = 53,          // +10 Might and Personality
    ITEM_ENCHANTMENT_OF_TROLL = 54,        // +15 Endurance and Regenerate HP over time
    ITEM_ENCHANTMENT_OF_UNICORN = 55,      // +15 Luck and Regenerate SP over time
    ITEM_ENCHANTMENT_WARRIORS = 56,        // Adds +5 Might and Endurance
    ITEM_ENCHANTMENT_WIZARDS = 57,         // Adds +5 Intellect and Personality
    ITEM_ENCHANTMENT_ANTIQUE = 58,         // Increased value
    ITEM_ENCHANTMENT_SWIFT = 59,           // Swift, increased Weapon speed
    ITEM_ENCHANTMENT_MONKS = 60,           // Adds +3 Unarmed and Dodging skills
    ITEM_ENCHANTMENT_THIEVES = 61,         // Adds +3 Stealing and Disarm skills
    ITEM_ENCHANTMENT_OF_IDENTIFYING = 62,  // Adds +3 ID Item and ID Monster skills
    ITEM_ENCHANTMENT_ELF_SLAYING = 63,     // Double Damage vs Elves
    ITEM_ENCHANTMENT_UNDEAD_SLAYING = 64,  // Double Damage vs Undead
    ITEM_ENCHANTMENT_TITAN_SLAYING = 65,   // Double Damage vs Titans
    ITEM_ENCHANTMENT_OF_PLENTY = 66,       // Regenerate SP and HP over time
    ITEM_ENCHANTMENT_ASSASINS = 67,        // Adds 5 points of Body damage and +2 Disarm skill
    ITEM_ENCHANTMENT_BARBARIANS = 68,      // Adds 6-8 points of Cold damage and +5 Armor Class
    ITEM_ENCHANTMENT_OF_STORM = 69,        // +20 Air Resistance and Shielding
    ITEM_ENCHANTMENT_OF_OCEAN = 70,        // +10 Water Resistance and +2 Alchemy skill
    ITEM_ENCHANTMENT_OF_WATER_WALKING = 71, // Prevents damage from drowning
    ITEM_ENCHANTMENT_OF_FEATHER_FALLING = 72, // Prevents damage from falling
};

enum class ITEM_MATERIAL : uint8_t {
    MATERIAL_COMMON = 0,
    MATERIAL_ARTIFACT = 1,
    MATERIAL_RELIC = 2,
    MATERIAL_SPECIAL = 3
};
using enum ITEM_MATERIAL;

/*  330 */
enum ITEM_TYPE {
    ITEM_NULL = 0,
    ITEM_LONGSWORD_1 = 0x1,
    ITEM_DAGGER_1 = 15,
    ITEM_AXE_1 = 23,
    ITEM_SPEAR_1 = 31,
    ITEM_CROSSBOW_1 = 47,
    ITEM_MACE_1 = 50,
    ITEM_STAFF_1 = 61,
    ITEM_BLASTER = 64,
    ITEM_LASER_RIFLE = 65,
    ITEM_LEATHER_1 = 66,
    ITEM_CHAINMAIL_1 = 71,
    ITEM_PLATE_1 = 76,
    ITEM_BUCKLER_1 = 84,
    ITEM_92 = 92,
    ITEM_GAUNTLETS_1 = 110,
    ITEM_BOOTS_1 = 115,
    ITEM_WAND_FIRE = 135,
    ITEM_WAND_STUN = 138,
    ITEM_WAND_INCENERATION = 159,
    ITEM_160 = 160,
    ITEM_161 = 161,
    ITEM_162 = 162,
    ITEM_GOLD_SMALL = 197,
    ITEM_GOLD_MEDIUM = 198,
    ITEM_GOLD_LARGE = 199,
    ITEM_REAGENT_WIDOWSWEEP_BERRIES = 200,
    ITEM_REAGENT_CRUSHED_ROSE_PETALS = 201,
    ITEM_TROLL_BLOOD = 202,
    ITEM_TROLL_RUBY = 203,
    ITEM_DRAGON_EYE = 204,
    ITEM_PHIMA_ROOT = 205,
    ITEM_METEORITE_FRAGMENT = 206,
    ITEM_HARPY_FEATHER = 207,
    ITEM_MOONSTONE = 208,
    ITEM_ELVISH_TOADSTOOL = 209,
    ITEM_POPPYSNAPS = 210,
    ITEM_FAE_DUST = 211,
    ITEM_SULFUR = 212,
    ITEM_GARNET = 213,
    ITEM_DEVIL_ICHOR = 214,
    ITEM_MUSHROOM = 215,
    ITEM_OBSIDIAN = 216,
    ITEM_OOZE_ENDOPLASM_VIAL = 217,
    ITEM_MERCURY = 218,
    ITEM_REAGENT_PHILOSOPHERS_STONE = 219,
    ITEM_POTION_BOTTLE = 220,
    ITEM_POTION_CATALYST = 221,
    ITEM_POTION_CURE_WOUNDS = 222,
    ITEM_POTION_MAGIC_POTION = 223,
    ITEM_POTION_CURE_WEAKNESS = 224,
    ITEM_POTION_CURE_DISEASE = 225,
    ITEM_POTION_AWAKEN = 227,
    ITEM_POTION_HASTE = 228,
    ITEM_POTION_RECHARGE_ITEM = 233,
    ITEM_POTION_HARDEN_ITEM = 236,
    ITEM_POTION_CURE_INSANITY = 239,
    ITEM_POTION_MIGHT_BOOST = 240,
    ITEM_POTION_ACCURACY_BOOST = 245,
    ITEM_POTION_FLAMING_POTION = 246,
    ITEM_POTION_SWIFT_POTION = 250,
    ITEM_POTION_BODY_RESISTANE = 261,
    ITEM_POTION_STONE_TO_FLESH = 262,
    ITEM_POTION_SLAYING_POTION = 263,
    ITEM_POTION_REJUVENATION = 271,
    ITEM_SPELLBOOK_TORCHLIGHT = 400,
    ITEM_SPELLBOOK_FIRE_STRIKE = 401,
    ITEM_SPELLBOOK_AIR_FEATHER_FALL = 412,
    ITEM_SPELLBOOK_WATER_POISON_SPRAY = 423,
    ITEM_SPELLBOOK_EARTH_SLOW = 434,
    ITEM_SPELLBOOK_SPIRIT_BLESS = 445,
    ITEM_SPELLBOOK_MIND_REMOVE_FEAR = 455,
    ITEM_SPELLBOOK_MIND_MIND_BLAST = 456,
    ITEM_SPELLBOOK_BODY_FIRST_AID = 467,
    ITEM_SPELLBOOK_BODY_HEAL = 470,
    ITEM_SPELLBOOK_BODY_BREAK_POISON = 471,
    ITEM_SPELLBOOK_LIGHT_LIGHT_BOLT = 477,
    ITEM_SPELLBOOK_LIGHT_SUN_BURST = 486,
    ITEM_SPELLBOOK_LIGHT_DIVINE_INTERVENTION = 487,
    ITEM_ARTIFACT_PUCK = 500,  // 0x1F4,
    ITEM_ARTIFACT_IRON_FEATHER = 501,
    ITEM_ARTIFACT_WALLACE = 502,
    ITEM_ARTIFACT_CORSAIR = 503,
    ITEM_ARTIFACT_GOVERNORS_ARMOR = 504,  // 1F8
    ITEM_ARTIFACT_YORUBA = 505,           // 1F9
    ITEM_ARTIFACT_SPLITTER = 506,         // 1FA
    ITEM_ARTIFACT_GHOULSBANE = 507,       // 1FA
    ITEM_ARTIFACT_GIBBET = 508,           // 1FA
    ITEM_ARTIFACT_CHARELE = 509,          // 1FA
    ITEM_ARTIFACT_ULLYSES = 510,
    ITEM_ARTIFACT_HANDS_OF_THE_MASTER = 511,
    ITEM_ARTIFACT_LEAGUE_BOOTS = 512,  // 200
    ITEM_ARTIFACT_RULERS_RING = 513,
    ITEM_RELIC_MASH = 514,
    ITEM_RELIC_ETHRICS_STAFF = 515,   // 204
    ITEM_RELIC_HARECS_LEATHER = 516,  // 204
    ITEM_RELIC_OLD_NICK = 517,
    ITEM_RELIC_AMUCK = 518,
    ITEM_RELIC_GLORY_SHIELD = 519,
    ITEM_RELIC_KELEBRIM = 520,         // 208
    ITEM_RELIC_TALEDONS_HELM = 521,    // 209
    ITEM_RELIC_SCHOLARS_CAP = 522,     // 20A
    ITEM_RELIC_PHYNAXIAN_CROWN = 523,  // 20B
    ITEM_RELIC_TITANS_BELT = 524,      // 20C
    ITEM_RELIC_TWILIGHT = 525,         // 20D
    ITEM_RELIC_ANIA_SELVING = 526,
    ITEM_RELIC_JUSTICE = 527,
    ITEM_RELIC_MEKORIGS_HAMMER = 528,
    ITEM_ARTIFACT_HERMES_SANDALS = 529,
    ITEM_ARTIFACT_CLOAK_OF_THE_SHEEP = 530,  // 212
    ITEM_ARTIFACT_ELFBANE = 531,             // 212
    ITEM_ARTIFACT_MINDS_EYE = 532,           // 214
    ITEM_ELVEN_CHAINMAIL = 533,              // 215
    ITEM_FORGE_GAUNTLETS = 534,
    ITEM_ARTIFACT_HEROS_BELT = 535,  // 217
    ITEM_ARTIFACT_LADYS_ESCORT = 536,
    ITEM_RARE_CLANKERS_AMULET = 537,
    ITEM_RARE_LIETENANTS_CUTLASS = 538,
    ITEM_RARE_MEDUSAS_MIRROR = 539,
    ITEM_RARE_LADY_CARMINES_DAGGER = 540,
    ITEM_RARE_VILLAINS_BLADE = 541,
    ITEM_RARE_PERFECT_BOW = 542,
    ITEM_RARE_PERFECT_BOW_FIXED = 543,
    ITEM_RARE_SHADOWS_MASK = 544,       // 220
    ITEM_RARE_GHOST_RING = 545,         // 220
    ITEM_RARE_FAERIE_RING = 546,        // 220
    ITEM_RARE_SUN_CLOAK = 547,          // 223
    ITEM_RARE_MOON_CLOAK = 548,         // 224
    ITEM_RARE_ZOKKARS_AXE = 549,        // 224
    ITEM_RARE_VAMPIRES_CAPE = 550,      // 226
    ITEM_RARE_MINOTAURS_AXE = 551,      // 226
    ITEM_RARE_GROGNARDS_CUTLASS = 552,  // 226
    ITEM_LICH_JAR_FULL = 601,
    ITEM_WETSUIT = 604,
    ITEM_LICH_JAR_EMPTY = 615,
    ITEM_GENIE_LAMP = 616,

    ITEM_RED_APPLE = 630,

    ITEM_LUTE = 632,
    ITEM_FAERIE_PIPES = 633,
    ITEM_GRYPHONHEARTS_TRUMPET = 634,

    ITEM_HORSESHOE = 646,

    ITEM_TEMPLE_IN_A_BOTTLE = 650,
    ITEM_ARCOMAGE_DECK = 651,

    ITEM_RECIPE_REJUVENATION = 740,
    ITEM_RECIPE_BODY_RESISTANCE = 771,
};

/*  331 */
enum ITEM_EQUIP_TYPE : uint8_t {
    EQUIP_SINGLE_HANDED = 0,
    EQUIP_TWO_HANDED = 1,
    EQUIP_BOW = 2,
    EQUIP_ARMOUR = 3,
    EQUIP_SHIELD = 4,
    EQUIP_HELMET = 5,
    EQUIP_BELT = 6,
    EQUIP_CLOAK = 7,
    EQUIP_GAUNTLETS = 8,
    EQUIP_BOOTS = 9,
    EQUIP_RING = 10,
    EQUIP_AMULET = 11,
    EQUIP_WAND = 12,
    EQUIP_REAGENT = 13,
    EQUIP_POTION = 14,
    EQUIP_SPELL_SCROLL = 15,
    EQUIP_BOOK = 16,
    EQIUP_ANY = 16,
    EQUIP_MESSAGE_SCROLL = 17,
    EQUIP_GOLD = 18,
    EQUIP_GEM = 19,
    EQUIP_NONE = 20
};
