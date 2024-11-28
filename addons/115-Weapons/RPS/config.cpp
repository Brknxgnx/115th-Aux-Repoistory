class CfgPatches
{
	class Aux115_WCore_RPS
	{
		author="Possum";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"3AS_Weapons_DC15A"
		};
		units[]={};
		ammo[]=
		{
			"115_RPS6_HE_Ammo",
			"115_RPS6_AT_Ammo"
		};
		magazines[]=
		{
			"115_RPS6_HE_mag",
			"115_RPS6_AT_mag",
			"115_RPS6DISPO_AT_mag",
			"115_RPS6D_AT_mag"
		};
		weapons[]=
		{
			"115_RPS6",
			"115_rps6_disposable",
			"115_rps6_loaded",
			"115_rps6_used",
			"115_rps6_AT_loaded",
			"115_rps6_AT_disposable",
			"115_rps6_AT_used"
		};
	};
};
class CBA_DisposableLaunchers
{
	Aux115_rps6_AT_loaded[]=
	{
		"115_rps6_AT_disposable",
		"115_rps6_AT_used"
	};
};
class CfgAmmo
{
	class 3AS_R_MK41_AT;
	class 3AS_R_MK42_HE;
	class Aux115_RPS6_AT_Ammo: 3AS_R_MK41_AT
	{
		hit=600;
		indirectHit=3;
		allowAgainstInfantry=0;
		effectsMissile="115_aux_effects_missile_Rocket_Blue";
	};
	class Aux115_RPS6_HE_Ammo: 3AS_R_MK42_HE
	{
		hit=350;
		indirectHit=250;
		allowAgainstInfantry=1;
		effectsMissile="115_aux_effects_missile_Rocket_Purple";
	};
};
class CfgMagazines
{
	class 3AS_MK41_AT;
	class 3AS_MK42_HE;
	class Aux115_RPS6_AT_mag: 3AS_MK41_AT
	{
		author="Possum";
		count=1;
		displayNameShort="AT";
		displayName="[115] RPS-6 AT Rocket";
		descriptionShort="Anti-Tank Projectile";
		mass=30;
		ammo="AR121_RPS6_AT_Ammo";
	};
	class Aux115_RPS6DISPO_AT_mag: 3AS_MK41_AT
	{
		author="Possum";
		count=1;
		displayNameShort="AT";
		displayName="[115] RPS-6 AT Rocket";
		descriptionShort="Anti-Tank Projectile";
		mass=30;
		ammo="115_RPS6_AT_Ammo";
	};
	class Aux115_RPS6_HE_mag: 3AS_MK42_HE
	{
		author="Possum";
		count=1;
		displayNameShort="HEDD";
		descriptionShort="High Explosive Dick Detonation";
		displayName="[115] RPS-6 HE Rocket";
		mass=30;
		ammo="115_RPS6_HE_Ammo";
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
	class 3AS_RPS6_HP;
	class Aux115_RPS6: 3AS_RPS6_HP
	{
		displayName="[115] RPS-6 Rocket Launcher";
		baseWeapon="115_RPS6";
		model="\3AS\3AS_Weapons\RPS6HP\3AS_RPS6_HP.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3as_weapons\data\anim\rps6_hold.rtm"
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		magazineReloadTime=3;
		picture="\ls_weapons\_ui\rps6_ca.paa";
		magazines[]=
		{
			"115_RPS6_AT_mag",
			"115_RPS6_HE_mag"
		};
		ace_overpressure_angle=30;
		ace_overpressure_range=5;
		ace_overpressure_damage=0.2;
		modelOptics="\A3\Weapons_F\acc\reticle_RPG_F";
		class WeaponSlotsInfo
		{
			mass=131;
		};
		class OpticsModes
		{
			class StepScope
			{
				cameraDir="look";
				discretefov[]={0.083329998,0.041669998};
				discreteInitIndex=0;
				distanceZoomMax=300;
				distanceZoomMin=300;
				memoryPointCamera="eye";
				opticsDisablePeripherialVision=1;
				opticsFlare=0;
				opticsID=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomInit=0.083329998;
				opticsZoomMax=0.041669998;
				opticsZoomMin=0.083329998;
				thermalMode[]={0,1};
				useModelOptics=1;
				visionMode[]=
				{
					"Normal",
					"TI",
					"NVG"
				};
			};
		};
	};
	class ls_launcher_base;
	class 3AS_RPS6_Base: ls_launcher_base
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class OpticsModes;
		class Single;
		class Library;
		class EventHandlers;
	};
	class Aux115_rps6_AT_disposable: 3AS_RPS6_Base
	{
		baseWeapon="115_rps6_AT_disposable";
		displayName="[115] RPS-4 AT Disposable Launcher";
		descriptionShort="Single-use Rocket Tube";
		magazine[]=
		{
			"115_RPS6DISPO_AT_mag"
		};
		picture="\ls_weapons\_ui\rps6_ca.paa";
		scope=2;
		scopeArsenal=2;
		magazineReloadSwitchPhase=0.5;
		magazineReloadTime=0.1;
		reloadAction="ReloadRPG";
		recoil="recoil_rpg";
		maxZeroing=600;
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		cursor="missile";
		ace_overpressure_angle=45;
		ace_overpressure_damage=0.69999999;
		ace_overpresssure_priority=1;
		ace_overpressure_range=5;
		modes[]=
		{
			"Single"
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=1;
		aimTransitionSpeed=0.5;
		dexterity=1;
		cmimmunity=0.1;
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=2;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.85000002;
			maxRange=600;
			maxRangeProbab=0.85000002;
		};
		class Library
		{
			libTextDesc="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
		};
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
	};
	class Aux115_rps6_AT_loaded: Aux115_rps6_AT_disposable
	{
		scope=1;
		scopeArsenal=1;
		baseWeapon="115_rps6_AT_loaded";
		magazines[]=
		{
			"115_RPS6DISPO_AT_mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
		};
	};
	class Aux115_rps6_AT_used: Aux115_rps6_AT_disposable
	{
		scope=1;
		scopeArsenal=1;
		displayName="[Used] Disposable Rocket Tube";
		baseWeapon="115_rps6_AT_used";
		descriptionShort="Used Disposable Rocket Tube";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
