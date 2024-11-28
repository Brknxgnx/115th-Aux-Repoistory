class CfgPatches
{
	class Aux115_AUX_Effects
	{
		author="Possum";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgLights
{
	class ls_light_hailfireRocket;
	class Aux115_aux_effects_rocket_blue: ls_light_hailfireRocket
	{
		color[]={0,0,1};
	};
	class Aux115_aux_effects_rocket_green: ls_light_hailfireRocket
	{
		color[]={0,1,0};
	};
	class Aux115_aux_effects_rocket_red: ls_light_hailfireRocket
	{
		color[]={186,0,0};
	};
	class Aux115_aux_effects_rocket_Purple: ls_light_hailfireRocket
	{
		color[]={0.30000001,0,0.5};
	};
};
class CfgCloudlets
{
	class Missile2;
	class ArtilleryShell1;
	class ls_particle_hailfireRocket;
	class Aux115_aux_effects_smoke_RPS_blue: Missile2
	{
		color[]=
		{
			{0,0,0.60000002,0.1}
		};
		colorVar[]={0,0,0,1};
		lifetime=0.25;
		colorCoef[]={1,1,1,1};
		size[]={1,2};
		volume=30;
		weight=30;
	};
	class Aux115_aux_effects_smoke_PLX_blue: ls_particle_hailfireRocket
	{
		color[]=
		{
			{0.1,0.2,0.80000001,1},
			{0,0,0,1},
			{0,0,0,1}
		};
		colorVar[]={0,0,0,1};
		lifetime=3;
		colorCoef[]={1,1,1,1};
		size[]={2,2};
		volume=2;
	};
	class Aux115_aux_effects_smoke_PLX_green: ls_particle_hailfireRocket
	{
		color[]=
		{
			{0.2,0.80000001,0.1,1},
			{0,0,0,1},
			{0,0,0,1}
		};
		colorVar[]={0,0,0,1};
		lifetime=3;
		colorCoef[]={1,1,1,1};
		size[]={2,2};
		volume=2;
	};
	class Missile4;
	class Aux115_aux_effects_smoke_Rocket_Purple: Missile4
	{
		color[]=
		{
			{0.2,0,0.1,1},
			{0,0,0,0.5},
			{0,0,0,0.30000001},
			{0,0,0,0.1},
			{0,0,0,0.0099999998}
		};
		colorVar[]={0,0,0,1};
		colorCoef[]={1,1,1,1};
		interval=0.001;
		size[]={0.80000001,1.2};
		lifetime=1.5;
		volume=20;
		weight=20;
	};
	class Aux115_aux_effects_smoke_Rocket_Blue: Missile4
	{
		color[]=
		{
			{0,0.050000001,0.2,1},
			{0,0,0,0.5},
			{0,0,0,0.30000001},
			{0,0,0,0.1},
			{0,0,0,0.0099999998}
		};
		colorVar[]={0,0,0,1};
		colorCoef[]={1,1,1,1};
		interval=0.001;
		size[]={1,5};
		lifetime=3;
		volume=15;
		weight=15;
	};
	class Aux115_aux_effects_smoke_Rocket_Green: Missile4
	{
		color[]=
		{
			{0,0.80000001,0,1},
			{0,0,0,0.5},
			{0,0,0,0.30000001},
			{0,0,0,0.1},
			{0,0,0,0.0099999998}
		};
		colorVar[]={0,0,0,1};
		colorCoef[]={1,1,1,1};
		interval=0.001;
		size[]={1,2};
		lifetime=3;
		volume=15;
		weight=15;
	};
	class Aux115_aux_effects_smoke_Rocket_Dark_Green: Missile4
	{
		color[]=
		{
			{0,0.301,0,1},
			{0,0,0,0.5},
			{0,0,0,0.30000001},
			{0,0,0,0.1},
			{0,0,0,0.0099999998}
		};
		colorVar[]={0,0,0,1};
		colorCoef[]={1,1,1,1};
		interval=0.001;
		size[]={1,2};
		lifetime=3;
		volume=15;
		weight=15;
	};
	class Aux115_aux_effects_smoke_Rocket_Red: Missile4
	{
		color[]=
		{
			{0.30000001,0,0.050000001,1},
			{0,0,0,0.5},
			{0,0,0,0.30000001},
			{0,0,0,0.1},
			{0,0,0,0.0099999998}
		};
		colorVar[]={0,0,0,1};
		colorCoef[]={1,1,1,1};
		interval=0.001;
		size[]={1,2};
		lifetime=3;
		volume=15;
		weight=15;
	};
	class ls_particle_hailfireRocketSparks;
	class Aux115_aux_effects_sparks_blue: ls_particle_hailfireRocketSparks
	{
		color[]=
		{
			{0.40000001,0.40000001,1,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{0.80000001,0.80000001,1,1}
		};
		lifetime=3;
		weight=1;
	};
	class Aux115_aux_effects_sparks_embers: ls_particle_hailfireRocketSparks
	{
		color[]=
		{
			{1,1,1,-50}
		};
		lifetime=0.5;
		weight=1;
		emissiveColor[]=
		{
			{1,1,1,1}
		};
	};
	class Aux115_aux_effects_sparks_green: ls_particle_hailfireRocketSparks
	{
		color[]=
		{
			{0.40000001,1,0.40000001,-50}
		};
		lifetime=3;
		weight=1;
		emissiveColor[]=
		{
			{0.80000001,1,0.80000001,1}
		};
	};
	class Aux115_aux_effects_sparks_red: ls_particle_hailfireRocketSparks
	{
		color[]=
		{
			{1,0.40000001,0.40000001,-50}
		};
		lifetime=3;
		weight=1;
		emissiveColor[]=
		{
			{1,0.80000001,0.80000001,1}
		};
	};
	class Aux115_aux_effects_sparks_rocket: ls_particle_hailfireRocketSparks
	{
		color[]=
		{
			{1,1,1,-50}
		};
		lifetime=5;
		emissiveColor[]=
		{
			{1,1,1,1}
		};
	};
	class Aux115_aux_effects_sparks_Blue_rocket: ls_particle_hailfireRocketSparks
	{
		color[]=
		{
			{0.5,0.5,1,-50}
		};
		lifetime=5;
		emissiveColor[]=
		{
			{1,1,1,1}
		};
	};
	class Aux115_aux_effects_sparks_Red_rocket: ls_particle_hailfireRocketSparks
	{
		color[]=
		{
			{1,0.5,0.5,-50}
		};
		lifetime=5;
		emissiveColor[]=
		{
			{1,1,1,1}
		};
	};
	class Aux115_aux_effects_smoke_tracerblue: ArtilleryShell1
	{
		color[]=
		{
			{0.2,0,0.80000001,0.2},
			{0.1,0.1,0.85000002,0.1},
			{0.15000001,0.15000001,0.89999998,0.02},
			{0.2,0.2,0.94999999,0.0060000001},
			{0.25,0.25,1,0.001}
		};
		colorVar[]={0,0,0,0};
		colorCoef[]={1,1,1,1};
		volume=20;
		lifetime=0.60000002;
		size[]={0.60000002,1.8,2.5};
		interval=0.0049999999;
		weight=4;
		emissiveColor[]=
		{
			{0.5,0.5,0.80000001,0.14},
			{0.80000001,0.80000001,0.80000001,0.5}
		};
	};
	class Aux115_aux_effects_smoke_tracergreen:Aux115_aux_effects_smoke_tracerblue
	{
		color[]=
		{
			{0.2,0.80000001,0,0.2},
			{0.1,0.85000002,0.1,0.1},
			{0.15000001,0.89999998,0.15000001,0.02},
			{0.2,0.94999999,0.2,0.0060000001},
			{0.25,1,0.25,0.001}
		};
		emissiveColor[]=
		{
			{0.5,0.80000001,0.5,0.14},
			{0.80000001,0.80000001,0.80000001,0.5}
		};
	};
	class Aux115_aux_effects_AVI_tracergreen: ArtilleryShell1
	{
		color[]=
		{
			{0,1.5,0,0.2},
			{0,0.5,0,0.001}
		};
		colorVar[]={0,0,0,0};
		colorCoef[]={1,1,1,1};
		volume=25;
		lifetime=0.60000002;
		size[]={0.60000002};
		interval=0.0049999999;
		weight=25;
		emissiveColor[]=
		{
			{0.5,0.5,0.80000001,0.14},
			{0.80000001,0.80000001,0.80000001,0.5}
		};
	};
	class Aux115_aux_effects_Bomb_tracerPurple: ArtilleryShell1
	{
		color[]=
		{
			{0.60000002,0,0.40000001,1},
			{0.60000002,0,0.40000001,0.5},
			{0.60000002,0,0.40000001,0.30000001},
			{0.60000002,0,0.40000001,0.1},
			{0.60000002,0,0.40000001,0.0099999998}
		};
		colorVar[]={0,0,0,0};
		colorCoef[]={1,1,1,1};
		volume=35;
		lifetime=5;
		size[]={0.60000002};
		interval=0.0049999999;
		weight=35;
	};
	class Aux115_aux_effects_AVI_tracerblue: ArtilleryShell1
	{
		color[]=
		{
			{0,0,1.5,0.2},
			{0,0,0.5,0.001}
		};
		colorVar[]={0,0,0,0};
		colorCoef[]={1,1,1,1};
		volume=25;
		lifetime=0.60000002;
		size[]={0.60000002};
		interval=0.0049999999;
		weight=25;
		emissiveColor[]=
		{
			{0.5,0.5,0.80000001,0.14},
			{0.80000001,0.80000001,0.80000001,0.5}
		};
	};
	class Cmeasures1;
	class Aux115_aux_effects_CM1: Cmeasures1
	{
		lifeTime=5;
		size[]={0.2,0.5};
		volume=2;
	};
	class Cmeasures1L;
	class Aux115_aux_effects_CM1L: Cmeasures1L
	{
		lifeTime=2;
		size[]={0.30000001,3,3.5,4,5,6};
		volume=2;
	};
	class Cmeasures1M;
	class Aux115_aux_effects_CM1M: Cmeasures1L
	{
		lifeTime=5;
		size[]={0.30000001,3,3.5,4,5,6};
		volume=2;
	};
};
class Aux115_aux_effects_missile_blue
{
	class light1
	{
		intensity=1;
		interval=1;
		lifeTime=4;
		position[]={0,0,0};
		simulation="light";
		type="115_aux_effects_rocket_blue";
	};
	class MissileEffect1
	{
		simulation="particles";
		type="115_aux_effects_smoke_RPS_blue";
	};
	class MissileEffect2: MissileEffect1
	{
		type="115_aux_effects_sparks_embers";
	};
};
class Aux115_aux_effects_missile_plx_blue
{
	class light1
	{
		intensity=1;
		interval=1;
		lifeTime=4;
		position[]={0,0,0};
		simulation="light";
		type="115_aux_effects_rocket_blue";
	};
	class MissileEffect1
	{
		simulation="particles";
		type="115_aux_effects_smoke_PLX_blue";
	};
	class MissileEffect2: MissileEffect1
	{
		type="115_aux_effects_sparks_blue";
	};
};
class Aux115_aux_effects_missile_plx_green
{
	class light1
	{
		intensity=1;
		interval=1;
		lifeTime=4;
		position[]={0,0,0};
		simulation="light";
		type="115_aux_effects_rocket_green";
	};
	class MissileEffect1
	{
		simulation="particles";
		type="115_aux_effects_smoke_PLX_Green";
	};
	class MissileEffect2: MissileEffect1
	{
		type="115_aux_effects_sparks_green";
	};
};
class Aux115_aux_effects_missile_Rocket_Purple
{
	class light1
	{
		intensity=1;
		interval=1;
		lifeTime=4;
		position[]={0,0,0};
		simulation="light";
		type="115_aux_effects_rocket_Purple";
	};
	class MissileEffect1
	{
		simulation="particles";
		type="115_aux_effects_smoke_Rocket_Purple";
	};
};
class Aux115_aux_effects_missile_Rocket_Blue
{
	class light1
	{
		intensity=1;
		interval=1;
		lifeTime=4;
		position[]={0,0,0};
		simulation="light";
		type="115_aux_effects_rocket_blue";
	};
	class MissileEffect1
	{
		simulation="particles";
		type="115_aux_effects_smoke_Rocket_Blue";
	};
	class MissileEffect2: MissileEffect1
	{
		type="115_aux_effects_sparks_Blue_rocket";
	};
};
class Aux115_aux_effects_missile_Rocket_Green
{
	class light1
	{
		intensity=1;
		interval=1;
		lifeTime=4;
		position[]={0,0,0};
		simulation="light";
		type="115_aux_effects_rocket_Green";
	};
	class MissileEffect1
	{
		simulation="particles";
		type="115_aux_effects_smoke_Rocket_Green";
	};
	class MissileEffect2: MissileEffect1
	{
		type="115_aux_effects_sparks_green";
	};
};
class Aux115_aux_effects_missile_Rocket_Dark_Green
{
	class light1
	{
		intensity=1;
		interval=1;
		lifeTime=4;
		position[]={0,0,0};
		simulation="light";
		type="115_ux_effects_rocket_Dark_Green";
	};
	class MissileEffect1
	{
		simulation="particles";
		type="115_aux_effects_smoke_Rocket_Dark_Green";
	};
	class MissileEffect2: MissileEffect1
	{
		type="115_aux_effects_sparks_green";
	};
};
class Aux115_aux_effects_missile_red
{
	class light1
	{
		intensity=1;
		interval=1;
		lifeTime=4;
		position[]={0,0,0};
		simulation="light";
		type="115_aux_effects_rocket_red";
	};
	class MissileEffect1
	{
		simulation="particles";
		type="115_aux_effects_smoke_Rocket_Red";
	};
	class MissileEffect2: MissileEffect1
	{
		type="115_aux_effects_sparks_embers";
	};
};
class CounterMeasureFlare;
class Aux115_aux_effects_CMFlare
{
	class light1
	{
		intensity=1;
		interval=1;
		lifeTime=4;
		position[]={0,0,0};
		simulation="light";
		type="CmeasuresLight";
	};
	class CM1M
	{
		intensity=1;
		interval=1;
		lifeTime=4.5;
		position[]={0,0,0};
		qualityLevel=2;
		simulation="particles";
		type="AR121_aux_effects_CM1M";
	};
};
class Aux115_aux_effects_blue_bullet
{
	class MissileEffect1
	{
		qualityLevel=2;
		simulation="particles";
		type="115_aux_effects_smoke_tracerblue";
	};
};
class Aux115_aux_effects_green_bullet
{
	class MissileEffect1
	{
		qualityLevel=2;
		simulation="particles";
		type="115_aux_effects_smoke_tracergreen";
	};
};
class Aux115_aux_effects_green_tracer_AVI
{
	class MissileEffect1
	{
		qualityLevel=2;
		simulation="particles";
		type="115_aux_effects_AVI_tracergreen";
	};
};
class Aux115_aux_effects_blue_tracer_AVI
{
	class MissileEffect1
	{
		qualityLevel=2;
		simulation="particles";
		type="1151_aux_effects_AVI_tracerblue";
	};
};
class Aux115_aux_effects_purple_tracer_Bomb
{
	class MissileEffect1
	{
		qualityLevel=2;
		simulation="particles";
		type="115_aux_effects_Bomb_tracerPurple";
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732450627";
};
