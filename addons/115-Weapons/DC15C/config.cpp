class CfgPatches
{
	class Aux115_WCore_DC15C
	{
		author="Possum";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"3AS_Weapons_DC15C"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"115_DC15C",
			"115_DC15CUGL"
		};
		ammo[]={};
		magazines[]={};
	};
};
class cfgRecoils
{
	class recoil_15c
	{
		muzzleOuter[]={0,0.1,0,0};
		kickBack[]={0.0099999998,0.02};
		permanent=0;
		temporary=0.0099999998;
	};
};
class BaseSoundModeType;
class Mode_SemiAuto;
class cfgWeapons
{
	class 3AS_DC15C_Base_F;
	class 3AS_DC15C_F: 3AS_DC15C_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class JLTS_stun_muzzle;
	class InventoryOpticsItem_Base_F;
	class Aux115_DC15C: 3AS_DC15C_F
	{
		displayName="[115] DC-15C Rifle";
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_15c";
		recoilProne="recoil_15c";
		cursor="115_Cur_1";
		magazines[]=
		{
			"115_Magazine_DC15C"
		};
		modelOptics[]=
		{
			"\A3\Weapons_F_EPA\acc\reticle_marksman_F",
			"\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"
		};
		modes[]=
		{
			"Single",
			"Burst"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.050000001;
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
					"115_DC15C_Set"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"115_DC15C_Set"
				};
			};
		};
		class Burst: Single
		{
			burst=3;
			displayName="Burst";
			sounds[]=
			{
				"StandardSound"
			};
			textureType="burst";
			multiplier=1;
			recoil="recoil_single_primary_2outof10";
			recoilProne="recoil_single_primary_2outof10";
			reloadTime=0.090000004;
			dispersion=0.00050000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=0.30000001;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot
			{
				access=1;
				compatibleItems[]=
				{
					"3AS_optic_reflex_DC15C"
				};
				displayName="Optics Slot";
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0,0};
				iconScale=0;
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
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
				distanceZoomMin=300;
				distanceZoomMax=1000;
				discreteDistance[]={300,500,700,1000};
				discreteDistanceInitIndex=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="true";
				cameraDir="";
			};
			class Scope: sight
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.122173;
				opticsZoomMax=0.122173;
				opticsZoomInit=0.122173;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
			};
		};
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
	class UGL_F;
	class Aux115_DC15CUGL: Aux115_DC15C
	{
		displayName="[115] DC-15C GL Rifle";
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;
		cursor="115_Cur_1";
		muzzles[]=
		{
			"this",
			"115_GLDC15"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\Anim\LIM.rtm"
		};
		weaponInfoType="RscWeaponZeroing";
		model="3AS\3AS_Weapons\DC15C\3AS_DC15C_GL.p3d";
		class AR121_GLDC15: UGL_F
		{
			displayName="UGL";
			descriptionShort="UGL";
			reloadTime=0.30000001;
			modes[]=
			{
				"Single"
			};
			recoil="recoil_15a";
			baseweapon="";
			showtoplayer=1;
			discreteDistance[]={25,50,100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"GL_EYE",
				"OP_eye_50",
				"OP_eye_100",
				"OP_eye_200",
				"OP_eye_300",
				"OP_eye_400"
			};
			class Single: Mode_SemiAuto
			{
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"115_DC15C_Set"
					};
				};
				sounds[]=
				{
					"StandardSound"
				};
				reloadtime=0.5;
				multiplier=1;
				showtoplayer=1;
				burst=1;
				dispersion=8.9999997e-007;
				displayName="UGL";
				textureType="fullAuto";
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
			discreteDistanceInitIndex=0;
			magazineWell[]={};
			magazines[]=
			{
				"115_MAG_UGL_HE_3RND",
				"115_MAG_UGL_EX_1RND",
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
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
