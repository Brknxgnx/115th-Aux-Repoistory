class CfgPatches
{
	class Aux115_WCore_DC15A
	{
		author="Brokie";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"3AS_Weapons_DC15A"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"115_DC15A",
			"115_DC15AUGL"
		};
		ammo[]={};
		magazines[]={};
	};
};
class BaseSoundModeType;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class cfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class 3AS_DC15A_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
		class Burst;
		class Single;
		class 3AS_GL_F;
	};
	class JLTS_stun_muzzle;
	class Aux115_DC15A: 3AS_DC15A_Base_F
	{
		scope=2;
		displayName="[115] DC-15A Rifle";
		model="3AS\3AS_Weapons\DC15A\3AS_DC15A_f.p3d";
		picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics[]=
		{
			"\A3\Weapons_F_EPA\acc\reticle_marksman_F",
			"\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"
		};
		recoil="3as_recoil_light";
		cursor="115_Cur_1";
		magazines[]=
		{
			"115_Magazine_DC15A"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"Burst"
		};
		class Burst: Mode_Burst
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
					"AR121_DC15A_Set"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"AR121_DC15A_Set"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00066000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
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
					"AR121_DC15A_Set"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"AR121_DC15A_Set"
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
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
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
	class Aux115_DC15AUGL: 3AS_DC15A_Base_F
	{
		scope=2;
		displayName="[115] DC-15A GL Rifle";
		model="3AS\3AS_Weapons\DC15A\3AS_DC15A_GL.p3d";
		picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		recoil="3as_recoil_light";
		cursor="115_Cur_1";
		modelOptics[]=
		{
			"\A3\Weapons_F_EPA\acc\reticle_marksman_F",
			"\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"
		};
		muzzles[]=
		{
			"this",
			"115_GL"
		};
		modes[]=
		{
			"Single",
			"Burst"
		};
		class Burst: Mode_Burst
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
					"115_DC15A_Set"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"115_DC15A_Set"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00066000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
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
					"115_DC15A_Set"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"115_DC15A_Set"
				};
			};
		};
		magazines[]=
		{
			"115_Magazine_DC15A"
		};
		class Aux115_GL: 3AS_GL_F
		{
			displayName="[115] DC15-GL";
			descriptionShort="GL for the DC15A Platform";
			useModelOptics=0;
			useExternalOptic=0;
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
				"1515MAG_UGL_Smoke_Grenade_Purple",
				"115_MAG_UGL_Smoke_Grenade_Blue",
				"115_MAG_UGL_Smoke_Grenade_Orange"
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
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
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
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
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
