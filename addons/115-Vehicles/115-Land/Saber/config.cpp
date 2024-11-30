class CfgPatches
{
	class Aux115_Saber_vehicle
	{
		author="Possum";
		requiredAddons[]=
		{
			"3AS_ATTE",
			"3AS_SaberTank",
			"3AS_LightVics",
			"3AS_AV7",
			"3AS_APC_Jug",
			"3AS_VehicleWeapons"
		};
		requiredVersion=0.1;
		units[]=
		{
			"115_vehicle_Land_Saber",
			"115_vehicle_Land_Saber_Recon",
			"115_vehicle_Land_Saber_Super",
			"115_vehicle_Land_Saber_GL"
		};
		weapons[]=
		{
			"115_saber_cannon"
		};
		magazines[]=
		{
			"115_magazine_Saber_HE",
			"115_magazine_Saber_AP"
		};
		ammo[]=
		{
			"115_30_HE_Ammo",
			"115_30_APFSDS_Ammo"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class RCWSOptics;
class RscTitles;
class Optics_Armored;
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class NewTurret;
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class ACE_SelfActions;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class ACE_SelfActions: ACE_SelfActions
		{
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class 3as_saber_01_Base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: NewTurret
			{
			};
			class Mainturret_top: MainTurret_bottom
			{
			};
			class CargoTurret_01: CargoTurret
			{
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_02
			{
			};
			class CargoTurret_04: CargoTurret_01
			{
			};
		};
		class Hitpoints: HitPoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class 3as_saber_Base: 3as_saber_01_Base
	{
		class Hitpoints: Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
	};
	class 3as_saber_m1: 3as_saber_Base
	{
		class Hitpoints: Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
	};
	class 3as_saber_super_base: 3as_saber_01_Base
	{
		class Turrets: Turrets
		{
			class Mainturret_super: Mainturret_top
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class Hitpoints: Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class 3as_saber_super: 3as_saber_super_base
	{
		class Turrets: Turrets
		{
			class Mainturret_super: Mainturret_super
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class Hitpoints: Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class 3as_saber_02_Base: 3as_saber_01_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class Hitpoints: Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class 3as_saber_m1G: 3as_saber_02_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class Hitpoints: Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class 3as_saber_03_Base: 3as_saber_01_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class Hitpoints: Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class 3as_saber_m1Recon: 3as_saber_03_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
			};
			class Mainturret_top: Mainturret_top
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class Hitpoints: Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class Aux115_vehicle_Land_Saber: 3as_saber_m1
	{
		displayName="[115] Saber, Standard";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Mechanized";
		crew="115_P2Unit_CT";
		armor=875;
		armorStructural=7;
		TFAR_hasIntercom=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\Saber\Textures\Saber_Imp_hull_co.paa",
			"\AR121-Vehicles\AR121-Land\Saber\Textures\Saber_Imp_weapons_co.paa"
		};
		class HitPoints: Hitpoints
		{
			class HitHull: HitHull
			{
				armor=1.8;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.0089999996;
				radius=0.1;
			};
			class HitEngine: HitEngine
			{
				armor=0.69999999;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.23999999;
				explosionShielding=0.015;
				radius=0.33000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="track_l_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="track_r_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				name="palivo";
				visual="-";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.15000001;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret_bottom: MainTurret_bottom
			{
				side=1;
				weapons[]=
				{
					"115_saber_cannon",
					"115_coax",
					"SmokeLauncher",
					"Missiles_DAGR"
				};
				magazines[]=
				{
					"115_magazine_Saber_AP",
					"115_magazine_Saber_AP",
					"115_magazine_Saber_AP",
					"115_magazine_Saber_HE",
					"115_magazine_Saber_HE",
					"115_magazine_Saber_MG",
					"115_magazine_Saber_MG",
					"12Rnd_PG_Missiles",
					"SmokeLauncherMag"
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=1.2;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=1.2;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
			};
			class Mainturret_top: Mainturret_top
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
	};
	class Aux115_vehicle_Land_Saber_Recon: 3as_saber_m1Recon
	{
		displayName="[115] Saber, Recon";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Mechanized";
		crew="115_P2Unit_CT";
		armor=500;
		armorStructural=5;
		TFAR_hasIntercom=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\Saber\Textures\Saber_Imp_hull_co.paa",
			"\AR121-Vehicles\AR121-Land\Saber\Textures\Saber_weapons_scout_imp_co.paa"
		};
	};
	class Aux115_vehicle_Land_Saber_Super: 3as_saber_super
	{
		displayName="[115] Saber, Super";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Mechanized";
		crew="115_P2Unit_CT";
		armor=500;
		armorStructural=5;
		TFAR_hasIntercom=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\Saber\Textures\Saber_Imp_hull_co.paa",
			"\AR121-Vehicles\AR121-Land\Saber\Textures\Saber_Imp_weapons_co.paa"
		};
	};
	class Aux115_vehicle_Land_Saber_GL: 3as_saber_m1G
	{
		displayName="[115] Saber, GL";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Mechanized";
		crew="115_P2Unit_CT";
		armor=500;
		armorStructural=5;
		TFAR_hasIntercom=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\Saber\Textures\Saber_Imp_hull_co.paa",
			"\AR121-Vehicles\AR121-Land\Saber\Textures\Saber_Imp_weapons_co.paa"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449310";
};
