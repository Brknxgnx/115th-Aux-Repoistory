class CfgPatches
{
	class Aux115_Land_Weapons
	{
		addonRootClass="115_land_Vehicle";
		requiredAddons[]=
		{
			"115_Vehicles",
			"115_WCore_Ammo"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"115_saber_cannon",
			"115_coax",
			"115_bison_105",
			"115_Weapon_30mm"
		};
		ammo[]=
		{
			"115_30_APFSDS_Ammo",
			"115_30_HE_Ammo",
			"115_105mm_V_HEAT",
			"115_Ammo_30mm_HE_Blue"
		};
		magazines[]=
		{
			"115_magazine_Saber_AP",
			"115_magazine_Saber_HE",
			"115_magazine_Saber_MG",
			"115_105mm_V_HEAT_MAGAZINE",
			"115_Mag_30mm_HE_100rnd_Blue"
		};
	};
};
class CfgAmmo
{
	class B_30mm_APFSDS;
	class Aux115_30_APFSDS_Ammo: B_30mm_APFSDS
	{
		author="Greg";
		displayname="AP";
		lightcolor[]={0.25,0.5,0.25};
		submunitionAmmo="ammo_Penetrator_120mm";
		submunitionDirectionType="SubmunitionModelDirection";
		flaresize=3;
		tracerScale=1;
		effectflare="FlareShell";
		tracerstarttime=9.9999997e-005;
		tracerendtime=10;
		nvgonly=0;
		airlock=1;
		irtarget=1;
		brightness=1000;
		timetolive=5;
		initTime=0;
		airfriction=0;
		coefgravity=0;
		deflecting=0;
		model="\3AS\3AS_Weapons\Data\tracer_shell_green.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Green_Fly";
		visibleFireTime=3;
		hit=300;
		indirectHit=15;
		indirectHitRange=0.5;
		warheadName="AP";
		dangerRadiusHit=100;
		suppressionRadiusHit=18;
		explosive=0;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		typicalSpeed=1550;
		caliber=35.268799;
	};
	class B_30mm_HE;
	class Aux115_30_HE_Ammo: B_30mm_HE
	{
		author="Greg";
		displayname="HE";
		lightcolor[]={0.25,0.25,0.5};
		flaresize=3;
		tracerScale=1;
		effectflare="FlareShell";
		tracerstarttime=9.9999997e-005;
		tracerendtime=10;
		nvgonly=0;
		airlock=1;
		irtarget=1;
		brightness=1000;
		timetolive=5;
		initTime=0;
		airfriction=0;
		coefgravity=0;
		deflecting=0;
		model="\3AS\3AS_Weapons\Data\tracer_shell_blue.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Blue_Fly";
		visibleFireTime=3;
		hit=150;
		indirectHit=30;
		indirectHitRange=6;
		dangerRadiusHit=120;
		suppressionRadiusHit=32;
		warheadName="HE";
		explosive=0.80000001;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
	};
	class Sh_105mm_HEAT_MP;
	class Aux115_105mm_V_HEAT: Sh_105mm_HEAT_MP
	{
		author="Possum";
		lightcolor[]={0.25,0.25,0.5};
		flaresize=5;
		tracerScale=3;
		effectflare="FlareShell";
		tracerstarttime=0.050000001;
		tracerendtime=10;
		initSpeed=300;
		typicalSpeed=300;
		hit=100;
		indirectHit=35;
		indirectHitRange=0.5;
		nvgonly=0;
		airlock=1;
		irtarget=1;
		brightness=1000;
		timetolive=5;
		initTime=0;
		airfriction=0;
		coefgravity=0;
		deflecting=0;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	class B_30mm_MP_Tracer_Red;
	class Aux115_Ammo_30mm_HE_Blue: B_30mm_MP_Tracer_Red
	{
		author="Possum";
		lightcolor[]={0.25,0.25,0.5};
		flaresize=5;
		tracerScale=3;
		effectflare="FlareShell";
		tracerstarttime=0.050000001;
		tracerendtime=10;
		nvgonly=0;
		airlock=1;
		irtarget=1;
		brightness=1000;
		timetolive=5;
		initTime=0;
		airfriction=0;
		coefgravity=0;
		deflecting=0;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	class Aux115_Ammo_Core;
	class Aux115_Ammo_Tank_762: Aux115_Ammo_Core
	{
		hit=12;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		explosive=0.1;
		visibleFire=5;
		audibleFire=70;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		typicalSpeed=835;
		caliber=1.8;
	};
};
class CfgMagazines
{
	class 140Rnd_30mm_MP_shells_Tracer_Yellow;
	class Aux115_Mag_30mm_HE_100rnd_Blue: 140Rnd_30mm_MP_shells_Tracer_Yellow
	{
		ammo="115_Ammo_30mm_HE_Blue";
		count=100;
		author="Possum";
		displayName="HE Magazine";
		displayNameMFDFormat="HE";
		displayNameShort="HE";
	};
	class 60Rnd_30mm_APFSDS_shells;
	class Aux115_magazine_Saber_AP: 60Rnd_30mm_APFSDS_shells
	{
		displayName="Saber AP";
		displayNameShort="AP";
		ammo="115_30_APFSDS_Ammo";
		initSpeed=1000;
		tracersevery=1;
		count=20;
	};
	class Aux115_magazine_Saber_HE: 60Rnd_30mm_APFSDS_shells
	{
		displayName="Saber HE";
		displayNameShort="HE";
		ammo="115_30_HE_Ammo";
		initSpeed=1000;
		tracersevery=1;
		count=35;
	};
	class 1000Rnd_762x51_Belt;
	class Aux115_magazine_Saber_MG: 1000Rnd_762x51_Belt
	{
		displayName="Saber MG";
		displayNameShort="MG";
		ammo="15_Ammo_Tank_762";
		initSpeed=1000;
		tracersevery=1;
		count=1000;
	};
	class Aux115_105mm_V_HEAT_MAGAZINE: Aux115_magazine_Saber_AP
	{
		ammo="115_105mm_V_HEAT";
		initSpeed=1000;
		tracersevery=1;
		count=40;
	};
};
class cfgWeapons
{
	class OPTRE_105mm_M556;
	class Aux115_bison_105: OPTRE_105mm_M556
	{
		displaynameshort="Mudworm Main Gun";
		displayname="Mudworm Main Gun";
		magazines[]=
		{
			"115_105mm_V_HEAT_MAGAZINE"
		};
	};
	class 3AS_Sabre_Cannons;
	class Aux115_saber_cannon: 3AS_Sabre_Cannons
	{
		magazines[]=
		{
			"115_magazine_Saber_AP",
			"115_magazine_Saber_HE"
		};
	};
	class LMG_RCWS;
	class LMG_coax: LMG_RCWS
	{
		class manual;
	};
	class Aux115_coax: LMG_coax
	{
		displaynameshort="Coax";
		displayname="Coax";
		magazines[]=
		{
			"115_magazine_Saber_MG"
		};
		class manual: manual
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
					"AR121-Weapons\Z6\Z6.ogg",
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
		};
	};
	class OPTRE_M230;
	class Aux115_Weapon_30mm: OPTRE_M230
	{
		displaynameshort="Mudworm Main Gun";
		displayname="Mudworm Main Gun";
		magazines[]=
		{
			"115_Mag_30mm_HE_100rnd_Blue"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449310";
};
