class CfgPatches
{
	class Aux115_Vwing
	{
		units[]=
		{
			"115_Air_Vwing"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Tank_Loadorder"
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
	class thingX;
	class Motorcycle;
	class Air;
	class Plane: Air
	{
		class NewTurret;
		class ViewPilot;
		class HitPoints
		{
			class HitHull;
		};
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class Components;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
	};
	class 3as_Vwing_base: Plane_Fighter_03_base_F
	{
		class Turrets;
		class Components;
	};
	class Aux115_Vwing: 3as_Vwing_base
	{
		displayName="[115] V-Wing Starfighter";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_aircraft";
		crew="115_P2Unit_Base";
		weapons[]=
		{
			"3as_Vwing_Medium_Cannon",
			"3as_ARC_Missile_AA",
			"weapon_AMRAAMLauncher",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"PylonRack_Missile_AMRAAM_C_x2",
			"PylonRack_Missile_AMRAAM_C_x2",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"3as_Vwing_700Rnd_Medium_shells",
			"3as_Vwing_700Rnd_Medium_shells",
			"3as_Vwing_700Rnd_Medium_shells"
		};
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenselectionstextures[]=
		{
			"3as\3AS_Vwing\data\vwing_co.paa",
			"3as\3AS_Vwing\data\vwing_int_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.0,CA)"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449310";
};
