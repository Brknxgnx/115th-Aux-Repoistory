class CfgPatches
{
	class Aux115_ARC170
	{
		units[]=
		{
			"115_Air_ARC170"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Tank_Loadorder",
			"115-Core"
		};
	};
};
class AnimationSources;
class UserActions;
class Eventhandlers;
class HitPoints;
class HitHull;
class MarkerLights;
class Components;
class EjectionSystem;
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
	class NewTurret;
	class Plane_Fighter_03_base_F;
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class ViewPilot;
		class Turrets;
	};
	class 3as_arc_170_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Turrets
		{
			class LaserPilot;
			class Reargun;
		};
		class Components;
		class ACE_SelfActions;
	};
	class Aux115_Air_ARC170: 3as_arc_170_base
	{
		displayName="[115] ARC-170";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_aircraft";
		crew="115_P2Unit_CT";
		soundLocked[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",
			1,
			1.5
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="3as\3as_z95\data\plane_z95_pylon_ca.paa";
				class Pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"115_Hardpoint",
							"115_H_Hardpoint"
						};
						attachment="115_AGM88C_PylonMag";
						priority=6;
						maxweight=5000;
						UIposition[]={0.5,0.25};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=1;
					};
					class pylons3: pylons2
					{
						hardpoints[]=
						{
							"115_Hardpoint",
							"115_H_Hardpoint"
						};
						attachment="115_AGM88C_PylonMag";
						priority=9;
						maxweight=10000;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons4
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_AGM88C_PylonMag";
						priority=7;
						maxweight=10000;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons6: pylons5
					{
						hardpoints[]=
						{
							"115_Hardpoint"
						};
						attachment="115_AGM88C_PylonMag";
						priority=8;
						maxweight=10000;
						UIposition[]={0.050000001,0.44999999};
					};
				};
			};
		};
		weapons[]=
		{
			"3AS_ARC_Light_Canon",
			"ls_weapon_CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"3AS_ARC_500Rnd_Light_Shells",
			"3AS_ARC_500Rnd_Light_Shells",
			"ls_mag_240rnd_CMFlareChaff_green",
			"Laserbatteries",
			"ls_mag_240rnd_CMFlareChaff_green",
			"ls_mag_240rnd_CMFlareChaff_green"
		};
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"guns"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Air\Data\ARC\Main_Frame_CO.paa",
			"\AR121-Vehicles\AR121-Air\Data\ARC\Wings_Engines_CO.paa",
			"\AR121-Vehicles\AR121-Air\Data\ARC\Guns_CO.paa"
		};
		acceleration=2000;
		class EjectionSystem
		{
			EjectionSeatEnabled=1;
		};
		armor=1000;
		VTOLPitchInfluence=10;
		VTOLRollInfluence=10;
		VTOLYawInfluence=12;
		driverCanEject=1;
		htMin=60;
		htMax=1800;
		afMax=200;
		mfMax=100;
		mFact=0;
		tBody=0;
		radartype=4;
		lockdetectionsystem="2 + 8 + 4";
		incommingmissliedetectionsystem=16;
		maxSpeed=1400;
		landingAoa="6 * 3.1415 / 180";
		landingSpeed=215;
		stallSpeed=190;
		stallWarningTreshold=0.1;
		armorStructured=1;
		envelope[]={0,0.0099999998,0.2,4,6,7.5999999,8.3999996,9.1999998,9.3999996,9.6000004,9.6999998,9.8000002,8,1};
		draconicForceXCoef=4.5;
		draconicForceYCoef=3;
		draconicForceZCoef=6;
		draconicTorqueXCoef=2.0999999;
		draconicTorqueYCoef=-0.30000001;
		angleOfIndicence=0;
		airFriction0[]={100,50,12};
		airFriction1[]={100,50,12};
		airFriction2[]={100,50,12};
		altNoForce=20000;
		altFullForce=20000;
		elevatorCoef[]={1};
		elevatorSensitivity=1;
		elevatorControlsSensitivityCoef=4;
		aileronCoef[]={2};
		aileronSensitivity=1;
		aileronControlsSensitivityCoef=5;
		rudderCoef[]={3.5};
		rudderInfluence=0.89999998;
		rudderControlsSensitivityCoef=6;
		thrustCoef[]={2,2.1700001,2.1500001,3.1400001,3.1300001,3.1199999,3.0999999,3.0699999,2.99,2.2,2,2};
		irScanRangeMin=10;
		irScanRangeMax=10000;
		irScanToEyeFactor=8;
		fuelCapacity=2000;
		wheelSteeringSensitivity=1.5;
		maxOmega=2000;
		airBrake=1;
		airBrakeFrictionCoef=50;
		flaps=0;
		flapsFrictionCoef=0.31999999;
		gearsUpFrictionCoef=0.60000002;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0066};
		airFrictionCoefs2[]={0.001,0.0049999999,6.8000001e-005};
		driverOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
		memoryPointDriverOptics="PilotCamera_pos";
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449310";
};
