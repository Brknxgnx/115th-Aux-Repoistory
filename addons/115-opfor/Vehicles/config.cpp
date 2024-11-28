class cfgPatches
{
	class Aux115_CIS_Vehicles
	{
		name="115_CIS_Vehicles";
		author="Possum";
		addonRootClass="115_CIS";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]=
		{
			"115_CIS_AAT_Blue",
			"115_CIS_AAT_Tan",
			"115_CIS_AAT_King",
			"115_CIS_AAT_Green",
			"115_CIS_GAT",
			"115_CIS_GAT_Light",
			"115_CIS_Snail",
			"115_CIS_Squad_Transport",
			"115_CIS_Transport_Truck",
			"115_CIS_Spider_Droid",
			"115_CIS_HMP_Transport",
			"115_CIS_HMP_Gunship",
			"115_CIS_Particle_Cannon"
		};
		weapons[]={};
		ammo[]={};
	};
};
class CfgEditorSubcategories
{
	class Aux115_CIS_armoured
	{
		displayName="(CIS) Armour";
	};
	class Aux115_CIS_Turrets
	{
		displayName="(CIS) Turrets";
	};
	class Aux115_CIS_helicopter
	{
		displayName="(CIS) Helicopter";
	};
	class Aux115_CIS_artillery
	{
		displayName="(CIS) Artillery";
	};
};
class DefaultEventhandlers;
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
class CfgVehicles
{
	class 3AS_GAT;
	class 3AS_GAT_Olive;
	class 3AS_GAT_Light;
	class 3AS_GAT_Light_Olive;
	class 3AS_AAT_CIS_White;
	class 3AS_HAGM_CIS;
	class 3AS_CIS_Mortar;
	class 3AS_FlakCannon;
	class 3AS_OG9Turret;
	class 3AS_AAT_tan;
	class 3AS_AAT_Green;
	class 3AS_AAT_Red;
	class Helicopter
	{
	};
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
	};
	class 3AS_HMP_Base: Heli_Attack_01_base_F
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
	class 3AS_HMP_Transport: 3AS_HMP_Base
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
	class 3AS_HMP_Gunship: 3AS_HMP_Base
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
	class 442_hmp;
	class 442_hmp_transport;
	class Aux115_CIS_HMP_Gunship: 3AS_HMP_Gunship
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="HMP Gunship";
		altFullForce=6000;
		altNoForce=9000;
		armor=200;
		crew="115_CIS_B1_Droid_Crew";
		faction="115_CIS";
		editorSubcategory="115_CIS_helicopter";
		vehicleClass="115_CIS_helicopter";
		airBrakeFrictionCoef=80.400002;
		class EventHandlers
		{
		};
		class UserActions
		{
			class ThrusterEngage
			{
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >50) )";
				displayName="<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault="<t color='#4C9900'>[Impulsor On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTE.sqf""";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				userActionID=64;
			};
			class ThrusterDisngage: ThrusterEngage
			{
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				displayName="<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault="<t color='#FF9933'>[RepulsorBrake On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTD.sqf""";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				userActionID=65;
			};
		};
	};
	class Aux115_CIS_HMP_Transport: 3AS_HMP_Transport
	{
		displayName="HMP Transport";
		forceInGarage=1;
		maxSpeed=220;
		armor=200;
		armorStructural=2;
		armorLights=1;
		liftForceCoef=1;
		bodyFrictionCoef=0.67769998;
		scope=2;
		scopeCurator=2;
		crew="115_CIS_B1_Droid_Crew";
		faction="115_CIS";
		transportSoldier=22;
		editorSubcategory="115_CIS_helicopter";
		vehicleClass="115_CIS_helicopter";
		airBrakeFrictionCoef=80.400002;
		class EventHandlers
		{
		};
		class UserActions
		{
			class ThrusterEngage
			{
				condition="(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >50) )";
				displayName="<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault="<t color='#4C9900'>[Impulsor On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTE.sqf""";
				textToolTip="<t color='#4C9900'>[Impulsor On]</t>";
				userActionID=64;
			};
			class ThrusterDisngage: ThrusterEngage
			{
				condition="((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				displayName="<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault="<t color='#FF9933'>[RepulsorBrake On]</t>";
				onlyForPlayer=0;
				position="pilotview";
				priority=1e+008;
				radius=6;
				statement="this execVM ""\SW_Droides_2\DroidGunship\initTD.sqf""";
				textToolTip="<t color='#FF9933'>[RepulsorBrake On]</t>";
				userActionID=65;
			};
		};
		cargoAction[]=
		{
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo",
			"MTT_Cargo"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12};
		class AnimationSources: AnimationSources
		{
			class RocketPods
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class DropRack
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
		class textureSources
		{
		};
	};
	class Aux115_CIS_AAT_Blue: 3AS_AAT_CIS_White
	{
		scope=2;
		scopeCurator=2;
		displayName="AAT Blue";
		armor=200;
		armorStructural=7;
		editorSubcategory="115_CIS_armoured";
		vehicleClass="115_CIS_armoured";
		side=0;
		faction="115_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT.jpg";
		crew="115_CIS_B1_Droid_Crew";
	};
	class Aux115_CIS_AAT_Red: 3AS_AAT_Red
	{
		scope=2;
		scopeCurator=2;
		displayName="Heavy AAT";
		armor=200;
		armorStructural=7;
		editorSubcategory="115_CIS_armoured";
		vehicleClass="15_CIS_armoured";
		side=0;
		faction="15_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT.jpg";
		crew="15_CIS_B1_Droid_Crew";
	};
	class Aux115_CIS_AAT_Green: 3AS_AAT_Green
	{
		scope=2;
		scopeCurator=2;
		displayName="AAT Green";
		armor=200;
		armorStructural=7;
		editorSubcategory="115_CIS_armoured";
		vehicleClass="115_CIS_armoured";
		side=0;
		faction="115_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT.jpg";
		crew="AR121_CIS_B1_Droid_Crew";
	};
	class 115_CIS_Flak_Cannon: 3AS_FlakCannon
	{
		scope=2;
		scopeCurator=2;
		displayName="Flak Cannon (AA)";
		armor=50;
		armorStructural=7;
		editorSubcategory="115_CIS_Turrets";
		vehicleClass="115_CIS_Turrets";
		side=0;
		faction="115_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT.jpg";
		crew="115_CIS_B1_Droid_Crew";
	};
	class Aux115_CIS_HAGM: 3AS_HAGM_CIS
	{
		scope=2;
		scopeCurator=2;
		displayName="HAG-M Artillery Tank";
		armor=50;
		armorStructural=7;
		editorSubcategory="115_CIS_artillery";
		vehicleClass="115_CIS_artillery";
		side=0;
		faction="115_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT.jpg";
		crew="115_CIS_B1_Droid_Crew";
	};
	class Aux115_CIS_Mortar: 3AS_CIS_Mortar
	{
		scope=2;
		scopeCurator=2;
		displayName="Mortar Tube";
		armor=5;
		armorStructural=7;
		editorSubcategory="115_CIS_artillery";
		vehicleClass="115_CIS_artillery";
		side=0;
		faction="115_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT.jpg";
		crew="115_CIS_B1_Droid_Crew";
	};
	class Aux115_OG9: 3AS_OG9Turret
	{
		scope=2;
		scopeCurator=2;
		displayName="OG-9 Spider Droid";
		armor=80;
		armorStructural=7;
		editorSubcategory="115_CIS_Turrets";
		vehicleClass="115_CIS_Turrets";
		side=0;
		faction="115_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT.jpg";
		crew="115_CIS_B1_Droid_Crew";
	};
	class Aux115_CIS_AAT_Tan: 3AS_AAT_tan
	{
		scope=2;
		scopeCurator=2;
		displayName="AAT Tan";
		armor=200;
		armorStructural=5;
		editorSubcategory="115_CIS_armoured";
		vehicleClass="115_CIS_armoured";
		side=0;
		faction="115_CIS";
		editorPreview="\3as\3as_AAT\images\3AS_AAT_tan.jpg";
		crew="115_CIS_B1_Droid_Crew";
	};
	class 3AS_N99_base_F;
	class Aux115_CIS_Snail: 3AS_N99_base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="N99 Snail Tank";
		editorSubcategory="115_CIS_armoured";
		vehicleClass="115_CIS_armoured";
		side=0;
		armor=200;
		faction="115_CIS";
		crew="115_CIS_B1_Droid_Crew";
	};
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
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
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class ls_ground_aat_base: Tank_F
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
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class ls_ground_aat: ls_ground_aat_base
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
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class ls_ground_aat_black: ls_ground_aat
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
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class Aux115_CIS_AAT_King: ls_ground_aat_black
	{
		displayName="Heavy King AAT";
		scope=0;
		scopeCurator=0;
		faction="115_CIS";
		editorSubcategory="115_CIS_armoured";
		driver="115_CIS_B1_Droid_Crew";
		crew="115_CIS_B1_Droid_Crew";
		typicalCargo[]=
		{
			"115_CIS_B1_Droid_Crew"
		};
		hiddenSelectionsTextures[]=
		{
			"ls_vehicles_ground\aat\data\black\body1_black_co.paa",
			"ls_vehicles_ground\aat\data\black\body2_black_co.paa",
			"ls_vehicles_ground\aat\data\black\gun_black_co.paa"
		};
		armor=600;
		armorStructural=10;
		class Hitpoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=800;
				material=-1;
				name="hull_hit";
				visual="zbytek";
				passthrough=0.029999999;
				minimalhit=0.14;
				explosionshielding=2;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=800;
				material=-1;
				name="engine_hit";
				passThrough=0.079999998;
				minimalHit=0.23999999;
				explosionShielding=1;
				radius=0.33000001;
			};
			class hitammo_l: HitEngine
			{
				name="ammo_l_hit";
			};
			class hitammo_r: hitammo_l
			{
				name="ammo_r_hit";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="side_turret_l";
						gun="side_gun_l";
						proxyIndex=4;
						viewGunnerInExternal=0;
						proxytype="CPCommander";
						gunnername="Commander";
						animationSourceBody="ObsTurret";
						animationSourceGun="ObsGun";
						minElev=-20;
						maxElev=30;
						minTurn=-25;
						maxTurn=25;
						initElev=0;
						initTurn=0;
						minOutElev=-25;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							0.0099999998,
							1,
							50
						};
						gunnerAction="";
						gunnerInAction="mbt2_slot2b_in";
						forceHideGunner=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerRightHandAnimName="";
						gunnerLeftHandAnimName="";
						soundAttenuationTurret="HeliAttenuationGunner";
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						memoryPointGun[]=
						{
							"konec_hlavne_1",
							"konec_hlavne_2"
						};
						weapons[]=
						{
							"ls_aat_127"
						};
						magazines[]=
						{
							"ls_500Rnd_127x99_mag_red",
							"ls_500Rnd_127x99_mag_red"
						};
						turretInfoType="RscWeaponRangeZeroing";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="commanderview";
						memoryPointGunnerOutOptics="commanderview";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F.p3d";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						turretfollowfreelook=1;
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						LODTurnedOut="VIEW_GUNNER";
						LODTurnedIn="VIEW_GUNNER";
						selectionFireAnim="";
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initAngleX=0;
								minAngleX=-8;
								maxAngleX=8;
								initAngleY=0;
								minAngleY=-45;
								maxAngleY=80;
								initFov=0.30000001;
								minFov=0.30000001;
								maxFov=0.30000001;
								visionMode[]=
								{
									"Normal",
									"Ti"
								};
								thermalMode[]={4,5};
								gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
								gunnerOpticsEffect[]={};
							};
						};
						class HitPoints
						{
							class HitTurret
							{
								armor=500;
								material=-1;
								name="gunner_turret_hit";
								visual="vez";
								passThrough=0;
								minimalHit=0.02;
								explosionShielding=0.30000001;
								radius=0.25;
							};
							class HitGun
							{
								armor=500;
								material=-1;
								name="gunner_turret_hit";
								visual="";
								passThrough=0;
								minimalHit=0;
								explosionShielding=1;
								radius=0.25;
							};
						};
						class Damage
						{
							tex[]={};
							mat[]=
							{
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat",
								"A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat"
							};
						};
					};
				};
				proxyIndex=2;
				weapons[]=
				{
					"115_CIS_King_Cannon_Weapon"
				};
				magazines[]=
				{
					"115_CIS_King_Cannon_Mag",
					"115_CIS_King_Cannon_Mag",
					"115_CIS_King_Cannon_Mag",
					"115_CIS_King_Cannon_Mag",
					"115_CIS_King_Cannon_Mag"
				};
				minElev=-5;
				maxElev=30;
				initElev=10;
				minTurn=-360;
				maxTurn=360;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					0.0099999998,
					1,
					50
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={4,5};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerAction="mbt2_slot2a_out";
				gunnerInAction="mbt2_slot2a_in";
				forceHideGunner=0;
				inGunnerMayFire=1;
				viewGunnerInExternal=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=80;
						material=-1;
						name="main_turret_hit";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=80;
						material=-1;
						name="main_gun_hit";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
			};
		};
	};
	class Aux115_CIS_GAT: 3AS_GAT
	{
		scope=2;
		scopeCurator=2;
		displayName="GAT";
		editorSubcategory="115_CIS_armoured";
		vehicleClass="115_CIS_armoured";
		side=0;
		armor=200;
		faction="115_CIS";
		editorPreview="3as\3as_gat\images\3AS_GAT.jpg";
		crew="115_CIS_B1_Droid_Crew";
	};
	class Aux115CIS_GAT_Light: 3AS_GAT_Light
	{
		scope=2;
		scopeCurator=2;
		displayName="GAT Light";
		editorSubcategory="115_CIS_armoured";
		vehicleClass="115_CIS_armoured";
		side=0;
		armor=200;
		faction="115_CIS";
		editorPreview="3as\3as_gat\images\3AS_GAT_light.jpg";
		crew="115_CIS_B1_Droid_Crew";
	};
	class 442_argon_transport_cis;
	class Aux115_CIS_Transport_Truck: 442_argon_transport_cis
	{
		scope=2;
		scopeCurator=2;
		displayName="Argon Transport Truck";
		editorSubcategory="115_CIS_armoured";
		vehicleClass="115_CIS_armoured";
		side=0;
		armor=50;
		faction="115_CIS";
		crew="115_CIS_B1_Droid_Crew";
	};
	class 3as_ParticleCannon;
	class Aux115_CIS_Particle_Cannon: 3as_ParticleCannon
	{
		scope=2;
		scopeCurator=2;
		displayName="Particle Cannon";
		editorSubcategory="115_CIS_Turrets";
		vehicleClass="115_CIS_Turrets";
		side=0;
		faction="115_CIS";
		crew="115_CIS_B1_Droid_Crew";
	};
	class Full_Shield;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret: NewTurret
		{
		};
		class HitPoints;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class Components;
	};
	class 3AS_Advanced_DSD;
	class AR121_CIS_Spider_Droid: 3AS_Advanced_DSD
	{
		scope=2;
		scopeCurator=2;
		displayName="Dwarf Spider Droid ";
		editorSubcategory="115_CIS_armoured";
		vehicleClass="115_CIS_armoured";
		crew="115_CIS_B1_Droid_Crew";
		side=0;
		armor=150;
		faction="115_CIS";
	};
	class 3as_SAC_Trade;
	class Aux115_CIS_Squad_Transport: 3as_SAC_Trade
	{
		scope=2;
		scopeCurator=2;
		displayName="Droid Assault Craft";
		editorSubcategory="115_CIS_armoured";
		vehicleClass="115_CIS_armoured";
		side=0;
		armor=50;
		faction="115_CIS";
		crew="115_CIS_B1_Droid_Crew";
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449302";
};
