class CfgPatches
{
	class Aux115_WCore_Chaingun
	{
		author="SW 13th IB";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"3AS_Weapons_DC15A"
		};
		units[]={};
		ammo[]={};
		magazines[]={};
		weapons[]=
		{
			"115_Chaingun"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class FullAuto;
class CfgWeapons
{
	class 3AS_Chaingun;
	class Aux115_Chaingun: 3AS_Chaingun
	{
		scope=0;
		displayName="[115] Chaingun (TESTING/FUNOP PURPOSES ONLY)";
		baseWeapon="115_Chaingun";
		model="\3AS\3AS_Weapons\Chaingun\chaingun.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3as_weapons\data\anim\rps6_hold.rtm"
		};
		cursor="115_Cur_4";
		magazineReloadTime=10;
		magazines[]=
		{
			"115_Magazine_Chaingun"
		};
		recoil="3as_recoil_light";
		ace_overpressure_angle=0;
		ace_overpressure_range=0;
		ace_overpressure_damage=0;
		class WeaponSlotsInfo
		{
			mass=131;
		};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.059999999;
			dispersion=0.00079000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
