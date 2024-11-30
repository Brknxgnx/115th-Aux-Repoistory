class CfgPatches
{
	class Aux115_land_vehicle
	{
		author="Possum";
		requiredAddons[]=
		{
			"3AS_ATTE",
			"3AS_SaberTank",
			"3AS_LightVics",
			"3AS_AV7",
			"3AS_APC_Jug",
			"3AS_VehicleWeapons",
			"115-Core"
		};
		requiredVersion=0.1;
		units[]=
		{
			"115_vehicle_Land_BARC",
			"115_vehicle_Land_BARC_Sidecar",
			"115_vehicle_Land_AV7",
			"115_vehicle_Land_PX10R3",
			"115_vehicle_Land_JUG",
			"3AS_Rebel_Armor_PX10"
		};
	};
};
class CfgVehicles
{
	class 3AS_BARC;
	class Aux115_vehicle_Land_BARC: 3AS_BARC
	{
		displayName="[115] BARC Speeder";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Light";
		crew="115_P2Unit_CT";
		armor=20;
		armorStructural=5;
		TFAR_hasIntercom=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\BARC\barc_co.paa"
		};
	};
	class 3AS_BarcSideCar;
	class Aux115_vehicle_Land_BARC_Sidecar: 3AS_BarcSideCar
	{
		displayName="[115] BARC Speeder (Sidecar)";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Light";
		crew="115_P2Unit_CT";
		armor=20;
		armorStructural=5;
		TFAR_hasIntercom=1;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\BARC\barc_co.paa",
			"\AR121-Vehicles\AR121-Land\BARC\gunner_co.paa"
		};
	};
	class 3AS_AV7;
	class Aux115_vehicle_Land_AV7: 3AS_AV7
	{
		displayName="[115] AV-7";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Static";
		crew="115_P2Unit_CT";
		armor=50;
		tas_canBlift=1;
		tas_liftVars="[[[[0,-4.5,-20]]], [0], [0]]";
		armorStructural=5;
		TFAR_hasIntercom=1;
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\AV-7\av7_co.paa"
		};
	};
	class 3AS_Jug;
	class Aux115_vehicle_Land_JUG: 3AS_Jug
	{
		displayName="[115] HAVw A6 Juggernaut";
		scope=2;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Mechanized";
		crew="115_P2Unit_CT";
		armor=600;
		tas_canBlift=1;
		tas_liftVars="[[[[0,-5,-15]]], [0], [0]]";
		armorStructural=5;
		TFAR_hasIntercom=1;
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\JUG\juggernaut_base_co.paa",
			"\AR121-Vehicles\AR121-Land\JUG\juggernaut_guns_co.paa",
			"3as\3as_jug\data\juggernaut_props_co.paa",
			"3as\3as_jug\data\juggernaut_wheels_co.paa"
		};
	};
	class 3AS_PX10_IMP_R3;
	class Aux115_vehicle_Land_PX10R3: 3AS_PX10_IMP_R3
	{
		displayName="[115] PX10 Engineer";
		scope=2;
		ace_repair_canRepair=1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=3000;
		scopeCurator=2;
		faction="115_Faction";
		editorSubcategory="115_Light";
		crew="115_P2Unit_CT";
		armor=200;
		tas_canBlift=1;
		tas_liftVars="[[[[0,-4,-5]]], [0], [0]]";
		armorStructural=5;
		TFAR_hasIntercom=1;
		animationList[]=
		{
			"HideAttachmentDozer",
			1,
			"HideAttachmentFuel",
			0,
			"HideAttachmentPlate",
			1,
			"HideAttachmentRepair",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\PX-10\PX10CAV_Imp_CO.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
			"\AR121-Vehicles\AR121-Land\PX-10\PX10CAVIntFront_co.paa",
			"\AR121-Vehicles\AR121-Land\PX-10\PX10Fuel_Imp_CO.paa",
			"\AR121-Vehicles\AR121-Land\PX-10\PX10Crane_co.paa"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449310";
};
