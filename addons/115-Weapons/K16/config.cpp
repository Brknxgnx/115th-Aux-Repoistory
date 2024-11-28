class CfgPatches
{
	class Aux115_WCore_k_16
	{
		author="Possum";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
		units[]={};
		weapons[]=
		{
			"115_GL_p"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class OPTRE_Handgun_Base;
class CfgWeapons
{
	class OPTRE_M319M: OPTRE_Handgun_Base
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class Aux115_GL_p: OPTRE_M319M
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Greg";
		baseWeapon="115_GL_p";
		displayName="[115] V-9 Smoke and Flare Launcher";
		magazineWell[]={};
		magazines[]=
		{
			"115_MAG_UGL_Flare_white",
			"115_MAG_UGL_Flare_red",
			"115_MAG_UGL_Flare_green",
			"ACE_HuntIR_M203",
			"115_MAG_UGL_Smoke_Grenade_shell",
			"115_MAG_UGL_Smoke_Grenade_Red",
			"115_MAG_UGL_Smoke_Grenade_Green",
			"115_MAG_UGL_Smoke_Grenade_Yellow",
			"115_MAG_UGL_Smoke_Grenade_Purple",
			"115_MAG_UGL_Smoke_Grenade_Blue",
			"115_MAG_UGL_Smoke_Grenade_Orange"
		};
		initspeed=80;
		hiddenSelections[]=
		{
			"camoLogo",
			"camoBody"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Weapons\K16\Data\logos_CA.paa",
			"\AR121-Weapons\K16\Data\mini_CO.paa"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
