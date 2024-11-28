class CfgPatches
{
	class Aux115_WCore_Mortar
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
			"115_Mortar",
			"115_Bag_Mortar"
		};
		ammo[]=
		{
			"115_Mortar_Ammo_HE",
			"115_Mortar_Ammo_Smoke",
			"115_Mortar_Ammo_Flare"
		};
		magazines[]=
		{
			"115_Mortar_Shell_HE",
			"115_Mortar_Shell_Smoke",
			"115_Mortar_Shell_Flare"
		};
	};
};
class Mode_SemiAuto;
class CfgAmmo
{
	class Components;
	class SensorTemplateIR;
	class 3AS_82mm_HE_Mortar;
	class Aux115_Mortar_Ammo_HE: 3AS_82mm_HE_Mortar
	{
		displayname="HE Mortar Shell";
		hit=165;
		indirectHit=52;
		indirectHitRange=18;
		cost=200;
		muzzleEffect="";
		warheadName="HE";
		dangerRadiusHit=750;
		suppressionRadiusHit=75;
		typicalSpeed=800;
		caliber=10;
		deflecting=0;
		explosive=0.80000001;
		class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_82mm_Flare_White;
	class Aux115_Mortar_Ammo_Flare: 3AS_82mm_Flare_White
	{
		timeToLive=45;
		displayname="Mortar Flare";
		model="\A3\weapons_f\ammo\shell";
		effectFlare="CounterMeasureFlare";
		aimAboveTarget[]={30,60,120,180,240,300,360};
		aimAboveDefault=4;
		triggerTime=-1;
		triggerSpeedCoef=1;
		lightColor[]={0.94999999,0.94999999,1,0.5};
		smokeColor[]={1,1,1,0.5};
		intensity=10000;
	};
	class 3AS_82mm_Smoke_White;
	class AR121_Mortar_Ammo_Smoke: 3AS_82mm_Smoke_White
	{
		model="\A3\weapons_f\ammo\shell";
		submunitionAmmo="SmokeShellArty";
	};
};
class CfgMagazines
{
	class 3AS_8Rnd_82mm_Mo_shells;
	class Aux115_Mortar_Shell_HE: 3AS_8Rnd_82mm_Mo_shells
	{
		author="Possum";
		displayName="[115] HE Mortar Shells";
		displayNameShort="HE";
		displayNameMFDFormat="HE";
		scope=2;
		count=8;
		ammo="115_Mortar_Ammo_HE";
		nameSound="heat";
		muzzleImpulseFactor[]={0,0};
		initSpeed=200;
		ace_arsenal_hide=-1;
		ace_artillerytables_airFriction=-9.9999997e-005;
	};
	class 3AS_8Rnd_82mm_Mo_Flare_white;
	class Aux115_Mortar_Shell_Flare: 3AS_8Rnd_82mm_Mo_Flare_white
	{
		author="Possum";
		ammo="115_Mortar_Ammo_Flare";
		displayName="[115] Flare Mortar Shell (White)";
		displayNameShort="White Flare";
	};
	class 3AS_8Rnd_82mm_Mo_Smoke_white;
	class Aux115_Mortar_Shell_Smoke: 3AS_8Rnd_82mm_Mo_Smoke_white
	{
		author="Possum";
		ammo="115_Mortar_Ammo_Smoke";
		displayName="[115] Smoke Mortar Shell (White)";
		displayNameShort="White Smoke";
	};
};
class CfgWeapons
{
	class 3AS_mortar_82mm;
	class Aux115_Mortar_82mm: 3AS_mortar_82mm
	{
		scope=1;
		displayname="[115] Republic Mortar";
		sounds[]=
		{
			"StandardSound"
		};
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",
			1,
			1,
			20
		};
		soundServo[]=
		{
			"",
			9.9999997e-005,
			1
		};
		reloadTime=1.8;
		magazineReloadTime=5;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"115_Mortar_Shell_HE",
			"115_Mortar_Shell_Smoke",
			"115_Mortar_Shell_Flare"
		};
		ballisticsComputer=2;
		modes[]=
		{
			"Single1"
		};
	};
};
class CfgVehicles
{
	class Mortar_01_base_F;
	class Turrets;
	class MainTurret;
	class ViewOptics;
	class 3AS_Republic_Mortar;
	class Aux115_Mortar: 3AS_Republic_Mortar
	{
		displayname="[115] Republic Mortar";
		model="3AS\3as_static\Mortar\model\republicmortar.p3d";
		editorPreview="\3as\3as_static\images\3AS_Republic_Mortar.jpg";
		crew="JLTS_Clone_P2_DC15S";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initelev=0;
				maxelev=40;
				minelev=-15;
				initturn=0;
				maxturn=360;
				minturn=-360;
				weapons[]=
				{
					"115_Mortar_82mm"
				};
				magazines[]=
				{
					"115_Mortar_Shell_HE",
					"115_Mortar_Shell_HE",
					"115_Mortar_Shell_HE",
					"115_Mortar_Shell_Flare",
					"115_Mortar_Shell_Smoke"
				};
				elevationMode=3;
				gunnerforceoptics=0;
			};
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"115_Bag_Mortar"
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\mortar\data\base.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"3as\3as_static\mortar\data\tube.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Weapons\Mortar\base_co.paa",
			"\AR121-Weapons\Mortar\tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		faction="3AS_REP";
		scopeCurator=2;
		class ACE_CSW
		{
			enabled=1;
			proxyWeapon="3AS_mortar_82mm_csw";
			magazineLocation="_target selectionPosition 'usti hlavne'";
			ammoLoadTime=15;
			ammoUnloadTime=7;
			desiredAmmo=8;
		};
	};
	class 3AS_Republic_Mortar_Bag;
	class Bag_Base;
	class Aux115_Bag_Mortar: 3AS_Republic_Mortar_Bag
	{
		model="\3as\3as_static\Mortar\model\mortarpack.p3d";
		author="Possum";
		scope=2;
		displayName="[115] Folded Republic Mortar";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Weapons\Mortar\base_co.paa",
			"\AR121-Weapons\Mortar\tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		mass=450;
		class assembleInfo
		{
			primary=1;
			base="";
			displayName="Republic Mortar";
			assembleTo="115_Mortar";
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
