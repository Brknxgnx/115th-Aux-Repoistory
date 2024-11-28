class CfgPatches
{
	class Aux115_Insignia
	{
		author="Possum";
		requiredAddons[]=
		{
			"ls_flags"
		};
		requiredVersion=2;
		units[]={};
		weapons[]={};
	};
};
class CfgUnitInsignia
{
	class Aux115_121st_Logo
	{
		displayName="[115] 121st";
		author="Possum";
		texture="AR121-Core\AR121-Insignia\Data\unitlogo.paa";
		material="\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";
	};
	class Aux115_Castle_Logo
	{
		displayName="[115] Castle Platoon";
		author="Possum";
		texture="AR121-Core\AR121-Insignia\Data\castleplatoon.paa";
		material="\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";
	};
	class Aux115_Paladin_Logo
	{
		displayName="[115] Paladin 1-1";
		author="Possum";
		texture="AR121-Core\AR121-Insignia\Data\paladin_co.paa";
		material="\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";
	};
	class Aux115_Dragoon_Logo
	{
		displayName="[115] Dragoon 1-2";
		author="Possum";
		texture="AR121-Core\AR121-Insignia\Data\dragoon.paa";
		material="\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";
	};
	class Aux115_Archer
	{
		displayName="[115] Archer Flight";
		author="Nyx";
		texture="AR121-Core\AR121-Insignia\Data\archer.paa";
		material="\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";
	};
	class Aux115_Lancer_Logo
	{
		displayName="[115] Lancer 1-3";
		author="Possum";
		texture="AR121-Core\AR121-Insignia\Data\lancer.paa";
		material="\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";
	};
	class Aux115_Orbak_Logo
	{
		displayName="[115] Orbak Armor";
		author="Von";
		texture="AR121-Core\AR121-Insignia\Data\orbak.paa";
		material="\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";
	};
};
class CfgMarkers
{
	class b_air;
	class Aux115_MMU: b_air
	{
		Name="[115] 115th";
		author="Possum";
		icon="AR121-Core\AR121-Insignia\Data\unitlogo.paa";
		shadow="true";
		size=48;
		scope=2;
		color[]={1,1,1,1};
	};
	class Aux115_MMC: Aux115_MMU
	{
		Name="[115] Castle Platoon";
		author="Possum";
		icon="AR121-Core\AR121-Insignia\Data\castleplatoon.paa";
	};
	class Aux115_MMA: Aux115_MMU
	{
		Name="[115] Archer Flight";
		author="Nyx";
		icon="AR121-Core\AR121-Insignia\Data\archer.paa";
	};
	class Aux115_MMO: Aux115_MMU
	{
		Name="[115] Orbak Armor";
		author="Von";
		icon="AR121-Core\AR121-Insignia\Data\orbak.paa";
	};
	class Aux115_MM1: Aux115_MMU
	{
		Name="[115] Paladin 1-1";
		author="Possum";
		icon="AR121-Core\AR121-Insignia\Data\paladin_co.paa";
	};
	class Aux115_MM2: Aux115_MMU
	{
		Name="[115] Dragoon 1-2";
		author="Possum";
		icon="AR121-Core\AR121-Insignia\Data\dragoon.paa";
	};
	class Aux115_MM3: Aux115_MMU
	{
		Name="[115] Lancer 1-3";
		author="Possum";
		icon="AR121-Core\AR121-Insignia\Data\lancer.paa";
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class Aux115_flag_base: FlagCarrier
	{
		author="Possum";
		displayName="=== Core ===";
		editorCategory="115_statics_Props";
		editorSubcategory="115_Props";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
	};
	class Aux115_flag_1: Aux115_flag_base
	{
		scope=2;
		scopeCurator=2;
		displayName="[115] 121st Flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'AR121-Core\AR121-Insignia\Data\121flag.paa'";
		};
	};
	class ls_flag_republic_vertical;
	class Aux115_Vertical_Flag: ls_flag_republic_vertical
	{
		scope=2;
		scopeCurator=2;
		editorCategory="115_statics_props";
		editorSubCategory="115_Props";
		displayName="115 Flag (Vertical)";
		model="LS_statics_props\flags\ls_vertical_flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"AR121-Core\AR121-Insignia\Data\121flag.paa"
		};
	};
	class Aux115_Helmet_Prop: ls_flag_republic_vertical
	{
		scope=2;
		scopeCurator=2;
		editorCategory="115_statics_props";
		editorSubCategory="115_Props";
		displayName="115 Helmet Prop";
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		hiddenSelectionsTextures[]=
		{
			"\AR121-Core\data\Helmets\Trooper_P2_Helmet.paa"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449290";
};
