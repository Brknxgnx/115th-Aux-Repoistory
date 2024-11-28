class CfgPatches
{
	class Aux115_ATTE_vehicle
	{
		author="Possum";
		requiredAddons[]=
		{
			"3AS_ATTE",
			"3AS_SaberTank",
			"3AS_VehicleWeapons",
			"115_Saber_vehicle"
		};
		requiredVersion=0.1;
		units[]=
		{
			"115_vehicle_Land_ATTE"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
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
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class Eventhandlers;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class AnimationSources;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources: AnimationSources
		{
		};
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class RCWSOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class EventHandlers;
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
	class 3AS_ATTE_Base: APC_Wheeled_01_base_F
	{
		class Turrets
		{
			class MainTurretTop;
			class MainTurretFront;
			class MainTurretBack;
		};
		class HitPoints;
	};
	class Aux115_vehicle_Land_ATTE: 3AS_ATTE_Base
	{
		displayName="[115] AT-TE";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Mechanized";
		crew="115_P2Unit_CT";
		armor=500;
		maxSpeed=30;
		armorStructural=5;
		TFAR_hasIntercom=1;
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\AT-TE\Textures\3AS_ATTE_Shell_Imp_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
			"\AR121-Vehicles\AR121-Land\AT-TE\Textures\3AS_ATTE_Legs_Imp_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
			"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
		};
		class TextureSources
		{
			class Mk1
			{
				displayName="Mk1";
				author="Tanker";
				Textures[]=
				{
					"\AR121-Vehicles\AR121-Land\AT-TE\Textures\3AS_ATTE_Shell_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"\AR121-Vehicles\AR121-Land\AT-TE\Textures\3AS_ATTE_Legs_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[]=
				{
					"115_Faction"
				};
			};
			class Mk2
			{
				displayName="Mk 2";
				author="Possum";
				Textures[]=
				{
					"\AR121-Vehicles\AR121-Land\AT-TE\Textures\3AS_ATTE_Shell_Imp_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"\AR121-Vehicles\AR121-Land\AT-TE\Textures\3AS_ATTE_Legs_Imp_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[]=
				{
					"115_Faction"
				};
			};
		};
		textureList[]=
		{
			"Mk1",
			1,
			"Mk2",
			1
		};
		class Turrets: Turrets
		{
			class MainTurretTop: MainTurretTop
			{
				side=1;
				weapons[]=
				{
					"3AS_Mass_Driver_Cannon",
					"115_coax",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"3AS_30Rnd_Mass_Driver_shells",
					"3AS_30Rnd_Mass_Driver_shells",
					"3AS_30Rnd_Mass_Driver_shells",
					"115_magazine_Saber_MG",
					"115_magazine_Saber_MG",
					"SmokeLauncherMag"
				};
			};
			class MainTurretFront: MainTurretFront
			{
			};
			class MainTurretBack: MainTurretBack
			{
			};
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449310";
};
