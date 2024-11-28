class CfgPatches
{
	class Aux115_WCore_DC18
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
			"AR121_DC18"
		};
	};
};
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class JLTS_stun_muzzle;
class UnderBarrelSlot;
class CfgWeapons
{
	class SWLW_DC15SA;
	class Aux115_DC18: SWLW_DC15SA
	{
		scope=2;
		author="Possum";
		displayname="[115] DC-18 Magnum";
		descriptionShort="Heavy Caliber Sidearm";
		reloadTime=0.55000001;
		dispersion=0.00145;
		fireLightDiffuse[]={0,0,1};
		ACE_Overheating_mrbs=0;
		recoil="3as_recoil_light";
		magazines[]=
		{
			"115_Magazine_DC18"
		};
		class WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		muzzles[]=
		{
			"this",
			"115_SA_Stun"
		};
		class Aux115_SA_Stun: JLTS_stun_muzzle
		{
			magazines[]=
			{
				"115_MAG_Stun_x6"
			};
			magazineWell[]={};
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
