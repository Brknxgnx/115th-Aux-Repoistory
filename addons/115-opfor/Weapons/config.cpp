class CfgPatches
{
	class Aux115_CIS_Ammo
	{
		author="115th Community";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		ammo[]=
		{
			"115_CIS_Ammo_Core",
			"115_CIS_Ammo_556",
			"115_CIS_Ammo_65",
			"115_CIS_Ammo_762",
			"115_CIS_Ammo_45acp",
			"115_CIS_Ammo_B2"
		};
		magazines[]={};
	};
};
class cfgWeapons
{
	class JLTS_EPL2;
	class Aux115_EPL2_Weapon: JLTS_EPL2
	{
		displayname="(115 OpFor) EPL2";
		magazines[]=
		{
			"3AS_6Rnd_RocketGrenades_HE",
			"3Rnd_HE_Grenade_shell"
		};
	};
};
class CfgAmmo
{
	class 3AS_PlasmaBase;
	class Aux115_CIS_Ammo_Core: 3AS_PlasmaBase
	{
		visibleFire=5;
		audibleFire=20;
		visibleFireTime=2;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=-1;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		hit=1;
		indirectHit=0;
		indirectHitRange=0;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly="3AS_PlasmaBolt_Red_Fly";
		lightcolor[]={0.25,0.25,0.5};
		flaresize=5;
		tracerscale=1.1;
		effectflare="FlareShell";
		tracerstarttime=0;
		tracerendtime=10;
		caliber=1;
		coefGravity=0;
		cartridge="FxCartridge_556";
		cost=1;
		timeToLive=10;
		deflecting=0;
		ExplosionEffects="3AS_ImpactPlasma";
		craterEffects="";
		explosive=0.1;
		airFriction=-0.00030000001;
		muzzleEffect="";
		waterEffectOffset=0.80000001;
		aiAmmoUsageFlags="64 + 128 + 256";
		soundSetBulletFly[]=
		{
			"3AS_PlasmaFlyBy_SoundSet"
		};
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
	class Aux115_CIS_Ammo_556: Aux115_CIS_Ammo_Core
	{
		hit=12;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly="3AS_PlasmaBolt_Red_Fly";
		typicalspeed=920;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=8;
		dangerRadusHit=12;
		suppressionRadusBulletClose=6;
		suppressionRadusHit=8;
		audiblefire=35;
		caliber=0.86956501;
		timetolive=6;
	};
	class Aux115_CIS_Ammo_65: Aux115_CIS_Ammo_Core
	{
		hit=14;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly="3AS_PlasmaBolt_Red_Fly";
		visiblefire=5;
		audiblefire=60;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=14;
		typicalSpeed=820;
		caliber=2;
	};
	class Aux115_CIS_Ammo_B2: Aux115_CIS_Ammo_Core
	{
		hit=22;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly="3AS_PlasmaBolt_Red_Fly";
		visiblefire=5;
		audiblefire=60;
		dangerRadiusBulletClose=14;
		dangerRadiusHit=18;
		suppressionRadiusBulletClose=14;
		suppressionRadiusHit=16;
		typicalSpeed=820;
		caliber=2;
	};
	class Aux115_CIS_Ammo_762: Aux115_CIS_Ammo_Core
	{
		hit=16;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly="3AS_PlasmaBolt_Red_Fly";
		explosive=0.1;
		visibleFire=5;
		audibleFire=70;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=16;
		typicalSpeed=835;
		caliber=2;
	};
	class Aux115_CIS_Ammo_45acp: Aux115_CIS_Ammo_Core
	{
		hit=10;
		audibleFire=50;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=10;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=10;
		caliber=1.4;
		typicalSpeed=280;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00082143;
		tracerScale=0.60000002;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly="3AS_PlasmaBolt_Red_Fly";
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449302";
};
