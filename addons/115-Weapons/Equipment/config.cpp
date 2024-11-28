class CfgPatches
{
	class Aux115_Weapon_Equipment
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
			"115_Thermal_Detonator"
		};
		ammo[]=
		{
			"115_Ammo_Thermal_Detonator"
		};
	};
};
class CfgAmmo
{
	class 442_thermal_det;
	class Aux115_Ammo_Thermal_Detonator: 442_thermal_det
	{
		hit=40;
		indirectHit=40;
		indirectHitRange=15;
	};
	class Aux115_Ammo_CIS_Grenade: 442_thermal_det
	{
		hit=20;
		indirectHit=20;
		indirectHitRange=10;
	};
	class 442_impact;
	class Aux115_Ammo_Thermal_Imploder: 442_impact
	{
		hit=300;
		indirectHit=300;
		indirectHitRange=1;
		explosionTime=3;
		ace_frag_enabled=0;
	};
	class 3AS_SonicDetonator;
	class Aux115_Ammo_Flash_Grenade: 3AS_SonicDetonator
	{
		explosionTime=2;
		ace_grenades_flashbangBangs=5;
		ace_grenades_flashbangInterval=0.2;
		ace_grenades_flashbangIntervalMaxDeviation=0;
	};
	class 442_smoke_white;
	class Aux115_Ammo_White_Smoke_impact: 442_smoke_white
	{
		explosionTime=-1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class 442_smoke_blue;
	class Aux115_Ammo_Blue_Smoke_impact: 442_smoke_blue
	{
		explosionTime=-1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class 442_smoke_green;
	class Aux115_Ammo_Green_Smoke_impact: 442_smoke_green
	{
		explosionTime=-1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class 442_smoke_red;
	class Aux115_Ammo_Red_Smoke_impact: 442_smoke_red
	{
		explosionTime=-1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class 442_smoke_purple;
	class Aux115_Ammo_Purple_Smoke_impact: 442_smoke_purple
	{
		explosionTime=-1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class 442_smoke_yellow;
	class Aux115_Ammo_Yellow_Smoke_impact: 442_smoke_yellow
	{
		explosionTime=-1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class 442_smoke_orange;
	class Aux115_Ammo_Orange_Smoke_impact: 442_smoke_orange
	{
		explosionTime=-1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class Aux115_Ammo_White_Smoke: 442_smoke_white
	{
		explosionTime=1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class Aux115_Ammo_Blue_Smoke: 442_smoke_blue
	{
		explosionTime=1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class Aux115_Ammo_Green_Smoke: 442_smoke_green
	{
		explosionTime=1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class Aux115_Ammo_Red_Smoke: 442_smoke_red
	{
		explosionTime=1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class Aux115_Ammo_Purple_Smoke: 442_smoke_purple
	{
		explosionTime=1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class Aux115_Ammo_Yellow_Smoke: 442_smoke_yellow
	{
		explosionTime=1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class Aux115_Ammo_Orange_Smoke: 442_smoke_orange
	{
		explosionTime=1;
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
	};
	class 3AS_CoreDetonator_1RND;
	class Aux115_Grenade_SquadShieldAmmo: 3AS_CoreDetonator_1RND
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		model="3AS\3AS_Shield\SquadShield_Throwable.p3d";
		mira_fired_deployable_enabled=1;
		mira_fired_deployable_object="SquadShield";
		mira_fired_deployable_timeToLive=120;
		simulation="shotShell";
	};
	class Aux115_Grenade_PokeballTurret_Ammo: 3AS_CoreDetonator_1RND
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		model="3AS\3AS_Shield\SquadShield_Throwable.p3d";
		mira_fired_deployable_enabled=1;
		mira_fired_deployable_object="115_Static_Turret";
		mira_fired_deployable_timeToLive=300;
		simulation="shotShell";
	};
	class 3AS_Charge_1RND;
	class Aux115_Ammo_Nei_Throwable: 3AS_Charge_1RND
	{
		hit=2000;
		indirectHit=2000;
		indirectHitRange=7;
		model="3AS\3AS_Equipment\model\RTX_Bomb_armed.p3d";
		explosionTime=15;
	};
	class Aux115_Ammo_C4_Throwable: 442_impact
	{
		hit=2000;
		caliber=10;
		indirectHit=250;
		indirectHitRange=1;
		explosionTime=3;
		ace_frag_enabled=0;
		deflection=0;
		deflectionSlowDown=0.1;
		model="\MRC\JLTS\weapons\Explosives\explosive.p3d";
	};
};
class CfgMagazines
{
	class SmokeShell;
	class SquadShieldMagazine;
	class Aux115_Mag_Squad_Shield: SquadShieldMagazine
	{
		author="Possum";
		displayName="[115] Squad Shield";
		displayNameShort="Squad Shield";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		mass=20;
		ammo="115_Grenade_SquadShieldAmmo";
		descriptionShort="Personal Shield; Lasts 2 Minutes.";
	};
	class Aux115_Mag_Turret: SmokeShell
	{
		author="Possum";
		mass=30;
		scope=2;
		displayName="[115] Deployable Turret";
		model="3as\3as_shield\SquadShield_Throwable.p3d";
		type=256;
		ammo="115_Grenade_PokeballTurret_Ammo";
		count=1;
		initSpeed=18;
		nameSound="handgrenade";
		maxLeadSpeed=7;
		sound[]=
		{
			"",
			0.00031622799,
			1
		};
		descriptionShort="Turret";
		displayNameShort="Turret";
	};
	class 442_thermal_det_mag;
	class Aux115_Mag_Thermal_Detonator: 442_thermal_det_mag
	{
		displayName="[115] Thermal Detonator";
		displayNameShort="Thermal Det";
		mass=8;
		picture="\MRC\JLTS\weapons\Grenades\data\ui\grenade_emp_ui_ca.paa";
		ammo="115_Ammo_Thermal_Detonator";
	};
	class Aux115_Mag_CIS_Grenade: 442_thermal_det_mag
	{
		displayName="(115 OpFor) CIS Thermal Grenade";
		displayNameShort="CIS Grenade";
		mass=8;
		picture="\MRC\JLTS\weapons\Grenades\data\ui\grenade_emp_ui_ca.paa";
		ammo="115_Ammo_CIS_Grenade";
	};
	class 442_impact_mag;
	class Aux115_Mag_Thermal_Imploder: 442_impact_mag
	{
		displayName="[115] Thermal Imploder";
		mass=15;
		displayNameShort="Thermal Imp";
		picture="\MRC\JLTS\weapons\Grenades\data\ui\grenade_emp_ui_ca.paa";
		ammo="115_Ammo_Thermal_Imploder";
	};
	class 3AS_SonicDet;
	class Aux115_Mag_Flash_Grenade: 3AS_SonicDet
	{
		displayName="[115] 5-flash Sonic Detonator";
		displayNameShort="Sonic Det";
		picture="\z\ace\addons\grenades\UI\ace_cts9_x_ca.paa";
		mass=4;
		ammo="115_Ammo_Flash_Grenade";
	};
	class 442_SmokeShellwhite;
	class Aux115_Mag_White_Smoke_impact: 442_SmokeShellwhite
	{
		displayName="[115] Smoke White (Impact)";
		displayNameShort="White Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		scopeArsenal=2;
		ammo="115_Ammo_White_Smoke_impact";
	};
	class 442_SmokeShellred;
	class Aux115_Mag_Red_Smoke_impact: 442_SmokeShellred
	{
		displayName="[115] Smoke Red (Impact)";
		displayNameShort="Red Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Red_Smoke_impact";
	};
	class 442_SmokeShellgreen;
	class Aux115_Mag_Green_Smoke_impact: 442_SmokeShellgreen
	{
		displayName="[115] Smoke Green (Impact)";
		displayNameShort="Green Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_green_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Green_Smoke_impact";
	};
	class 442_SmokeShellblue;
	class Aux115_Mag_Blue_Smoke_impact: 442_SmokeShellblue
	{
		displayName="[115] Smoke Blue (Impact)";
		displayNameShort="Blue Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Blue_Smoke_impact";
	};
	class 442_SmokeShellpurple;
	class Aux115_Mag_Purple_Smoke_impact: 442_SmokeShellpurple
	{
		displayName="[115] Smoke Purple (Impact)";
		displayNameShort="Purple Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_purple_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Purple_Smoke_impact";
	};
	class 442_SmokeShellyellow;
	class Aux115_Mag_Yellow_Smoke_impact: 442_SmokeShellyellow
	{
		displayName="[115] Smoke Yellow (Impact)";
		displayNameShort="Yellow Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_yellow_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="AR121_Ammo_Yellow_Smoke_impact";
	};
	class 442_SmokeShellorange;
	class Aux115_Mag_Orange_Smoke_impact: 442_SmokeShellorange
	{
		displayName="[115] Smoke Orange (Impact)";
		displayNameShort="Orange Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_orange_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Orange_Smoke_impact";
	};
	class Aux115_Mag_White_Smoke: 442_SmokeShellwhite
	{
		displayName="[115] Smoke White ";
		displayNameShort="White Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		scopeArsenal=2;
		ammo="115_Ammo_White_Smoke";
	};
	class Aux115_Mag_Red_Smoke: 442_SmokeShellred
	{
		displayName="[115] Smoke Red ";
		displayNameShort="Red Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Red_Smoke";
	};
	class Aux115_Mag_Green_Smoke: 442_SmokeShellgreen
	{
		displayName="[115] Smoke Green ";
		displayNameShort="Green Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_green_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Green_Smoke";
	};
	class Aux115_Mag_Blue_Smoke: 442_SmokeShellblue
	{
		displayName="[115] Smoke Blue ";
		displayNameShort="Blue Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Blue_Smoke";
	};
	class Aux115_Mag_Purple_Smoke: 442_SmokeShellpurple
	{
		displayName="[115] Smoke Purple ";
		displayNameShort="Purple Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_purple_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Purple_Smoke";
	};
	class Aux115_Mag_Yellow_Smoke: 442_SmokeShellyellow
	{
		displayName="[115] Smoke Yellow ";
		displayNameShort="Yellow Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_yellow_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Yellow_Smoke";
	};
	class Aux115_Mag_Orange_Smoke: 442_SmokeShellorange
	{
		displayName="[115] Smoke Orange ";
		displayNameShort="Orange Smoke";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_orange_ca.paa";
		model="\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		mass=4;
		ammo="115_Ammo_Orange_Smoke";
	};
	class 3AS_ThrowableCharge;
	class Aux115_Mag_C3_Throwable: 3AS_ThrowableCharge
	{
		displayName="[115] C-3 Throwable Explosive";
		displayNameShort="C-3 Throwable";
		ammo="115_Ammo_C3_Throwable";
		mass=40;
		initSpeed=12;
	};
	class ACE_M14;
	class Aux115_Mag_C4_Throwable: ACE_M14
	{
		displayName="[115] C-4 AT Throwable";
		mass=23;
		displayNameShort="AT Charge";
		initspeed=12;
		picture="\SWLW_clones_spec\explosives\data\ui\breach_ui_ca.paa";
		ammo="115_Ammo_C4_Throwable";
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class default;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"115_Thermal_Detonator_Muzzle",
			"115_CIS_Grenade_Muzzle",
			"115_Flash_Grenade_Muzzle",
			"115_Smoke_White_Muzzle_impact",
			"115_Smoke_Red_Muzzle_impact",
			"115_Smoke_Blue_Muzzle_impact",
			"115_Smoke_Green_Muzzle_impact",
			"115_Smoke_Purple_Muzzle_impact",
			"115_Smoke_Yellow_Muzzle_impact",
			"115_Smoke_Orange_Muzzle_impact",
			"115_Muzzle_C3_Throwable",
			"115_Muzzle_C4_Throwable",
			"115_Smoke_White_Muzzle",
			"115_Smoke_Red_Muzzle",
			"115_Smoke_Blue_Muzzle",
			"115_Smoke_Green_Muzzle",
			"115_Smoke_Purple_Muzzle",
			"115_Smoke_Yellow_Muzzle",
			"115_Smoke_Orange_Muzzle"
		};
		class ThrowMuzzle;
		class Aux115_Squad_Shield_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Squad_Shield"
			};
		};
		class Aux115_Turret_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Turret"
			};
		};
		class Aux115_Thermal_Detonator_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Thermal_Detonator"
			};
		};
		class Aux115_CIS_Grenade_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_CIS_Grenade"
			};
		};
		class Aux115_Thermal_Imploder_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Thermal_Imploder"
			};
		};
		class Aux115_Flash_Grenade_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Flash_Grenade"
			};
		};
		class Aux115_Smoke_White_Muzzle_impact: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_White_Smoke_impact"
			};
		};
		class Aux115_Smoke_Red_Muzzle_impact: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Red_Smoke_impact"
			};
		};
		class Aux115_Smoke_Green_Muzzle_impact: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Green_Smoke_impact"
			};
		};
		class Aux115_Smoke_Blue_Muzzle_impact: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Blue_Smoke_impact"
			};
		};
		class Aux115_Smoke_Purple_Muzzle_impact: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Purple_Smoke_impact"
			};
		};
		class Aux115_Smoke_Yellow_Muzzle_impact: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Yellow_Smoke_impact"
			};
		};
		class Aux115_Smoke_Orange_Muzzle_impact: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Orange_Smoke_impact"
			};
		};
		class Aux115_Muzzle_C3_Throwable: ThrowMuzzle
		{
			model="3AS\3AS_Equipment\model\RTX_Bomb.p3d";
			magazines[]=
			{
				"115_Mag_C3_Throwable"
			};
		};
		class Aux115_Muzzle_C4_Throwable: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_C4_Throwable"
			};
		};
		class Aux115_Smoke_White_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_White_Smoke"
			};
		};
		class Aux115_Smoke_Red_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Red_Smoke"
			};
		};
		class Aux115_Smoke_Green_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Green_Smoke"
			};
		};
		class Aux115_Smoke_Blue_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Blue_Smoke"
			};
		};
		class Aux115_Smoke_Purple_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Purple_Smoke"
			};
		};
		class Aux115_Smoke_Yellow_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Yellow_Smoke"
			};
		};
		class Aux115_Smoke_Orange_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"115_Mag_Orange_Smoke"
			};
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
