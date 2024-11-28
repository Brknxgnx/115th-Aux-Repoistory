class CfgPatches
{
	class Aux115_WCore_Z6
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
			"115_Z6"
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
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class JLTS_Z6: LMG_Mk200_F
	{
		class manual;
		class close;
		class short;
		class medium;
		class WeaponSlotsInfo;
	};
	class Aux115_Z6: JLTS_Z6
	{
		author="Possum";
		displayName="[115] Z-6 Rotary Blaster";
		JLTS_hasEMPProtection=1;
		mass=50;
		baseWeapon="115_Z6";
		magazines[]=
		{
			"115_Magazine_Z6"
		};
		recoil="3as_recoil_light";
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium"
		};
		class manual: manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"AR121-Weapons\Z6\Z6.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.075000003;
			dispersion=0.00102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					""
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
