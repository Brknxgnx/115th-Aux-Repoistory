class CfgPatches
{
	class Aux115_Vehicles
	{
		author="Greg";
		requiredaddons[]=
		{
			"A3_Armor_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Air_F",
			"3as_Laat",
			"3AS_LAAT",
			"115-Core"
		};
		units[]=
		{
			"115_LAAT_mk2",
			"115_LAATC",
			"115_Ywing"
		};
		weapons[]={};
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
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Extended_init_EventHandlers
{
	class Aux115_LAAT_mk2
	{
		class laat_init_eh
		{
			init="(_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
	};
	class Aux115_LAATC
	{
		class laat_init_eh
		{
			init="(_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
		class addCameraMark_EH
		{
			init="(_this select 0) spawn SW13_fnc_CreateMarkers;";
		};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Items_base_F;
	class Eventhandlers;
	class ViewPilot;
	class UserActions;
	class CargoTurret_01;
	class CargoTurret_02;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
		class UserActions;
		class CargoTurret;
	};
	class 3as_laat_Base: B_Heli_Attack_01_base_F
	{
		class ACE_SelfActions;
		class UserActions: UserActions
		{
			class rampOpen;
			class rampClose;
		};
		class EventHandlers;
		class Components: components
		{
		};
		class Turrets: Turrets
		{
			class Copilot;
			class LeftDoorgun;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
		};
	};
	class 3as_LAAT_Mk2: 3as_laat_Base
	{
		class ACE_SelfActions;
	};
	class 3as_LAAT_Mk1: 3as_laat_Base
	{
		class ACE_SelfActions;
	};
	class 3AS_Patrol_LAAT_Base: Heli_Attack_01_base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class ACE_SelfActions;
		class RotorLibHelicopterProperties;
	};
	class Aux115_LAAT_mk2: 3as_LAAT_Mk2
	{
		class EventHandlers
		{
			init="[_this select 0] execVM '\AR121-Vehicles\AR121-Air\autocrate.sqf';";
		};
		tas_can_impulse=0;
		ls_impulsor_fuelDrain_1=4.9999999e-005;
		ls_impulsor_fuelDrain_2=4.9999999e-005;
		ls_impulsor_boostSpeed_1=350;
		ls_impulsor_boostSpeed_2=700;
		ls_hasImpulse=1;
		author="Greg";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[115] LAAT/I Transport";
		faction="115_Faction";
		editorSubcategory="115_aircraft";
		side=1;
		transportSoldier=36;
		armor=100;
		armorStructural=4;
		crew="115_P2Unit_CT";
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"ls_weapon_CMFlareLauncher",
			"115_A2ACannon_Weapon"
		};
		magazines[]=
		{
			"ls_mag_240rnd_CMFlareChaff_green",
			"ls_mag_240rnd_CMFlareChaff_green",
			"Laserbatteries",
			"Laserbatteries",
			"Laserbatteries",
			"115_Air_CannonA2A_PylonMag"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Hull_CO.paa",
			"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Wings_CO.paa",
			"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Weapons_CO.paa",
			"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Weapon_Details_CO.paa",
			"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Interior_CO.paa"
		};
		class TextureSources
		{
			class Base
			{
				displayName="Base";
				author="Possum";
				Textures[]=
				{
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Hull_CO.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Wings_CO.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Weapons_CO.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Weapon_Details_CO.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Interior_CO.paa"
				};
				factions[]=
				{
					"115_Faction"
				};
			};
			class Nyx
			{
				displayName="Nyx";
				author="Possum";
				Textures[]=
				{
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Hull_CO_Stang.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Wings_CO_Stang.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Weapons_CO.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Weapon_Details_CO.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_I\Interior_CO.paa"
				};
				factions[]=
				{
					"115_Faction"
				};
			};
		};
		textureList[]=
		{
			"Base",
			1,
			"Nyx",
			0
		};
		class HitPoints
		{
			class HitHull
			{
				armor=999;
				convexComponent="hull_hit";
				depends="Total";
				explosionShielding=1;
				material=51;
				name="hull_hit";
				passThrough=1;
				visual="zbytek";
				radius=0.0099999998;
			};
			class HitFuel
			{
				convexcomponent="fuel_hit";
				hitpoint="fuel_hit";
				name="fuel_hit";
				explosionShielding=2;
				radius=0.1;
				visual="";
				passthrough=0.1;
				minimalhit=0.1;
				material=-1;
				armor="0.6 * 5";
			};
			class HitEngine
			{
				armor=0.5;
				convexComponent="engine_hit";
				explosionShielding=2;
				material=51;
				name="engine_hit";
				hitpoint="engine_hit";
				passThrough=1;
				visual="";
				radius=0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent="engine_hit_1";
				name="engine_hit_1";
				hitpoint="engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent="engine_hit_2";
				name="engine_hit_2";
				hitpoint="engine_hit_2";
			};
			class HitHRotor
			{
				armor=3;
				convexComponent="main_rotor_hit";
				explosionShielding=2.5;
				material=51;
				name="main_rotor_hit";
				passThrough=0.1;
				visual="";
				radius=0.0099999998;
			};
			class HitVRotor
			{
				armor=3;
				convexComponent="tail_rotor_hit";
				explosionShielding=6;
				material=51;
				name="tail_rotor_hit";
				passThrough=0.30000001;
				visual="";
				radius=0.0099999998;
			};
			class HitAvionics
			{
				armor=1;
				convexComponent="avionics_hit";
				explosionShielding=2;
				material=51;
				name="avionics_hit";
				passThrough=1;
				visual="";
				radius=0.5;
			};
			class HitGlass1
			{
				armor=10;
				name="HitGlass1";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
			class HitGlass2
			{
				armor=10;
				name="HitGlass2";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
			class HitGlass3
			{
				armor=10;
				name="HitGlass3";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light";
				selection="";
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=100;
				useFlare=1;
				dayLight=0;
				FlareSize=6;
				size=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=4;
					hardLimitStart=150;
					hardLimitEnd=600;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.42500001;
					minFov=0.42500001;
					maxFov=0.42500001;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";
					minFov="(0.425/4)";
					maxFov="(0.425/4)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";
					minFov="(0.42/8)";
					maxFov="(0.42/8)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";
					minFov="(0.42/20)";
					maxFov="(0.42/20)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";
					minFov="(0.42/50)";
					maxFov="(0.42/50)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";
					minFov="(0.42/70)";
					maxFov="(0.42/70)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=125;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportCounterMeasuresComponent;
			class TransportPylonsComponent
			{
				uiPicture="lsd_vehicles_heli\laati\data\ui\laat_icon.paa";
				class Pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_AAR_PylonMag";
						priority=6;
						maxweight=5000;
						UIposition[]={0.15000001,0.44999999};
					};
					class pylons2: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_AGMR_PylonMag";
						priority=4;
						UIposition[]={0.2,0.34999999};
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_UGMR_PylonMag";
						priority=2;
						UIposition[]={0.25,0.25};
					};
					class pylons4: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_UGMR_PylonMag";
						priority=1;
						UIposition[]={0.60000002,0.25};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_AAR_PylonMag";
						priority=3;
						UIposition[]={0.64999998,0.34999999};
						mirroredMissilePos=2;
					};
					class pylons6: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_UGMR_PylonMag";
						priority=5;
						UIposition[]={0.69999999,0.44999999};
						mirroredMissilePos=1;
					};
				};
			};
		};
		class TransportMagazines
		{
			class Aux115_Magazine_DC15S
			{
				magazine="115_Magazine_DC15S";
				count=20;
			};
			class Aux115_Magazine_Z6
			{
				magazine="115_Magazine_Z6";
				count=10;
			};
			class Aux115_Magazine_DC15L
			{
				magazine="115_Magazine_DC15L";
				count=20;
			};
			class Aux115_Magazine_WESTAR
			{
				magazine="115_Magazine_WESTAR";
				count=20;
			};
			class Aux115_Magazine_DC17
			{
				magazine="115_Magazine_DC17";
				count=40;
			};
			class Aux115_Magazine_DC15A
			{
				magazine="115_Magazine_DC15A";
				count=40;
			};
			class Aux115_Magazine_DC15X
			{
				magazine="115_Magazine_DC15X";
				count=10;
			};
			class Aux115_PLX1_AT_mag
			{
				magazine="115_PLX1_AT_mag";
				count=10;
			};
			class Aux115_PLX1_AA_mag
			{
				magazine="115_PLX1_AA_mag";
				count=10;
			};
			class Aux115_RPS6_HE_mag
			{
				magazine="115_RPS6_HE_mag";
				count=10;
			};
			class Aux115_RPS6_AT_mag
			{
				magazine="115_RPS6_AT_mag";
				count=10;
			};
			class Aux115_Magazine_DC15C
			{
				magazine="115_Magazine_DC15C";
				count=20;
			};
			class Aux115_MAG_Stun_x6
			{
				magazine="115_MAG_Stun_x6";
				count=20;
			};
		};
		class TransportWeapons
		{
			class Aux115_DC15A
			{
				weapon="115_DC15A";
				count=5;
			};
			class Aux115_DC15S
			{
				weapon="115_DC15S";
				count=5;
			};
			class Aux115_DC15C
			{
				weapon="115_DC15C";
				count=3;
			};
			class Aux115_rps6_AT_disposable
			{
				weapon="115_rps6_AT_disposable";
				count=5;
			};
		};
		class TransportItems
		{
			class ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=50;
			};
			class ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
			class _transport_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class ACE_quikclot
			{
				name="ACE_quikclot";
				count=70;
			};
			class ACE_PlasmaIV_250
			{
				name="ACE_PlasmaIV_250";
				count=50;
			};
			class ACE_PlasmaIV_500
			{
				name="ACE_PlasmaIV_500";
				count=50;
			};
			class ACE_PlasmaIV
			{
				name="ACE_PlasmaIV";
				count=30;
			};
			class AR121_Painkiller
			{
				name="AR121_Painkiller";
				count=30;
			};
			class ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=30;
			};
			class ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=28;
			};
			class ACE_Splint
			{
				name="ACE_Splint";
				count=28;
			};
		};
	};
	class 3as_LAATC;
	class Aux115_LAATC: 3as_LAATC
	{
		class EventHandlers
		{
			init="[_this select 0] execVM '\AR121-Vehicles\AR121-Air\autocrate.sqf';";
		};
		tas_can_impulse=0;
		ls_impulsor_fuelDrain_1=4.9999999e-005;
		ls_impulsor_fuelDrain_2=4.9999999e-005;
		ls_impulsor_boostSpeed_1=350;
		ls_impulsor_boostSpeed_2=700;
		ls_hasImpulse=1;
		class ACE_SelfActions;
		displayname="[115] LAAT/C";
		transportSoldier=1;
		faction="115_Faction";
		editorSubcategory="115_aircraft";
		crew="115_P2Unit_CT";
		model="3AS\3AS_LAATC\3AS_LAAT_C.p3d";
		author="gREG";
		radarTargetSize=0.2;
		visualTargetSize=0.2;
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Air\Data\LAAT_C\LAAT_C_Hull_co.paa",
			"\AR121-Vehicles\AR121-Air\Data\LAAT_C\LAAT_C_Wings_co.paa",
			"\AR121-Vehicles\AR121-Air\Data\LAAT_C\LAAT_C_Top_co.paa",
			"\AR121-Vehicles\AR121-Air\Data\LAAT_C\LAAT_C_Detail_Front_co.paa"
		};
		class TextureSources
		{
			class Base
			{
				displayName="Base";
				author="Possum";
				Textures[]=
				{
					"\AR121-Vehicles\AR121-Air\Data\LAAT_C\LAAT_C_Hull_co.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_C\LAAT_C_Wings_co.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_C\LAAT_C_Top_co.paa",
					"\AR121-Vehicles\AR121-Air\Data\LAAT_C\LAAT_C_Detail_Front_co.paa"
				};
				factions[]=
				{
					"115_Faction"
				};
			};
		};
		textureList[]=
		{
			"Base",
			1
		};
		class UserActions
		{
			class LoadCargo
			{
				userActionID=6;
				displayName="Load Vehicle";
				displayNameDefault="Load Vehicle";
				textToolTip="Load Vehicle";
				position="pilotview";
				showWindow=0;
				radius=5;
				priority=1;
				onlyForPlayer=0;
				condition="((speed this < TAS_lcLoadSpeed) AND (player == currentPilot vehicle player))";
				statement="0 = [this] spawn TAS_fnc_Maglift;";
			};
			class UnLoadCargo
			{
				userActionID=7;
				displayName="Unload Vehicles";
				displayNameDefault="Unload Vehicles";
				textToolTip="Unload Vehicles";
				position="pilotview";
				showWindow=0;
				radius=15;
				priority=3;
				onlyForPlayer=0;
				condition="(count(this getVariable [""TAS_Loaded"",[]]) > 0)";
				statement="0 = [this] spawn TAS_fnc_MagDrop;";
			};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
		};
		scope=2;
		forceInGarage=2;
		scopeCurator=2;
		scopeArsenal=2;
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"ls_weapon_CMFlareLauncher",
			"115_A2ACannon_Weapon"
		};
		magazines[]=
		{
			"115_Air_CannonA2A_PylonMag",
			"ls_mag_240rnd_CMFlareChaff_green",
			"ls_mag_240rnd_CMFlareChaff_green",
			"Laserbatteries",
			"Laserbatteries",
			"Laserbatteries"
		};
		armor=1000;
		class HitPoints
		{
			class HitHull
			{
				armor=1000;
				convexComponent="hull_hit";
				depends="Total";
				explosionShielding=1;
				material=51;
				name="hull_hit";
				passThrough=1;
				visual="zbytek";
				radius=0.0099999998;
			};
			class HitFuel
			{
				convexcomponent="fuel_hit";
				hitpoint="fuel_hit";
				name="fuel_hit";
				explosionShielding=2;
				radius=0.1;
				visual="";
				passthrough=0.1;
				minimalhit=0.1;
				material=-1;
				armor="0.6 * 5";
			};
			class HitEngine
			{
				armor=500;
				convexComponent="engine_hit";
				explosionShielding=2;
				material=51;
				name="engine_hit";
				hitpoint="engine_hit";
				passThrough=1;
				visual="";
				radius="0.2 * 5";
				minimalHit=0.60000002;
			};
			class HitEngine_1: HitEngine
			{
				armor=500;
				passThrough=1;
				explosionShielding=2;
				convexComponent="engine_hit_1";
				name="engine_hit_1";
				hitpoint="engine_hit_1";
				minimalHit=0.60000002;
			};
			class HitEngine_2: HitEngine
			{
				armor=500;
				passThrough=1;
				explosionShielding=2;
				convexComponent="engine_hit_2";
				name="engine_hit_2";
				hitpoint="engine_hit_2";
				minimalHit=0.60000002;
			};
			class HitHRotor
			{
				armor=500;
				convexComponent="main_rotor_hit";
				explosionShielding=2.5;
				material=51;
				name="main_rotor_hit";
				passThrough=0.1;
				visual="";
				radius=0.0099999998;
			};
			class HitVRotor
			{
				armor=500;
				convexComponent="tail_rotor_hit";
				explosionShielding=6;
				material=51;
				name="tail_rotor_hit";
				passThrough=0.30000001;
				visual="";
				radius=0.0099999998;
			};
			class HitAvionics
			{
				armor="1 * 5";
				convexComponent="avionics_hit";
				explosionShielding=2;
				material=51;
				name="avionics_hit";
				passThrough=1;
				visual="";
				radius=0.5;
			};
			class HitGlass1
			{
				armor=10;
				name="HitGlass1";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
			class HitGlass2
			{
				armor=10;
				name="HitGlass2";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
			class HitGlass3
			{
				armor=10;
				name="HitGlass3";
				radius=0.40000001;
				visual="";
				passThrough=1;
				explosionShielding=3;
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=8000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=125;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="lsd_vehicles_heli\laati\data\ui\laat_icon.paa";
				class Pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_AAR_PylonMag";
						priority=6;
						maxweight=5000;
						UIposition[]={0.15000001,0.44999999};
					};
					class pylons2: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_AGMR_PylonMag";
						priority=4;
						UIposition[]={0.2,0.34999999};
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_UGMR_PylonMag";
						priority=2;
						UIposition[]={0.25,0.25};
					};
					class pylons4: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_UGMR_PylonMag";
						priority=1;
						UIposition[]={0.60000002,0.25};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_AAR_PylonMag";
						priority=3;
						UIposition[]={0.64999998,0.34999999};
						mirroredMissilePos=2;
					};
					class pylons6: pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_Air_UGMR_PylonMag";
						priority=5;
						UIposition[]={0.69999999,0.44999999};
						mirroredMissilePos=1;
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449310";
};
