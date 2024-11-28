class CfgPatches
{
	class Aux115_WCore_DC17SA
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
			"115_DC17SA",
			"115_DC17SA_Shield"
		};
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class hgun_P07_F;
	class JLTS_DC17SA: hgun_P07_F
	{
		class WeaponSlotsInfo;
	};
	class JLTS_stun_muzzle;
	class Aux115_DC17SA: JLTS_DC17SA
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="115_DC17SA_Shield";
		author="Possum";
		displayName="[115] DC-17SA Blaster Pistol";
		descriptionShort="DC-17SA Blaster Pistol";
		scope=2;
		baseWeapon="115_DC17SA";
		picture="\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		cursor="115_Cur_2";
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"115_Magazine_DC17"
		};
		magazineWell[]={};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this",
			"115_SA_Stun"
		};
		class Aux115_SA_Stun: JLTS_stun_muzzle
		{
			magazines[]=
			{
				"115_MAG_Stun_x6"
			};
			magazineWell[]={};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"115_DC17SA_Set"
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.12;
			dispersion=0.0029;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
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
					"JLTS_DC17SA_flashlight"
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
	class Aux115_DC17SA_Shield: Aux115_DC17SA
	{
		displayName="[115] DC-17SA Shield";
		baseWeapon="115_DC17SA_Shield";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="115_DC17SA";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment"
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
