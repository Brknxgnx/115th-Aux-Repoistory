class CfgPatches
{
	class Aux115_WCore_DC15L
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
			"115_DC15L"
		};
	};
};
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 3AS_DC15L_Base_F: Rifle_Base_F
	{
		class FullAuto;
		class Single;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 3AS_DC15L_F: 3AS_DC15L_Base_F
	{
		class WeaponSlotsInfo;
		class OpticsModes;
	};
	class Aux115_DC15L: 3AS_DC15L_F
	{
		scope=2;
		scopeArsenal=2;
		author="Possum";
		displayName="[115] DC-15L Rifle";
		mass=50;
		recoil="3as_recoil_light";
		cursor="115_Cur_4";
		magazines[]=
		{
			"115_Magazine_DC15L"
		};
		modelOptics[]=
		{
			"\A3\Weapons_F_EPA\acc\reticle_marksman_F",
			"\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"
		};
		class OpticsModes
		{
			class sight
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				discreteInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="true";
				cameraDir="";
			};
			class scope: sight
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomMin=0.122173;
				opticsZoomMax=0.122173;
				opticsZoomInit=0.122173;
				memoryPointCamera="optic_view";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				discreteInitIndex=0;
				discreteDistanceInitIndex=0;
				discreteDistance[]={100};
				distanceZoomMin=100;
				distanceZoomMax=100;
				modelOptics[]=
				{
					"\A3\Weapons_F_EPA\acc\reticle_marksman_F",
					"\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"
				};
			};
		};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.1;
			dispersion=0.00079000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15L_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=1;
		ace_overheating_dispersion=0.75;
		class WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"3AS_Optic_DC15L"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]=
				{
					"3AS_Bipod_DC15L_f"
				};
			};
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
