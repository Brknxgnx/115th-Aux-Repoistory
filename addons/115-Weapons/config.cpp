class CfgPatches
{
	class Aux115_WCore_Ammo
	{
		author="Possum";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		ammo[]=
		{
			"115_Ammo_Core",
			"115_Ammo_556",
			"115_Ammo_65",
			"115_Ammo_762",
			"115_Ammo_45acp",
			"115_Ammo_127x33",
			"115_Ammo_338",
			"115_Ammo_408",
			"115_ammo_Chaingun",
			"115_AMMO_UGL_HE",
			"115_ammo_40mm_Explosive",
			"115_ammo_40mm_Flare_white",
			"115_ammo_40mm_Flare_red",
			"115_ammo_40mm_Flare_green",
			"115_ammo_40mm_Flare_ir",
			"115_ammo_40mm_Smoke",
			"115_ammo_SmokeRed",
			"115_ammo_SmokeGreen",
			"115_ammo_SmokeYellow",
			"115_ammo_SmokePurple",
			"115_ammo_SmokeBlue",
			"115_ammo_SmokeOrange"
		};
		magazines[]=
		{
			"115_Magazine_Core",
			"115_Magazine_DC15S",
			"115_Magazine_Z6",
			"115_Magazine_DC15L",
			"115_Magazine_WESTAR",
			"115_Magazine_DC17",
			"115_Magazine_DC18",
			"115_Magazine_DC15A",
			"115_Magazine_DC15C",
			"115_Magazine_DC15LE",
			"115_Magazine_DC15X",
			"115_Magazine_Chaingun",
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
			"115_MAG_UGL_Smoke_Grenade_Orange",
			"115_Magazine_DW32",
			"115_Magazine_Valken"
		};
	};
};
class CfgWeaponCursors
{
	class throw;
	class Aux115_Cur_1: throw
	{
		texture="\AR121-Weapons\Ret\Crosshair_1281.paa";
	};
	class Aux115_Cur_2: throw
	{
		texture="\AR121-Weapons\Ret\Crosshair_1282.paa";
	};
	class Aux115_Cur_3: throw
	{
		texture="\AR121-Weapons\Ret\Crosshair_1283.paa";
	};
	class Aux115_Cur_4: throw
	{
		texture="\AR121-Weapons\Ret\Crosshair_1284.paa";
	};
	class Aux115_Cur_5: throw
	{
		texture="\AR121-Weapons\Ret\Crosshair_1285.paa";
	};
};
class CfgAmmo
{
	class BulletBase;
	class ShellBase;
	class ShotgunBase;
	class GrenadeBase;
	class SmokeShell;
	class FlareBase;
	class RocketBase;
	class MissileBase
	{
		class Components;
	};
	class 3AS_PlasmaBase;
	class Aux115_Ammo_Core: 3AS_PlasmaBase
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
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		flaresize=5;
		tracerscale=1.1;
		caliber=1;
		coefGravity=0;
		cartridge="";
		cost=1;
		timeToLive=10;
		deflecting=0;
		ExplosionEffects="3AS_ImpactPlasma";
		craterEffects="";
		explosive=0.1;
		tracerStartTime=0;
		tracerEndTime=10;
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
	class Aux115_Ammo_556: Aux115_Ammo_Core
	{
		hit=8;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		typicalspeed=920;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=8;
		suppressionRadusBulletClose=6;
		suppressionRadiusHit=8;
		audiblefire=35;
		caliber=0.86956501;
		timetolive=6;
	};
	class Aux115_Ammo_65: Aux115_Ammo_Core
	{
		hit=10;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		visiblefire=5;
		audiblefire=60;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		typicalSpeed=820;
		caliber=1;
	};
	class AAux115_Ammo_762: Aux115_Ammo_Core
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
	class Aux115_Ammo_45acp: Aux115_Ammo_Core
	{
		hit=6;
		audibleFire=50;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=8;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		caliber=1.4;
		typicalSpeed=280;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00082143;
		tracerScale=0.60000002;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	class Aux115_Ammo_127x33: Aux115_Ammo_Core
	{
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		audibleFire=50;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		visibleFireTime=3;
		caliber=2;
		airFriction=-0.00082143;
		typicalSpeed=820;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	class Aux115_Ammo_338: Aux115_Ammo_Core
	{
		hit=16;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=5;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		visibleFireTime=3;
		tracerScale=1.3;
		caliber=2.8;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
	};
	class Aux115_Ammo_408: Aux115_Ammo_Core
	{
		hit=30;
		visibleFire=5;
		audibleFire=120;
		visibleFireTime=3;
		typicalspeed=1800;
		caliber=2.4000001;
		tracerScale=1.3;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectFly="3AS_PlasmaBolt_Blue_Fly";
		coefgravity=0;
		airfriction=0;
		flaresize=4;
		indirecthit=0;
		indirecthitrange=0;
	};
	class Aux115_Ammo_50cal: Aux115_Ammo_Core
	{
		hit=50;
		indirecthit=0;
		indirecthitrange=0;
		caliber=3;
		ACE_caliber=3;
		ACE_BulletMass=9.9999997e-006;
		typicalspeed=1990;
		suppressionRadiusBulletClose=6;
		suppressionradiushit=8;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		effectfly="3AS_PlasmaBolt_Blue_Fly";
		flaresize=4;
		tracerScale=1;
		effectflare="FlareShell";
		timetolive=4;
		coefgravity=0;
		airfriction=0;
		class CamShakeExplode
		{
			power=3.6055501;
			duration=0.80000001;
			frequency=20;
			distance=10.8167;
		};
		class CamShakeHit
		{
			power=13;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class SWLW_ammo_40mm_he;
	class Aux115_AMMO_UGL_HE: SWLW_ammo_40mm_he
	{
		hit=25;
		indirecthit=20;
		fuseDistance=15;
		indirectHitRange=6;
	};
	class Aux115_ammo_40mm_Explosive: Aux115_AMMO_UGL_HE
	{
		hit=60;
		indirecthit=35;
		fuseDistance=15;
		indirectHitRange=12;
	};
	class ACE_40mm_Flare_white;
	class Aux115_ammo_40mm_Flare_white: ACE_40mm_Flare_white
	{
		intensity=1250000;
		timeToLive=45;
		coefGravity=0.25;
	};
	class Aux115_ammo_40mm_Flare_red: Aux115_ammo_40mm_Flare_white
	{
		lightColor[]={0.5,0.25,0.25,0};
	};
	class Aux115_ammo_40mm_Flare_green: Aux115_ammo_40mm_Flare_white
	{
		lightColor[]={0.25,0.5,0.25,0};
	};
	class Aux115_ammo_40mm_Flare_ir: Aux115_ammo_40mm_Flare_white
	{
		nvgOnly=1;
	};
	class OPTRE_40mm_Smoke;
	class Aux115_ammo_40mm_Smoke: OPTRE_40mm_Smoke
	{
		deflecting=5;
		explosive=1;
		simulation="shotSmoke";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_White";
		timetolive=60;
	};
	class OPTRE_40mm_SmokeRed;
	class Aux115_ammo_SmokeRed: OPTRE_40mm_SmokeRed
	{
		deflecting=5;
		explosive=1;
		simulation="shotSmoke";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Red";
	};
	class OPTRE_40mm_SmokeGreen;
	class Aux115_ammo_SmokeGreen: OPTRE_40mm_SmokeGreen
	{
		deflecting=5;
		explosive=1;
		simulation="shotSmoke";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Green";
	};
	class OPTRE_40mm_SmokeYellow;
	class Aux115_ammo_SmokeYellow: OPTRE_40mm_SmokeYellow
	{
		deflecting=5;
		explosive=1;
		simulation="shotSmoke";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Yellow";
	};
	class OPTRE_40mm_SmokePurple;
	class Aux115_ammo_SmokePurple: OPTRE_40mm_SmokePurple
	{
		deflecting=5;
		explosive=1;
		simulation="shotSmoke";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Purple";
	};
	class OPTRE_40mm_SmokeBlue;
	class Aux115_ammo_SmokeBlue: OPTRE_40mm_SmokeBlue
	{
		deflecting=5;
		explosive=1;
		simulation="shotSmoke";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Blue";
	};
	class OPTRE_40mm_SmokeOrange;
	class Aux115_ammo_SmokeOrange: OPTRE_40mm_SmokeOrange
	{
		deflecting=5;
		explosive=1;
		simulation="shotSmoke";
		explosionTime=0;
		fuseDistance=0;
		explosionEffects="OPTRE_Effect_GL_Orange";
	};
	class 3AS_Chaingun_Ammo;
	class Aux115_ammo_Chaingun: 3AS_Chaingun_Ammo
	{
		model="\3AS\3AS_Weapons\Data\tracer_yellow.p3d";
		effectFly="3AS_PlasmaBolt_Yellow_Fly";
		hit=18;
		indirectHit=0;
		indirectHitRange=0;
		caliber=1;
		ACE_caliber=0;
		cost=500;
		airFriction=0;
		sideairFriction=0;
		coefGravity=0;
		maxSpeed=850;
		typicalSpeed=850;
		initTime=0;
		thrustTime=3.4000001;
		thrust=200;
		fuseDistance=0;
		simulationStep=0.02;
		timeToLive=4;
		whistleDist=20;
		triggerOnImpact=1;
		triggerDistance=2.5;
		directionalExplosion=0;
		dangerRadiusBulletClose=-1;
		dangerRadiusHit=-1;
		warheadName="";
		deleteParentWhenTriggered=0;
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=850;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		minTimeToLive=0;
		simulation="shotMissile";
		flightProfiles[]=
		{
			"Direct"
		};
		proximityExplosionDistance=5;
		explosive=0.2;
		CraterEffects="ExploAmmoCrater";
		effectFlare="FlareShell";
		effectsFire="CannonFire";
		effectsMissile="EmptyEffect";
		effectsMissileInit="";
		effectsSmoke="SmokeShellWhite";
		explosionAngle=60;
		explosionEffects="3AS_ImpactPlasma";
		explosionEffectsDir="explosionDir";
		airLock=0;
		aiAmmoUsageFlags="64 + 128 + 256";
		irLock=0;
		maneuvrability=4;
		allowAgainstInfantry=1;
		trackOversteer=1;
		maxControlRange=600;
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
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			150
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			200
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			200
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1,
			1,
			2000
		};
		soundFly[]=
		{
			"",
			1,
			1,
			50
		};
		SoundSetExplosion[]=
		{
			""
		};
		class CamShakeFire
		{
			power=0.80000001;
			duration=1.2;
			frequency=18;
			distance=1;
		};
	};
	class JLTS_bullet_stun;
	class Aux115_ammo_Stun: JLTS_bullet_stun
	{
		knd_isStunAmmo=1;
		audibleFire=2;
		visibleFireTime=3;
		visibleFire=1;
		cartridge="";
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
	};
	class CA_LauncherMagazine: CA_Magazine
	{
	};
	class Aux115_Magazine_Core: CA_Magazine
	{
		author="Possum";
		scope=2;
		displayName="Dev Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_Core";
		count=30;
		mass=10;
		initspeed=1500;
		tracersEvery=1;
		lastRoundsTracer=16;
		descriptionShort="Standard charge cell.";
	};
	class Aux115_Magazine_DC15S: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="DC15S Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_556";
		count=60;
		mass=10;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=60;
		descriptionShort="60rnd DC15S Magazine.";
		displayNameShort="60rnd DC15S.";
	};
	class Aux115_Magazine_Z6: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="Z6 Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_556";
		count=250;
		mass=40;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=250;
		descriptionShort="250rnd Z6 Magazine.";
		displayNameShort="250rnd Z6.";
	};
	class Aux115_Magazine_DC15L: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="DC15L Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_65";
		count=150;
		mass=30;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=150;
		descriptionShort="150rnd DC15L Magazine.";
		displayNameShort="150rnd DC15L.";
	};
	class Aux115_Magazine_Chaingun: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="Chaingun Drum";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_ammo_Chaingun";
		count=500;
		mass=70;
		initspeed=300;
		tracersEvery=1;
		lastRoundsTracer=500;
		descriptionShort="500rnd Chaingun Drum.";
		displayNameShort="500rnd Drum.";
	};
	class Aux115_Magazine_DC17: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="DC17 Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_45acp";
		count=15;
		mass=7;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=15;
		descriptionShort="15rnd DC17 Magazine.";
		displayNameShort="15rnd DC17.";
	};
	class Aux115_Magazine_WESTAR: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="Westar Magazine";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_65";
		count=75;
		mass=15;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="Westar Magazine.";
		displayNameShort="Westar Magazine.";
	};
	class Aux115_Magazine_DC18: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="DC18 Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_127x33";
		count=15;
		mass=10;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=8;
		descriptionShort="15rnd DC18 Magazine.";
		displayNameShort="15rnd DC18.";
	};
	class Aux115_Magazine_DC15A: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="DC15A Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_556";
		count=50;
		mass=10;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="50rnd DC15A Magazine.";
		displayNameShort="50rnd DC15A.";
	};
	class Aux115_Magazine_DC15C: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="DC15C Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_556";
		count=40;
		mass=10;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="40rnd DC15C Magazine.";
		displayNameShort="40rnd DC15C.";
	};
	class Aux115_Magazine_DC15LE: Aux115_Magazine_Core
	{
		author="Possum";
		scope=0;
		displayName="DC15LE Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_338";
		count=20;
		mass=15;
		initspeed=2100;
		tracersEvery=1;
		lastRoundsTracer=20;
		descriptionShort="20rnd DC15LE Magazine.";
		displayNameShort="20rnd DC15LE";
	};
	class Aux115_Magazine_DC15X: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="DC15X Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_408";
		count=12;
		mass=15;
		initspeed=2100;
		tracersEvery=1;
		lastRoundsTracer=15;
		descriptionShort="12rnd DC15X Magazine.";
		displayNameShort="12rnd DC15X.";
	};
	class SWLW_mag_40mm_1rnd;
	class Aux115_MAG_UGL_HE_3RND: SWLW_mag_40mm_1rnd
	{
		scope=2;
		displayName="[115] HE Plasma Cell mag, 3rnd";
		ammo="Aux115_AMMO_UGL_HE";
		count=3;
		mass=18;
		initspeed=80;
		descriptionShort="3rnd HE UGL.";
		displayNameShort="3rnd HE.";
	};
	class Aux115_MAG_UGL_EX_1RND: Aux115_MAG_UGL_HE_3RND
	{
		scope=2;
		displayName="[115] HE Plasma Cell mag, 1rnd";
		ammo="115_ammo_40mm_Explosive";
		count=1;
		mass=6;
		initspeed=80;
		descriptionShort="1rnd Explosive UGL.";
		displayNameShort="1rnd Ex.";
	};
	class ACE_40mm_Flare_white;
	class Aux115_MAG_UGL_Flare_white: ACE_40mm_Flare_white
	{
		author="Possum";
		ammo="115_ammo_40mm_Flare_white";
		displayName="[115] White Flare";
		descriptionShort="White Flare";
		displayNameShort="White Flare.";
		mass=8;
	};
	class Aux115_MAG_UGL_Flare_red: Aux115_MAG_UGL_Flare_white
	{
		ammo="115_ammo_40mm_Flare_red";
		displayName="[115] Red Flare";
		descriptionShort="Red Flare";
		displayNameShort="Red Flare.";
		mass=8;
	};
	class Aux115_MAG_UGL_Flare_green: Aux115_MAG_UGL_Flare_white
	{
		ammo="115_ammo_40mm_Flare_green";
		displayName="[115] Green Flare";
		descriptionShort="Green Flare";
		displayNameShort="Green Flare.";
		mass=8;
	};
	class Aux115_MAG_UGL_Flare_IR: Aux115_MAG_UGL_Flare_white
	{
		ammo="115_ammo_40mm_Flare_ir";
		displayName="[115] Hunt IR Round";
		descriptionShort="Hunt IR";
		displayNameShort="Hunt IR.";
		mass=8;
	};
	class OPTRE_3Rnd_Smoke_Grenade_shell;
	class OPTRE_3Rnd_SmokeRed_Grenade_shell;
	class OPTRE_3Rnd_SmokeGreen_Grenade_shell;
	class OPTRE_3Rnd_SmokeYellow_Grenade_shell;
	class OPTRE_3Rnd_SmokePurple_Grenade_shell;
	class OPTRE_3Rnd_SmokeOrange_Grenade_shell;
	class OPTRE_3Rnd_SmokeBlue_Grenade_shell;
	class Aux115_MAG_UGL_Smoke_Grenade_shell: OPTRE_3Rnd_Smoke_Grenade_shell
	{
		displayName="[115] White Smoke, 3rnd";
		ammo="115_ammo_40mm_Smoke";
		mass=10;
		descriptionShort="3rnd White Smoke";
		displayNameShort="White Smoke.";
	};
	class Aux115_MAG_UGL_Smoke_Grenade_Red: OPTRE_3Rnd_SmokeRed_Grenade_shell
	{
		displayName="[115] Red Smoke, 3rnd";
		ammo="115_ammo_SmokeRed";
		mass=10;
		descriptionShort="3rnd Red Smoke";
		displayNameShort="Red Smoke.";
	};
	class Aux115_MAG_UGL_Smoke_Grenade_Green: OPTRE_3Rnd_SmokeGreen_Grenade_shell
	{
		displayName="[115] Green Smoke, 3rnd";
		ammo="115_ammo_SmokeGreen";
		mass=10;
		descriptionShort="3rnd Green Smoke";
		displayNameShort="Green Smoke.";
	};
	class Aux115_MAG_UGL_Smoke_Grenade_Yellow: OPTRE_3Rnd_SmokeYellow_Grenade_shell
	{
		displayName="[115] Yellow Smoke, 3rnd";
		ammo="115_ammo_SmokeYellow";
		mass=10;
		descriptionShort="3rnd Yellow Smoke";
		displayNameShort="Yellow Smoke.";
	};
	class Aux115_MAG_UGL_Smoke_Grenade_Purple: OPTRE_3Rnd_SmokePurple_Grenade_shell
	{
		displayName="[115] Purple Smoke, 3rnd";
		ammo="115_ammo_SmokePurple";
		mass=10;
		descriptionShort="3rnd Purple Smoke";
		displayNameShort="Purple Smoke.";
	};
	class Aux115_MAG_UGL_Smoke_Grenade_Blue: OPTRE_3Rnd_SmokeBlue_Grenade_shell
	{
		displayName="[115] Blue Smoke, 3rnd";
		ammo="115_ammo_SmokeBlue";
		mass=10;
		descriptionShort="3rnd Blue Smoke";
		displayNameShort="Blue Smoke.";
	};
	class Aux115_MAG_UGL_Smoke_Grenade_Orange: OPTRE_3Rnd_SmokeOrange_Grenade_shell
	{
		displayName="[115] Orange Smoke, 3rnd";
		ammo="115_ammo_SmokeOrange";
		mass=10;
		descriptionShort="3rnd Orange Smoke";
		displayNameShort="Orange Smoke.";
	};
	class 30rnd_762x39_AK12_Mag_F;
	class Aux115_MAG_Stun_x6: 30rnd_762x39_AK12_Mag_F
	{
		count=6;
		mass=6;
		JLTS_stunDuration=30;
		initspeed=250;
		ammo="115_ammo_Stun";
		displayName="[115] 6rnd Stun (30sec) Magazine mag, 10rnd";
		displayNameShort="6rnd 30 sec stun magazine";
		descriptionShort="30 sec stun magazine";
		model="\MRC\JLTS\weapons\Core\stun_mag.p3d";
		picture="\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca.paa";
		tracersEvery=1;
	};
	class Aux115_Magazine_DW32: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="DW32 Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_65";
		count=22;
		mass=15;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=22;
		descriptionShort="22rnd DW32 Magazine.";
		displayNameShort="22rnd DW32.";
	};
	class Aux115_Magazine_Valken: Aux115_Magazine_Core
	{
		author="Possum";
		scope=2;
		displayName="Valken 38x Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="115_Ammo_762";
		count=15;
		mass=15;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=22;
		descriptionShort="15rnd Valken Magazine.";
		displayNameShort="15rnd Valken.";
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
