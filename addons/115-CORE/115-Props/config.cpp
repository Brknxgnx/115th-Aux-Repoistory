class CfgPatches
{
	class Aux115_statics_Props
	{
		author="Possum";
		requiredaddons[]=
		{
			"A3_Armor_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Air_F",
			"3as_Laat",
			"3AS_LAAT",
			"115_Medical",
			"115Core",
			"115_WCore_Ammo"
		};
		requiredversion=0.1;
		units[]=
		{
			"115_Arsenal_Box",
			"115_Ammo_Box",
			"115_Medical_Box",
			"115_Explosives_Box",
			"115_3R_Box"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class 3AS_Small_Box_6_Civilian_Prop;
	class AR121_Arsenal_Box: 3AS_Small_Box_6_Civilian_Prop
	{
		author="Possum";
		scope=2;
		scopeCurator=2;
		displayName="[115] Arsenal Box";
		maximumLoad=5000;
		editorCategory="115_statics_Props";
		editorSubcategory="115_Resupply";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class EventHandlers
		{
			init="[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Core\data\Misc\box_CO.paa",
			"\AR121-Core\data\Misc\Lid_CO.paa"
		};
	};
	class 3AS_Supply_Large_Ammo_Prop;
	class Aux115_Ammo_Box: 3AS_Supply_Large_Ammo_Prop
	{
		author="Possum";
		scope=2;
		scopeCurator=2;
		displayName="[115] Ammo Resupply Box";
		maximumLoad=5000;
		editorCategory="115_statics_Props";
		editorSubcategory="115_Resupply";
		ace_dragging_ignoreWeightCarry=1;
		ace_dragging_ignoreWeight=1;
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
			class Aux115_Magazine_DC18
			{
				magazine="115_Magazine_DC18";
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
				count=20;
			};
			class Aux115_Magazine_DC15C
			{
				magazine="115_Magazine_DC15C";
				count=30;
			};
			class Aux115_MAG_Stun_x6
			{
				magazine="115_MAG_Stun_x6";
				count=10;
			};
			class Aux115_Magazine_DW32
			{
				magazine="115_Magazine_DW32";
				count=20;
			};
			class Aux115_Magazine_Valken
			{
				magazine="115_Magazine_Valken";
				count=20;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class EventHandlers
		{
			init="[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};
	class 3AS_Supply_Large_Orange_Prop;
	class Aux115_Explosives_Box: 3AS_Supply_Large_Orange_Prop
	{
		author="Possum";
		scope=2;
		scopeCurator=2;
		displayName="[115] Explosives Resupply Box";
		maximumLoad=5000;
		editorCategory="115_statics_Props";
		editorSubcategory="115_Resupply";
		ace_dragging_ignoreWeightCarry=1;
		ace_dragging_ignoreWeight=1;
		class TransportMagazines
		{
			class Aux115_Mag_Thermal_Detonator
			{
				magazine="115_Mag_Thermal_Detonator";
				count=10;
			};
			class Aux115_Mag_Flash_Grenade
			{
				magazine="115_Mag_Flash_Grenade";
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
			class Aux115_RPS6_AT_mag
			{
				magazine="115_RPS6_AT_mag";
				count=10;
			};
			class Aux115_Mag_White_Smoke
			{
				magazine="115_Mag_White_Smoke";
				count=10;
			};
			class Aux115_Mag_C3_Throwable
			{
				magazine="115_Mag_C3_Throwable";
				count=5;
			};
			class Aux115_Mag_C4_Throwable
			{
				magazine="115_Mag_C4_Throwable";
				count=5;
			};
			class Aux115_Mag_Red_Smoke
			{
				magazine="115_Mag_Red_Smoke";
				count=5;
			};
			class Aux115_Mag_Green_Smoke
			{
				magazine="115_Mag_Green_Smoke";
				count=5;
			};
			class Aux115_Mag_Blue_Smoke
			{
				magazine="115_Mag_Blue_Smoke";
				count=5;
			};
			class Aux115_Mag_Purple_Smoke
			{
				magazine="115_Mag_Purple_Smoke";
				count=5;
			};
			class Aux115_Mag_Yellow_Smoke
			{
				magazine="115_Mag_Yellow_Smoke";
				count=5;
			};
			class Aux115_Mag_Orange_Smoke
			{
				magazine="115_Mag_Orange_Smoke";
				count=5;
			};
			class Aux115_Demo_Charge_Mag
			{
				magazine="115_Demo_Charge_Mag";
				count=2;
			};
			class Aux115_Demo_Block_Mag
			{
				magazine="115_Demo_Block_Mag";
				count=2;
			};
			class Aux115_MAG_UGL_HE_3RND
			{
				magazine="115_MAG_UGL_HE_3RND";
				count=5;
			};
			class Aux115_MAG_UGL_EX_1RND
			{
				magazine="115_MAG_UGL_EX_1RND";
				count=5;
			};
			class Aux115_MAG_UGL_Smoke_Grenade_shell
			{
				magazine="115_MAG_UGL_Smoke_Grenade_shell";
				count=10;
			};
			class Aux115_MAG_UGL_Smoke_Grenade_Red
			{
				magazine="115_MAG_UGL_Smoke_Grenade_Red";
				count=10;
			};
			class Aux115_MAG_UGL_Smoke_Grenade_Green
			{
				magazine="115_MAG_UGL_Smoke_Grenade_Green";
				count=10;
			};
			class Aux115_MAG_UGL_Smoke_Grenade_Purple
			{
				magazine="115_MAG_UGL_Smoke_Grenade_Purple";
				count=10;
			};
			class Aux115_MAG_UGL_Smoke_Grenade_Blue
			{
				magazine="115_MAG_UGL_Smoke_Grenade_Blue";
				count=10;
			};
			class Aux115_MAG_UGL_Smoke_Grenade_Orange
			{
				magazine="115_MAG_UGL_Smoke_Grenade_Orange";
				count=10;
			};
		};
		class TransportWeapons
		{
			class Aux115_rps6_AT_disposable
			{
				weapon="115_rps6_AT_disposable";
				count=5;
			};
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class EventHandlers
		{
			init="[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};
	class 3AS_Supply_Large_Medical_Prop;
	class Aux115_Medical_Box: 3AS_Supply_Large_Medical_Prop
	{
		author="Possum";
		scope=2;
		scopeCurator=2;
		displayName="[115] Medical Resupply Box";
		maximumLoad=5000;
		editorCategory="115_statics_Props";
		editorSubcategory="115_Resupply";
		ace_dragging_ignoreWeightCarry=1;
		ace_dragging_ignoreWeight=1;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=100;
			};
			class ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=100;
			};
			class ACE_quikclot
			{
				name="ACE_quikclot";
				count=100;
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
				name="115_Painkiller";
				count=50;
			};
			class ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=20;
			};
			class ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=25;
			};
			class ACE_Splint
			{
				name="ACE_Splint";
				count=20;
			};
			class knd_medical_staple
			{
				name="knd_medical_staple";
				count=200;
			};
			class knd_bacta
			{
				name="knd_bacta";
				count=50;
			};
			class knd_rapidfuse_500
			{
				name="ACE_quikclot";
				count=20;
			};
			class knd_rapidfuse
			{
				name="knd_rapidfuse";
				count=20;
			};
			class knd_rapidfuse_compressed_500
			{
				name="knd_rapidfuse_compressed_500";
				count=20;
			};
			class knd_rapidfuse_compressed
			{
				name="knd_rapidfuse_compressed";
				count=20;
			};
			class knd_cordrazine
			{
				name="knd_cordrazine";
				count=20;
			};
			class knd_woundglue
			{
				name="knd_woundglue";
				count=50;
			};
			class knd_comaren
			{
				name="knd_comaren";
				count=20;
			};
			class knd_stimpak
			{
				name="knd_stimpak";
				count=20;
			};
		};
		class TransportBackpacks
		{
		};
		class EventHandlers
		{
			init="[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};
	class B_Slingload_01_Ammo_F;
	class Aux115_3R_Box: B_Slingload_01_Ammo_F
	{
		author="Possum";
		scope=2;
		scopeCurator=2;
		displayName="[115] Vehicle Resupply Box";
		maximumLoad=5000;
		model="3as\3as_props\crates\models\large_crate_8.p3d";
		editorPreview="\3as\3as_props\Crates\EditorPreviews\3AS_Large_Crate_Green_Prop.jpg";
		editorCategory="115_statics_Props";
		editorSubcategory="115_Resupply";
		damageResistance=5000;
		armor=8000;
		tas_canBlift=1;
		tas_liftVars="[[[[0,1,-4.5]]], [0], [0,0,90]]";
		class EventHandlers
		{
			init="[_this select 0] execVM '\AR121-Vehicles\AR121-Air\autocrate.sqf';";
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Core\data\Misc\largecrate_10_CO"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class ToolKit
			{
				name="ToolKit";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
		ace_repair_canRepair=1;
		ace_rearm_defaultSupply=1200;
		ace_refuel_fuelCargo=3000;
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449290";
};
