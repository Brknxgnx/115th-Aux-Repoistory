class CfgPatches
{
	class Aux115_CIS_E5_Standard
	{
		author="Possum";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"115_CIS_E5",
			"115_CIS_E5_Fried"
		};
		ammo[]={};
		magazines[]={};
	};
};
class CfgMagazines
{
	class JLTS_E5_mag;
	class Aux115_CIS_E5_Mag: JLTS_E5_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="Possum";
		count=50;
		displayName="(115 OpFor) E-5 Mag";
		descriptionShort="CIS E5 Mag";
		displayNameShort="CIS E5 Mag";
		ammo="115_CIS_Ammo_65";
		tracersEvery=1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class GunParticles;
class WeaponSlotsInfo;
class CfgWeapons
{
	class JLTS_E5;
	class Aux115_CIS_E5: JLTS_E5
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="115_CIS_E5_Fried";
		JLTS_repairTime=20;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="JLTS_E5_shield";
		author="Possum";
		scope=2;
		displayName="(115 OpFor) E-5 Droid Rifle";
		descriptionShort="E-5 CIS Rifle";
		magazines[]=
		{
			"115_CIS_E5_Mag"
		};
		magazineWell[]={};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.0020000001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
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
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0020000001;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=44;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
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
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class JLTS_E5_fried;
	class Aux115_CIS_E5_Fried: JLTS_E5_fried
	{
		JLTS_isFried=1;
		JLTS_shieldedWeapon="JLTS_E5_shield_fried";
		baseWeapon="115_CIS_E5_Fried";
		displayName="Fried E-5 Rifle";
		descriptionShort="Friend E-5 CIS Rifle";
		scope=1;
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449302";
};
