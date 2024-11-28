class CfgPatches
{
	class Aux115_WCore_DC15S
	{
		author="Possum";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"3AS_Weapons_DC15S"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"115_DC15S",
			"115_DC15S_Shielded"
		};
		ammo[]={};
		magazines[]={};
	};
};
class BaseSoundModeType;
class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 3AS_DC15S_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
		class Single;
		class FullAuto;
	};
	class JLTS_stun_muzzle;
	class Aux115_DC15S: 3AS_DC15S_Base_F
	{
		scope=2;
		displayName="[115] DC-15S Rifle";
		model="3AS\3AS_Weapons\DC15S\3AS_DC15S_f.p3d";
		picture="\3AS\3AS_Weapons\DC15S\Data\Textures\DC15S_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		recoil="3as_recoil_light";
		cursor="115_Cur_1";
		baseWeapon="115_DC15S";
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="115_DC15S_Shielded";
		magazines[]=
		{
			"115_Magazine_DC15S"
		};
		modelOptics[]=
		{
			"\A3\Weapons_F_EPA\acc\reticle_marksman_F",
			"\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"
		};
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.085000001;
			dispersion=0.00092999998;
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
					"115_DC15S_Set"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"115_DC15S_Set"
				};
			};
		};
		class Single: Single
		{
			reloadTime=0.1;
			dispersion=0.00066000002;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
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
					"115_DC15S_Set"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"115_DC15S_Set"
				};
			};
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
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
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		mass=80;
		class Aux115_Stun: JLTS_stun_muzzle
		{
			magazines[]=
			{
				"115_MAG_Stun_x6"
			};
			magazineWell[]={};
		};
		muzzles[]=
		{
			"this",
			"115_Stun"
		};
	};
	class Aux115_DC15S_Shielded: Aux115_DC15S
	{
		scope=1;
		scopeArsenal=1;
		author="Possum";
		displayName="[115] DC-15S Shielded";
		baseWeapon="115_DC15S_Shielded";
		JLTS_isShielded=1;
		JLTS_baseWeapon="115_DC15S";
		model="\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"
		};
		reloadAction="GestureReload_JLTS_DC15S";
		recoil="3as_recoil_light";
		magazines[]=
		{
			"115_Magazine_DC15S"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
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
