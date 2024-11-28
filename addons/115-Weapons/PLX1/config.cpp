class CfgPatches
{
	class Aux115_WCore_PLX
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
			"115_PLX1_AT",
			"115_PLX1_AA"
		};
		magazines[]=
		{
			"115_PLX1_AT_mag",
			"115_PLX1_AA_mag"
		};
		weapons[]=
		{
			"115_PLX1"
		};
	};
};
class CfgAmmo
{
	class 3AS_M_MK43_AT;
	class Aux115_PLX_Ammo_AT: 3AS_M_MK43_AT
	{
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit=800;
		indirectHit=200;
		indirectHitRange=4;
		explosive=1;
		effectsMissile="115_aux_effects_missile_plx_blue";
		warheadName="AT";
		maneuvrability=30;
	};
	class M_Titan_AA;
	class Aux115_PLX_Ammo_AA: M_Titan_AA
	{
		cmImmunity=1;
		hit=800;
		indirectHit=200;
		indirectHitRange=4;
		explosive=1;
		effectsMissile="115_aux_effects_missile_plx_green";
		warheadName="AA";
		missileLockMaxDistance=4000;
		manueuvrability=30;
		sideAirFriction=0.02;
		missileKeepLockedCone=360;
	};
};
class CfgMagazines
{
	class 3AS_JLTS_MK43_AT;
	class 3AS_JLTS_MK39_AA;
	class Aux115_PLX1_AT_mag: 3AS_JLTS_MK43_AT
	{
		ammo="115_PLX_Ammo_AT";
		JLTS_hasElectronics=1;
		displaynameshort="AT";
		JLTS_hasEMPProtection=1;
		author="115";
		scope=2;
		mass=80;
		scopeArsenal=2;
		displayName="[115] PLX-1 AT Rocket";
		descriptionShort="AT Rocket";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_at_CA.paa";
		count=2;
	};
	class Aux115_PLX1_AA_mag: 3AS_JLTS_MK39_AA
	{
		ammo="115_PLX_Ammo_AA";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="115";
		displaynameshort="AA";
		scope=2;
		mass=40;
		scopeArsenal=2;
		displayName="[115] PLX-1 AA Rocket";
		descriptionShort="AA Rocket";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		count=2;
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
	class launch_Titan_base;
	class launch_Titan_short_base: launch_Titan_base
	{
		class WeaponSlotsInfo;
	};
	class JLTS_PLX1_AT: launch_Titan_short_base
	{
		class WeaponSlotsInfo;
	};
	class Aux115_PLX1: JLTS_PLX1_AT
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="115";
		scope=2;
		scopeArsenal=2;
		canLock=2;
		modelOptics="A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
		weaponInfoType="RscOpticsRangeFinderVorona";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		cursor="missile";
		ace_overpressure_angle=45;
		ace_overpressure_damage=0.40000001;
		ace_overpresssure_priority=1;
		ace_overpressure_range=10;
		displayName="[115] PLX-1 Guided Missile Launcher";
		descriptionShort="Guided Missile Launcher";
		model="\MRC\JLTS\weapons\PLX1\PLX1.p3d";
		modelSpecial="";
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
				distanceZoomMax=900;
				memoryPointCamera="eye";
				opticsFlare=0;
				opticsDisablePeripherialVision=1;
				discretefov[]={0.0583333,0.0291667};
				discreteInitIndex=0;
				cameraDir="look";
				thermalMode[]={0,1};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\PLX1\anims\PLX1_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\PLX1\data\PLX1_body_co.paa",
			"\MRC\JLTS\weapons\PLX1\data\PLX1_tube_co.paa",
			"\MRC\JLTS\weapons\PLX1\data\PLX1_mag_co.paa"
		};
		magazines[]=
		{
			"115_PLX1_AT_mag",
			"115_PLX1_AA_mag"
		};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=220;
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
