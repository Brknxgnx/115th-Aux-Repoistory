class CfgPatches
{
	class Aux115_CIS_EWEB
	{
		author="Possum";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F",
			"3AS_VehicleWeapons"
		};
		units[]=
		{
			"115_CIS_E_Web_Noshield",
			"115_CIS_J10",
			"115_CIS_SAM",
			"115_CIS_AAA",
			"115_CIS_Radar"
		};
		weapons[]=
		{
			"115_CIS_E5c_E_Web"
		};
	};
};
class CfgMagazines
{
	class Aux115_CIS_E5C_Auto_mag;
	class Aux115_CIS_E_Web_Mag_x2000: Aux115_CIS_E5C_Auto_mag
	{
		count=2000;
		displayName="(115 OpFor) E-Web Mag, 2000rnd";
	};
};
class CfgWeapons
{
	class Aux115_CIS_E5C_Auto;
	class Aux115_CIS_E5c_E_Web: Aux115_CIS_E5C_Auto
	{
		scopeArsenal=0;
		model="";
		magazineWell[]={};
		magazines[]=
		{
			"115_CIS_E_Web_Mag_x2000"
		};
	};
};
class CfgVehicles
{
	class StaticMGWeapon;
	class 3AS_HeavyRepeater_Base: StaticMGWeapon
	{
		class Turrets;
	};
	class 3AS_HeavyRepeater_Unarmoured: 3AS_HeavyRepeater_Base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Aux115_CIS_E_Web_Noshield: 3AS_HeavyRepeater_Unarmoured
	{
		displayName="E-Web Tripod";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="115_CIS";
		editorSubcategory="115_CIS_Turrets";
		crew="115_CIS_Base_B1_Droid";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"115_CIS_E5c_E_Web"
				};
				magazines[]=
				{
					"115_CIS_E_Web_Mag_x2000",
					"115_CIS_E_Web_Mag_x2000",
					"115_CIS_E_Web_Mag_x2000",
					"115_CIS_E_Web_Mag_x2000",
					"115_CIS_E_Web_Mag_x2000"
				};
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="115_CIS_E5c_E_Web";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="115_CIS_E5c_E_Web";
			};
			class minigun
			{
				source="revolving";
				weapon="115_CIS_E5c_E_Web";
			};
		};
	};
	class 3AS_J10s_Base_F: StaticMGWeapon
	{
		class Turrets;
	};
	class 3AS_J10s_F: 3AS_J10s_Base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Aux115_CIS_J10: 3AS_J10s_F
	{
		displayName="J-10 Tripod";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="115_CIS";
		editorSubcategory="115_CIS_Turrets";
		crew="115_CIS_Base_B1_Droid";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"115_CIS_E5c_E_Web"
				};
				magazines[]=
				{
					"115_CIS_E_Web_Mag_x2000",
					"115_CIS_E_Web_Mag_x2000",
					"115_CIS_E_Web_Mag_x2000",
					"115_CIS_E_Web_Mag_x2000",
					"115_CIS_E_Web_Mag_x2000"
				};
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="115_CIS_E5c_E_Web";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="115_CIS_E5c_E_Web";
			};
			class minigun
			{
				source="revolving";
				weapon="115_CIS_E5c_E_Web";
			};
		};
	};
	class 3AS_DF9_Rocket;
	class 3AS_DF9_AA;
	class 3AS_DF9_Radar;
	class Aux115_CIS_SAM: 3AS_DF9_Rocket
	{
		displayName="DF9 SAM";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="115_CIS";
		editorSubcategory="115_CIS_Turrets";
		crew="115_CIS_Base_B1_Droid";
	};
	class 115_CIS_AAA: 3AS_DF9_AA
	{
		displayName="DF9 AAA";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="115_CIS";
		editorSubcategory="115_CIS_Turrets";
		crew="115_CIS_Base_B1_Droid";
	};
	class Aux115_CIS_Radar: 3AS_DF9_Radar
	{
		displayName="DF9 Radar";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="115_CIS";
		editorSubcategory="115_CIS_Turrets";
		crew="115_CIS_Base_B1_Droid";
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449302";
};
