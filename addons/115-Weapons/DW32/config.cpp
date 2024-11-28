class CfgPatches
{
	class Aux115_DW32
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
			"115_DW32"
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
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class JLTS_DW32S: arifle_MX_Base_F
	{
		class Single;
		class FullAuto;
		class Burst;
		class WeaponSlotsInfo;
		class OpticsModes;
	};
	class Aux115_DW32: JLTS_DW32S
	{
		scope=2;
		scopeArsenal=2;
		JLTS_hasEMPProtection=1;
		author="Possum";
		baseWeapon="115_DW32";
		displayName="[115] DW-32 Marksman Rifle";
		mass=50;
		magazines[]=
		{
			"115_Magazine_DW32"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Single
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1.1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.40000001;
			recoil="3as_recoil_light";
			recoilProne="3as_recoil_light";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: FullAuto
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1.1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			recoil="3as_recoil_light";
			recoilProne="3as_recoil_light";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class OpticsModes
		{
			class NCTALKEP
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.025;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={5,6};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
			class Iron: NCTALKEP
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=92;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPicture="";
			};
			class MuzzleSlot: MuzzleSlot
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
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
