class CfgPatches
{
	class Aux115_Bison
	{
		author="Possum";
		requiredAddons[]=
		{
			"OPTRE_Vehicles_Bison",
			"A3_Armor_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Air_F",
			"3as_Laat",
			"3AS_LAAT",
			"115-Core"
		};
		requiredVersion=0.1;
		units[]=
		{
			"115_vehicle_Land_Mudworm_APC",
			"115_vehicle_Land_Mudworm_IFV",
			"115_vehicle_Land_Mudworm_MGS"
		};
	};
};
class CfgVehicles
{
	class Turrets;
	class MainTurret;
	class AnimationSources;
	class OPTRE_M411_APC_UNSC;
	class Aux115_vehicle_Land_Mudworm_APC: OPTRE_M411_APC_UNSC
	{
		displayName="[115] A4 Mudworm APC";
		scope=2;
		maximumLoad=9.9999998e+010;
		scopeCurator=2;
		armor=300;
		armorStructural=2;
		faction="115_Faction";
		editorSubcategory="115_Light";
		crew="115_P2Unit_CT";
		tas_canBlift=1;
		tas_liftVars="[[[[0,-4,-5]]], [0], [0]]";
		TFAR_hasIntercom=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\Bison\Textures\Bison_Body_snow_CO.paa",
			"\AR121-Vehicles\AR121-Land\Bison\Textures\Bison_Misc_snow_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"
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
			class Aux115_Painkiller
			{
				name="115_Painkiller";
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
	class OPTRE_M412_IFV_UNSC;
	class Aux115_vehicle_Land_Mudworm_IFV: OPTRE_M412_IFV_UNSC
	{
		displayName="[115] A4 Mudworm IFV";
		scope=0;
		maximumLoad=9.9999998e+010;
		scopeCurator=0;
		transportSoldier=12;
		armor=300;
		armorStructural=2;
		faction="115_Faction";
		editorSubcategory="115_Light";
		crew="115_P2Unit_CT";
		tas_canBlift=1;
		tas_liftVars="[[[[0,-4,-5]]], [0], [0]]";
		TFAR_hasIntercom=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\Bison\Textures\Bison_Body_snow_CO.paa",
			"\AR121-Vehicles\AR121-Land\Bison\Textures\Bison_Misc_snow_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"115_Weapon_30mm",
					"115_coax",
					"OPTRE_M670_ATGM_Launcher"
				};
				magazines[]=
				{
					"115_Mag_30mm_HE_100rnd_Blue",
					"115_Mag_30mm_HE_100rnd_Blue",
					"115_magazine_Saber_MG",
					"OPTRE_2Rnd_GAT_missiles"
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
			class Aux115_Painkiller
			{
				name="115_Painkiller";
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
	class OPTRE_M413_MGS_UNSC;
	class Aux115_vehicle_Land_Mudworm_MGS: OPTRE_M413_MGS_UNSC
	{
		displayName="[115] A4 Mudworm MGS";
		scope=2;
		maximumLoad=9.9999998e+010;
		scopeCurator=2;
		transportSoldier=12;
		armor=300;
		armorStructural=2;
		faction="115_Faction";
		editorSubcategory="115_Light";
		crew="115_P2Unit_CT";
		tas_canBlift=1;
		tas_liftVars="[[[[0,-4,-5]]], [0], [0]]";
		TFAR_hasIntercom=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Vehicles\AR121-Land\Bison\Textures\Bison_Body_snow_CO.paa",
			"\AR121-Vehicles\AR121-Land\Bison\Textures\Bison_Misc_snow_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"115_bison_105",
					"115_coax",
					"OPTRE_M670_ATGM_Launcher"
				};
				magazines[]=
				{
					"115_105mm_V_HEAT_MAGAZINE",
					"115_magazine_Saber_MG",
					"OPTRE_2Rnd_GAT_missiles"
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
			class Aux115_Painkiller
			{
				name="115_Painkiller";
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
};
class cfgMods
{
	author="Possum";
	timepacked="1732449310";
};
