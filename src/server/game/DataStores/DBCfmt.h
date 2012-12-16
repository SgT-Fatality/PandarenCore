/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITY_DBCSFRM_H
#define TRINITY_DBCSFRM_H

// x - skip<uint32>, X - skip<uint8>, s - char*, f - float, i - uint32, b - uint8, d - index (not included)
// n - index (included), l - bool, p - field present in sql dbc, a - field absent in sql dbc

char const Achievementfmt[]="niixssiixixxiix";
//const std::string CustomAchievementfmt="pppaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaapapaaaaaaaaaaaaaaaaaapp";
//const std::string CustomAchievementIndex = "ID";
char const AchievementCriteriafmt[]="niiiiiiiisiiiiixxiiiiii";
char const AreaTableEntryfmt[]="iiiiixxxxxsxixiiiiifxxxxxxxx";
char const AreaGroupEntryfmt[]="niiiiiii";
char const AreaPOIEntryfmt[]="niiiiiiiiiiiffixixxixxx";
char const AreaTriggerEntryfmt[]="nifffxxxfffffxxx";
char const ArmorLocationfmt[]="nfffff";
char const AuctionHouseEntryfmt[]="niiix";
char const BankBagSlotPricesEntryfmt[]="ni";
char const BarberShopStyleEntryfmt[]="nixxxiii";
char const BattlemasterListEntryfmt[]="niiiiiiiiiiixsiiiixxxx";
char const CharStartOutfitEntryfmt[]="diiiiiiiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
char const CharTitlesEntryfmt[]="nxsxix";
char const ChatChannelsEntryfmt[]="nixsx";

char const ChrClassesEntryfmt[]="nixsxxxixiiiixxxx";
char const ChrRacesEntryfmt[]="nxixiixixxxxixsxxxxxxxxxxxxxxxxxxxxx";
char const ChrClassesXPowerTypesfmt[]="nii";

char const CinematicSequencesEntryfmt[]="nxxxxxxxxx";
char const CreatureDisplayInfofmt[]="nixxfxxxxxxxxxxxxxx";
char const CreatureModelDatafmt[]="nxxxxxxxxxxxxxffxxxxxxxxxxxxxxxxx";
char const CreatureFamilyfmt[]="nfifiiiiixsx";
char const CreatureSpellDatafmt[]="niiiixxxx";
char const CreatureTypefmt[]="nxx";
char const CurrencyTypesfmt[]="nxxxxxiiiix";

char const DestructibleModelDatafmt[]="ixxixxxixxxixxxixxxxxxxx";
char const DungeonEncounterfmt[]="iiixisxx";
char const DurabilityCostsfmt[]="niiiiiiiiiiiiiiiiiiiiiiiiiiiii";
char const DurabilityQualityfmt[]="nf";
char const EmotesEntryfmt[]="nxxiiixx";
char const EmotesTextEntryfmt[]="nxixxxxxxxxxxxxxxxx";
char const FactionEntryfmt[]="niiiiiiiiiiiiiiiiiiffixsxx";
char const FactionTemplateEntryfmt[]="niiiiiiiiiiiii";
char const GameObjectDisplayInfofmt[]="nsxxxxxxxxxxffffffxxx";

char const GemPropertiesEntryfmt[]="nixxix";
char const GlyphPropertiesfmt[]="niii";
char const GlyphSlotfmt[]="nii";

