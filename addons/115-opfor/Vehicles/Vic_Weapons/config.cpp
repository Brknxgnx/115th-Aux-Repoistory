class CfgPatches
{
	class Aux115_CIS_Vic_Weapons
	{
		author="Possum";
		requiredAddons[]=
		{
			"cba_common",
			"cba_events",
			"ls_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgAmmo
{
	class Sh_105mm_APFSDS_T_Green;
	class Sh_120mm_HE;
	class Aux115_CIS_King_Cannon_Ammo: Sh_105mm_APFSDS_T_Green
	{
		caliber=10;
		hit=400;
		explosive=1;
		indirectHitRange=5;
		model="swlw_main\Effects\laser_red.p3d";
		effectfly="SWLW_plasma_red";
		flaresize=10;
		tracerscale=2;
	};
	class ls_50mm_laat_he;
	class Aux115_CIS_Vulture_30mm_Ammo: ls_50mm_laat_he
	{
		model="SWLW_main\Effects\laser_red.p3d";
		soundFly[]=
		{
			"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",
			0,
			1,
			1
		};
		flaresize=4;
		caliber=3;
		maxLeadSpeed=2000;
		allowAgainstInfantry=1;
		tracersEvery=1;
		cost=30;
		hit=120;
		explosionEffects="ATRocketExplosion";
		indirectHit=6;
		mass=2;
		indirectHitRange=0.1;
		tracerscale=2;
	};
};
class CfgMagazines
{
	class 40Rnd_105mm_APFSDS_T_Green;
	class ls_30Rnd_120mm_AP_mag_red;
	class Aux115_CIS_King_Cannon_Mag: 40Rnd_105mm_APFSDS_T_Green
	{
		scope=2;
		displayName="King AAT Overcharged Plasma (Red)";
		displayNameShort="Overcharged";
		ammo="115_CIS_King_Cannon_Ammo";
		count=30;
		tracersEvery=1;
		muzzleImpulseFactor[]={1,6};
	};
	class 1000Rnd_25mm_shells;
	class Aux115_CIS_Vulture_30mm_Mag_x1000: 1000Rnd_25mm_shells
	{
		displayName="descriptionshort=""Vulture main cannon""";
		initSpeed=800;
		displayNameShort="High Energy";
		ammo="115_CIS_Vulture_30mm_Ammo";
		tracersEvery=1;
		count=1000;
	};
};
class LowROF;
class player;
class manual;
class CfgWeapons
{
	class ls_aat_120mm_base;
	class Aux115_CIS_King_Cannon_Weapon: ls_aat_120mm_base
	{
		scope=1;
		displayName="Overcharged AAT Cannon";
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};
		magazines[]=
		{
			"AR121_CIS_King_Cannon_Mag"
		};
		reloadTime=6;
		magazineReloadTime=6;
		autoReload=1;
		modes[]=
		{
			"player",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlb_core\data\sounds\vehicles\aat\weapon\aat_main_shot.wss",
					3.1622777,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=6;
			magazineReloadTime=6;
			autoReload=1;
			autoFire=0;
			dispersion=0.00056999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class TopDown: player
		{
			textureType="topDown";
			displayName="$STR_A3_FireMode_TopDown0";
			minRange=150;
			minRangeProbab=0.40000001;
			midRange=400;
			midRangeProbab=0.94999999;
			maxRange=8000;
			maxRangeProbab=0.94999999;
		};
		class close: player
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=0.5;
			aiRateOfFireDistance=500;
			minRange=5;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.85000002;
		};
		class short: close
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=1000;
			minRange=500;
			minRangeProbab=0.30000001;
			midRange=1000;
			midRangeProbab=0.85000002;
			maxRange=1500;
			maxRangeProbab=0.85000002;
		};
		class medium: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=8;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1250;
			minRange=1000;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.85000002;
			maxRange=2000;
			maxRangeProbab=0.80000001;
		};
		class far: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=10;
			aiRateOfFireDispersion=8;
			aiRateOfFireDistance=1500;
			minRange=1500;
			minRangeProbab=0.75;
			midRange=2000;
			midRangeProbab=0.80000001;
			maxRange=3500;
			maxRangeProbab=0.050000001;
		};
	};
	class Cannon_30mm_Plane_CAS_02_F;
	class Aux115_CIS_Vulture_cannon_Weapon: Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[]={};
		magazines[]=
		{
			"115_CIS_Vulture_30mm_Mag_x1000"
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium"
		};
		ballisticsComputer=1;
		displayName="Vulture Main Cannon";
		class manual: LowROF
		{
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.1;
			dispersion=0.0020000001;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"3AS\3AS_Main\Sounds\VultureDroidBlaster\Vulturegun1.ogg",
					1.5,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: manual
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			burst=50;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			burst=30;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=2;
			burst=30;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.1;
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449302";
};
