class CfgPatches
{
	class Aux115_WCore_WESTAR
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
			"115_WESTAR",
			"115_WESTARUGL"
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
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class 3AS_WestarM5_Base_F: Rifle_Base_F
	{
		class 3AS_WestarM5_GL_F;
		class WeaponSlotsInfo;
	};
	class 3AS_WestarM5_F: 3AS_WestarM5_Base_F
	{
		class WeaponSlotsInfo;
	};
	class 3AS_WestarM5_GL: 3AS_WestarM5_Base_F
	{
		class WeaponSlotsInfo;
	};
	class JLTS_stun_muzzle;
	class Aux115_WESTAR: 3AS_WestarM5_F
	{
		scope=2;
		displayName="[115] WESTAR M5 Rifle";
		baseWeapon="115_WESTAR";
		author="Possum";
		mass=60;
		modelOptics="3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		magazines[]=
		{
			"115_Magazine_WESTAR"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.075000003;
			dispersion=0.00086999999;
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.075000003;
			dispersion=0.00086999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot
			{
				displayName="Optics Slot";
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				linkProxy="\a3\data_f\proxies\weapon_slots\TOP";
				scope=0;
				compatibleItems[]=
				{
					"3AS_Optic_Scope_WestarM5",
					"OPTRE_M7_Sight"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]={};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="Pointer Slot";
				compatibleItems[]=
				{
					"acc_flashlight",
					"ace_acc_pointer_green",
					"acc_pointer_IR"
				};
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
	class Aux115_WESTARUGL: 3AS_WestarM5_GL
	{
		scope=2;
		baseWeapon="115_WESTARUGL";
		displayName="[115] WESTAR M5 GL Rifle";
		author="Possum";
		mass=65;
		modelOptics="3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		magazines[]=
		{
			"115_Magazine_WESTAR"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		muzzles[]=
		{
			"this",
			"115_WESTARUGL_F"
		};
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.075000003;
			dispersion=0.00086999999;
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			reloadTime=0.075000003;
			dispersion=0.00086999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class Aux115_WESTARUGL_F: 3AS_WestarM5_GL_F
		{
			magazines[]=
			{
				"115_MAG_UGL_HE_3RND",
				"115_MAG_UGL_EX_1RND",
				"115_MAG_UGL_Flare_white",
				"115_MAG_UGL_Flare_red",
				"115_MAG_UGL_Flare_green",
				"115_MAG_UGL_Flare_IR",
				"115_MAG_UGL_Smoke_Grenade_shell",
				"115_MAG_UGL_Smoke_Grenade_Red",
				"115_MAG_UGL_Smoke_Grenade_Green",
				"115_MAG_UGL_Smoke_Grenade_Yellow",
				"115_MAG_UGL_Smoke_Grenade_Purple",
				"115_MAG_UGL_Smoke_Grenade_Blue",
				"115_MAG_UGL_Smoke_Grenade_Orange"
			};
			magazineWell[]={};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				linkProxy="\a3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"3AS_Optic_Scope_WestarM5",
					"OPTRE_M7_Sight"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]={};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="Pointer Slot";
				compatibleItems[]=
				{
					"acc_flashlight",
					"ace_acc_pointer_green",
					"acc_pointer_IR"
				};
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
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
