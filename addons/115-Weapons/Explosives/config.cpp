class CfgPatches
{
	class Aux115_Weapon_Explosives
	{
		author="Possum";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"115_Demo_Charge_Mag",
			"115_Demo_Block_Mag"
		};
		ammo[]=
		{
			"115_Charge_Ammo",
			"115_Demo_Block_Ammo"
		};
	};
};
class CfgAmmo
{
	class SWLW_clones_spec_demo_ammo;
	class Aux115_Demo_Block_Ammo: SWLW_clones_spec_demo_ammo
	{
		hit=8000;
		indirectHit=5000;
		indirectHitRange=10;
	};
	class Aux115_Demo_Charge_Ammo: SWLW_clones_spec_demo_ammo
	{
		hit=1000;
		indirectHit=700;
		indirectHitRange=10;
		model="3AS\3AS_Equipment\model\RTX_Bomb_armed.p3d";
		mineModelDisabled="3AS\3AS_Equipment\model\RTX_Bomb.p3d";
	};
	class JLTS_explosive_emp_10_ammo;
};
class CfgMagazines
{
	class SWLW_clones_spec_demo_mag;
	class Aux115_Demo_Charge_Mag: SWLW_clones_spec_demo_mag
	{
		displayName="[115] C-7 Demo Charge";
		mass=30;
		ammo="115_Demo_Charge_Ammo";
		picture="\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
		model="3AS\3AS_Equipment\model\RTX_Bomb.p3d";
	};
	class Aux115_Demo_Block_Mag: SWLW_clones_spec_demo_mag
	{
		displayName="[115] C-14 Demo Block";
		mass=50;
		ammo="Aux115_Demo_Block_Ammo";
	};
	class JLTS_explosive_emp_10_mag;
};
class CfgWeapons
{
	class default;
	class put: default
	{
		muzzles[]+=
		{
			"115_Demo_Charge_Muzzle",
			"115_Demo_Block_Muzzle"
		};
		displayName="$STR_A3_CfgWeapons_Put0";
		class PutMuzzle;
		class Aux115_Demo_Charge_Muzzle: PutMuzzle
		{
			autoreload=0;
			enableAttack=1;
			magazines[]=
			{
				"115_Demo_Charge_Mag"
			};
			multiSoundHit[]=
			{
				"soundHit1",
				0.5,
				"soundHit2",
				0.5
			};
			displayName="[115] C-7 Demolition Charge";
			showToPlayer=0;
		};
		class Aux115_Demo_Block_Muzzle: PutMuzzle
		{
			autoreload=0;
			enableAttack=1;
			magazines[]=
			{
				"115_Demo_Block_Mag"
			};
			multiSoundHit[]=
			{
				"soundHit1",
				0.5,
				"soundHit2",
				0.5
			};
			displayName="[115] C-14 Demolition Block";
			showToPlayer=0;
		};
	};
};
class CfgVehicles
{
	class ACE_Explosives_Place;
	class Aux115_Demo_Placeable: ACE_Explosives_Place
	{
		model="SWLW_clones_spec\explosives\demo.p3d";
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
