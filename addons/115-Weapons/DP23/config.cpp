class CfgPatches
{
	class Aux115_Weapon_DP23
	{
		author="Possum";
		requiredAddons[]={};
		requiredVersion=2;
		units[]={};
		weapons[]=
		{
			"115_DP_23",
			"115_DP_23_Shielded"
		};
	};
};
class CfgAmmo
{
	class B_12Gauge_Pellets_Submunition;
	class ShotgunBase;
	class Aux115_ammo_DP23_Shell_Wide: B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo="115_ammo_DP23_Pellet";
		submunitionConeAngle=3;
		submunitionConeAngleHorizontal=40;
		submunitionConeType[]=
		{
			"poissondisc",
			12
		};
		hit=15;
		triggerDistance=0;
		class HitEffects
		{
			Hit_Foliage_green="3AS_ImpactPlasma";
			Hit_Foliage_Dead="3AS_ImpactPlasma";
			Hit_Foliage_Green_big="3AS_ImpactPlasma";
			Hit_Foliage_Palm="3AS_ImpactPlasma";
			Hit_Foliage_Pine="3AS_ImpactPlasma";
			hitFoliage="3AS_ImpactPlasma";
			hitGlass="3AS_ImpactPlasma";
			hitGlassArmored="3AS_ImpactPlasma";
			hitWood="3AS_ImpactPlasma";
			hitMetal="3AS_ImpactPlasma";
			hitMetalPlate="3AS_ImpactPlasma";
			hitBuilding="3AS_ImpactPlasma";
			hitPlastic="3AS_ImpactPlasma";
			hitRubber="3AS_ImpactPlasma";
			hitTyre="3AS_ImpactPlasma";
			hitConcrete="3AS_ImpactPlasma";
			hitMan="3AS_ImpactPlasma";
			hitGroundSoft="3AS_ImpactPlasma";
			hitGroundRed="3AS_ImpactPlasma";
			hitGroundHard="3AS_ImpactPlasma";
			hitWater="3AS_ImpactPlasma";
			hitVirtual="3AS_ImpactPlasma";
			default_mat="3AS_ImpactPlasma";
		};
	};
	class Aux115_Ammo_338;
	class Aux115_ammo_DP23_Pellet: Aux115_Ammo_338
	{
		hit=24;
		indirectHit=0;
		indirectHitRange=0;
		model="ls_weapons_core\Effects\laser_blue.p3d";
		cost=5;
		typicalSpeed=900;
		timetolive=0.27000001;
		airFriction=0;
		caliber=1;
		deflecting=15;
	};
};
class CfgMagazines
{
	class JLTS_DP23_MAG;
	class Aux115_ammo_magazine_DP23_Buck: JLTS_DP23_MAG
	{
		ammo="115_ammo_DP23_Shell_Wide";
		author="Possum";
		count=8;
		mass=12;
		descriptionShort="Energy cell<br/>Rounds: 8<br/>Used in: DP-23";
		displayName="[115] DP23 Buckshot Mag, 8 Shells";
		displayNameShort="[115] Buckshot cell";
	};
};
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class SlotInfo;
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class JLTS_DP23: arifle_MX_Base_F
	{
		class Single;
		class UnderBarrelSlot;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
		};
	};
	class Aux115_DP_23: JLTS_DP23
	{
		scope=2;
		displayName="[115] DP-23 Shotgun";
		reloadTime=1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_smg_03";
		recoilprone="recoil_smg_03";
		canShootInWater=1;
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="115_DP_23_Shielded";
		baseweapon="";
		handling="2";
		cursor="115_Cur_4";
		modes[]=
		{
			"Single"
		};
		modelOptics[]=
		{
			"\A3\Weapons_F_EPA\acc\reticle_marksman_F",
			"\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"
		};
		magazines[]=
		{
			"115_ammo_magazine_DP23_Buck"
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
				opticsZoomMax=0.89999998;
				opticsZoomInit=0.60000002;
				discreteInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=700;
				discreteDistance[]={100,200,300,400,500,600,700};
				discreteDistanceInitIndex=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="true";
				cameraDir="";
			};
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
					"\MRC\JLTS\weapons\DP23\sounds\dp23_fire.wss",
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
			reloadTime=1;
			dispersion=4.4999999e-022;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDistance=25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
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
		};
	};
	class Aux115_DP_23_Shielded: Aux115_DP_23
	{
		scope=1;
		scopeArsenal=1;
		author="Possum";
		displayName="[115] DP-23 Shielded";
		baseWeapon="115_DP_23_Shielded";
		JLTS_isShielded=1;
		JLTS_baseWeapon="115_DP_23";
		model="\MRC\JLTS\weapons\DP23\dp23_shielded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DP23\anims\dp23_shielded_handanim.rtm"
		};
		recoil="3as_recoil_light";
		magazines[]=
		{
			"115_ammo_magazine_DP23_Buck"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
					"",
					"JLTS_riot_shield_droid_attachment"
				};
				access=1;
				linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			};
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