char const GtBarberShopCostBasefmt[]="xf";
char const GtCombatRatingsfmt[]="xf";
char const GtOCTHpPerStaminafmt[]="df";
char const GtChanceToMeleeCritBasefmt[]="xf";
char const GtChanceToMeleeCritfmt[]="xf";
char const GtChanceToSpellCritBasefmt[]="xf";
char const GtChanceToSpellCritfmt[]="xf";
char const GtOCTClassCombatRatingScalarfmt[]="df";
char const GtOCTRegenHPfmt[]="f";
//char const GtOCTRegenMPfmt[]="f";
char const GtRegenMPPerSptfmt[]="xf";
char const GtSpellScalingfmt[]="df";
char const GtOCTBaseHPByClassfmt[]="df";
char const GtOCTBaseMPByClassfmt[]="df";
char const GuildPerkSpellsfmt[]="dii";
char const Holidaysfmt[]="niiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiixxsiix";
char const ImportPriceArmorfmt[]="nffff";
char const ImportPriceQualityfmt[]="nf";
char const ImportPriceShieldfmt[]="nf";
char const ImportPriceWeaponfmt[]="nf";
char const ItemPriceBasefmt[]="diff";
char const ItemReforgefmt[]="nifif";
char const ItemBagFamilyfmt[]="nx";
char const ItemArmorQualityfmt[]="nfffffffi";
char const ItemArmorShieldfmt[]="nifffffff";
char const ItemArmorTotalfmt[]="niffff";
char const ItemClassfmt[]="nxfx";
char const ItemDamagefmt[]="nfffffffi";
char const ItemDisenchantLootfmt[]="niiiiii";
//char const ItemDisplayTemplateEntryfmt[]="nxxxxxxxxxxixxxxxxxxxxx";
char const ItemLimitCategoryEntryfmt[]="nxii";
char const ItemRandomPropertiesfmt[]="nxiiixxs";
char const ItemRandomSuffixfmt[]="nsxiiiiiiiiii";
char const ItemSetEntryfmt[]="dsiiiiiiiiiixxxxxxxiiiiiiiiiiiiiiiiii";
char const LFGDungeonEntryfmt[]="nsiiiiiiiiixxixixxxxxxx";
char const LiquidTypefmt[]="nxxixixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
char const LockEntryfmt[]="niiiiiiiiiiiiiiiiiiiiiiiixxxxxxxx";
char const PhaseEntryfmt[]="nsi";
char const MailTemplateEntryfmt[]="nxs";
char const MapEntryfmt[]="nxixxsixxixiffxiixi";
char const MapDifficultyEntryfmt[]="diisii";
char const MovieEntryfmt[]="nxxxx";
char const MountCapabilityfmt[]="niiiiiii";
char const MountTypefmt[]="niiiiiiiiiiiiiiiiiiiiiiii";
char const NameGenfmt[] = "dsii";
char const NumTalentsAtLevelfmt[]="df";
char const OverrideSpellDatafmt[]="niiiiiiiiiixx";
char const QuestSortEntryfmt[]="nx";
char const QuestXPfmt[]="niiiiiiiiii";
char const QuestFactionRewardfmt[]="niiiiiiiiii";
char const PvPDifficultyfmt[]="diiiii";
char const RandomPropertiesPointsfmt[]="niiiiiiiiiiiiiii";
char const ScalingStatDistributionfmt[]="niiiiiiiiiiiiiiiiiiiixi";
char const ScalingStatValuesfmt[]="iniiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiix";
char const SkillLinefmt[]="nisxixix";
char const SkillLineAbilityfmt[]="niiiiiiiiixxx";
char const SoundEntriesfmt[]="nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
char const SpellCastTimefmt[]="nixx";
char const SpellCategoriesEntryfmt[]="diiiiii";
char const SpellDifficultyfmt[]="niiii";
const std::string CustomSpellDifficultyfmt="ppppp";
const std::string CustomSpellDifficultyIndex="id";
char const SpellDurationfmt[]="niii";
char const SpellEffectEntryfmt[]="nifiiiffiiiiiifiifiiiiiiiix";
char const SpellEntryfmt[]="niiiiiiiiiiiiiiifiiiissxxiixxixiiiiiiixiiiiiiiix";
const std::string CustomSpellEntryfmt="papppppppppppapapaaaaaaaaaaapaaapapppppppaaaaapaapaaaaaaaaaaaaaaaaaappppppppppppppppppppppppppppppppppppaaaaaapppppppppaaapppppppppaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaappppppppapppaaaaappaaaaaaa";
const std::string CustomSpellEntryIndex = "Id";
char const SpellFocusObjectfmt[]="nx";
char const SpellItemEnchantmentfmt[]="nxiiiiiixxxiiisiiiiiiix";
char const SpellItemEnchantmentConditionfmt[]="nbbbbbxxxxxbbbbbbbbbbiiiiiXXXXX";
char const SpellRadiusfmt[]="nfxf";
char const SpellRangefmt[]="nffffixx";
char const SpellReagentsEntryfmt[]="diiiiiiiiiiiiiiii";
char const SpellScalingEntryfmt[]="diiiiffffffffffi";
char const SpellTotemsEntryfmt[]="niiii";
char const SpellTargetRestrictionsEntryfmt[]="nxiiii";
char const SpellPowerEntryfmt[]="diiiixxx";
char const SpellInterruptsEntryfmt[]="dixixi";
char const SpellEquippedItemsEntryfmt[]="diii";
char const SpellAuraOptionsEntryfmt[]="niiii";
char const SpellAuraRestrictionsEntryfmt[]="diiiiiiii";
char const SpellCastingRequirementsEntryfmt[]="dixxixi";
char const SpellClassOptionsEntryfmt[]="dxiiiix";
char const SpellCooldownsEntryfmt[]="diii";
char const SpellLevelsEntryfmt[]="diii";
char const SpellRuneCostfmt[]="niiii";
char const SpellShapeshiftEntryfmt[]="nixixx";
char const SpellShapeshiftFormfmt[]="nxxiixiiixxiiiiiiiixx";
char const StableSlotPricesfmt[] = "ni";
char const SummonPropertiesfmt[] = "niiiii";
char const TalentEntryfmt[]="niiiiiiiiixxixxxxxx";
char const TalentTabEntryfmt[]="nxxiiixxxxx";
char const TalentTreePrimarySpellsfmt[]="diix";
char const TaxiNodesEntryfmt[]="nifffsiixxx";
char const TaxiPathEntryfmt[]="niii";
char const TaxiPathNodeEntryfmt[]="diiifffiiii";
char const TeamContributionPointsfmt[]="df";
char const TotemCategoryEntryfmt[]="nxii";
char const VehicleEntryfmt[]="nixffffiiiiiiiifffffffffffffffssssfifiixx";
char const VehicleSeatEntryfmt[]="niiffffffffffiiiiiifffffffiiifffiiiiiiiffiiiiixxxxxxxxxxxxxxxxxxxx";
char const WMOAreaTableEntryfmt[]="niiixxxxxiixxxx";
char const WorldMapAreaEntryfmt[]="xinxffffixxxxx";
char const WorldMapOverlayEntryfmt[]="nxiiiixxxxxxxxxx";
char const WorldSafeLocsEntryfmt[]="nifffxx";

#endif
