class CfgPatches
{
	class Aux115_Air_Weapons
	{
		addonRootClass="115_Vehicles";
		requiredAddons[]=
		{
			"115_Vehicles"
		};
		requiredVersion=0.1;
		units[]=
		{
			"115_A2ACannon_Weapon",
			"115_A2ACannon_Pylon_Weapon",
			"115_AA_Pylon_Weapon",
			"115",
			"115_UGM_Pylon_Weapon",
			"115_Bomb_Pylon_Weapon",
			"115_AGM88C_Pylon_Weapon",
			"115_AGM65_Pylon_Weapon",
			"115_GBU12_Pylon_Weapon",
			"115_CBU85_Pylon_Weapon",
			"115_amraam_Pylon_Weapon"
		};
		weapons[]=
		{
			"115_A2ACannon_Weapon",
			"115_A2ACannon_Pylon_Weapon",
			"115_AA_Pylon_Weapon",
			"115_AGM_Pylon_Weapon",
			"115_UGM_Pylon_Weapon",
			"115_Bomb_Pylon_Weapon",
			"115_AGM88C_Pylon_Weapon",
			"115_AGM65_Pylon_Weapon",
			"115_GBU12_Pylon_Weapon",
			"115_CBU85_Pylon_Weapon",
			"115_amraam_Pylon_Weapon"
		};
		ammo[]=
		{
			"115_Air_CannonA2A_Ammo",
			"115_Air_UGMRocket_Ammo",
			"115_Air_AARocket_Ammo",
			"115_Air_AGMRocket_Ammo",
			"115_Air_Proton_bomb_Ammo",
			"115_AGM88C_Ammo",
			"115_AGM65_Ammo",
			"115_GBU12_Ammo",
			"115_CBU85_Ammo",
			"115_amraam_Ammo"
		};
		magazines[]=
		{
			"115_Air_CannonA2A_PylonMag",
			"115_Air_AGMR_PylonMag",
			"115_Air_AAR_PylonMag",
			"115_Air_UGMR_PylonMag",
			"115_Air_Bomb_PylonMag",
			"115_AGM88C_PylonMag",
			"115_AGM65_PylonMag",
			"115_GBU12_PylonMag",
			"115_CBU85_PylonMag",
			"115_amraam_PylonMag"
		};
	};
};
class CfgAmmo
{
	class SensorTemplatePassiveRadar;
	class SensorTemplateAntiRadiation;
	class SensorTemplateActiveRadar;
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplateMan;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class SensorTemplateDataLink;
	class ls_50mm_laat_he;
	class ls_50mm_laat_apfsds;
	class 3AS_LAAT_AGM_Missile;
	class 3as_LAAT_Medium_Energy_shell;
	class Aux115_Air_CannonA2A_Ammo: 3as_LAAT_Medium_Energy_shell
	{
		model="\3AS\3AS_Weapons\Data\tracer_green.p3d";
		caliber=6;
		hit=125;
		explosive=1;
		tracersEvery=1;
		indirectHit=1;
		mass=2;
		indirectHitRange=0.5;
		tracerscale=5;
	};
	class Rocket_03_HE_F;
	class Aux115_Air_UGMRocket_Ammo: Rocket_03_HE_F
	{
		caliber=20;
		hit=400;
		indirectHit=50;
		maxSpeed=400;
		indirectHitRange=25;
		flaresize=10;
		proxyShape="";
		thrustTime=5;
		soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			5,
			5,
			1000
		};
		manualcontrol=0;
	};
	class ammo_Bomb_SDB;
	class Aux115_Air_Proton_bomb_Ammo: ammo_Bomb_SDB
	{
		effectFly="3AS_PlasmaBolt_purple_Fly";
		effectsMissile="115_aux_effects_missile_Rocket_Purple";
	};
	class ammo_Missile_AA_R73;
	class Aux115_Air_AA_Ammo: ammo_Missile_AA_R73
	{
		class Components;
	};
	class Aux115_Air_AARocket_Ammo: Aux115_Air_AA_Ammo
	{
		displayName="AA Ammo";
		displayNameShort="AA Ammo";
		model="\A3\Weapons_F_Jets\Ammo\Missile_AA_07_fly_F";
		muzzleEffect="";
		cmimmunity=0.5;
		explosive=1;
		ACE_caliber=1;
		tracerColor[]=
		{
			"blue"
		};
		brightness=20000;
		lightColor[]={0,0,1,1};
		triggerTime=0.1;
		hit=500;
		indirectHit=400;
		cameraViewAvailable=1;
		maneuvrability=20;
		sideAirFriction=0.22;
		thrust=600;
		thrustTime=10;
		timeToLive=20;
		maxSpeed=600;
		missileLockMinDistance=1;
		missileLockMaxDistance=6000;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=10;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=150;
						angleRangeVertical=150;
						minTrackableATL=1;
						maxTrackableATL=1e+010;
					};
				};
			};
		};
	};
	class Aux115_Air_AGMRocket_Ammo: 3AS_LAAT_AGM_Missile
	{
		displayName="AGM";
		displayNameShort="AGM";
		model="\A3\Weapons_F\Ammo\Missile_AT_02_fly_F";
		lockedTargetSound[]=
		{
			"TIE\LockedOn_2.ogg",
			0.69999999,
			1
		};
		lockingTargetSound[]=
		{
			"TIE\Locking_Beep1.ogg",
			1,
			1
		};
		manualcontrol=1;
		proxyShape="\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
		missileLockMaxDistance=5000;
		missileLockMinDistance=0;
		missileLockCone=360;
		airlock=1;
		weaponLockSystem="1 + 2 + 4 + 8 + 16";
		missileKeepLockedCone=360;
		hit=3500;
		indirectHit=1000;
		mass=2;
		indirectHitRange=10;
		effectFly="3AS_Rocket_effect_Blue_fly";
		effectsMissile="3AS_Rocket_effect_Blue_fly";
	};
	class ammo_Missile_HARM;
	class Missile_AGM_02_F;
	class Bo_GBU12_LGB;
	class BombCluster_01_Ammo_F;
	class ammo_Missile_AMRAAM_D;
	class Aux115_AGM88C_Ammo: ammo_Missile_HARM
	{
	};
	class Aux115_AGM65_Ammo: Missile_AGM_02_F
	{
	};
	class Aux115_GBU12_Ammo: Bo_GBU12_LGB
	{
		weaponLockSystem="2+4";
	};
	class Aux115_CBU85_Ammo: BombCluster_01_Ammo_F
	{
		weaponLockSystem="2+4";
	};
	class Aux115_amraam_Ammo: ammo_Missile_AMRAAM_D
	{
	};
};
class CfgMagazines
{
	class PylonRack_3Rnd_LG_scalpel;
	class PylonRack_12Rnd_missiles;
	class PylonRack_20Rnd_Rocket_03_HE_F;
	class PylonWeapon_300Rnd_20mm_shells;
	class Aux115_Air_CannonA2A_PylonMag: PylonWeapon_300Rnd_20mm_shells
	{
		hardpoints[]=
		{
			"115_Hardpoint"
		};
		displayName="A2A Cannon";
		descriptionshort="A2A Cannon";
		pylonWeapon="115_A2ACannon_Pylon_Weapon";
		displayNameShort="A2A Cannon";
		muzzleImpulseFactor[]={0.050000001,0.022};
		tracersEvery=1;
		count=1000;
		ammo="115_Air_CannonA2A_Ammo";
	};
	class Aux115_Air_AGMR_PylonMag: PylonRack_3Rnd_LG_scalpel
	{
		hardpoints[]=
		{
			"115_Hardpoint"
		};
		displayName="AGM Missle";
		descriptionshort="AGM Missle";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		pylonWeapon="115_AGM_Pylon_Weapon";
		autoSeekTarget=1;
		displayNameShort="AGM Missle";
		ammo="115_Air_AGMRocket_Ammo";
	};
	class PylonRack_Bomb_SDB_x4;
	class Aux115_Air_Bomb_PylonMag: PylonRack_Bomb_SDB_x4
	{
		hardpoints[]=
		{
			"115_H_Hardpoint"
		};
		displayName="SDB Bomb";
		descriptionshort="SDB";
		pylonWeapon="115_Bomb_Pylon_Weapon";
		displayNameShort="SDB Bomb";
		tracersEvery=1;
		initspeed=0;
		ammo="115_Air_Proton_bomb_Ammo";
	};
	class 3AS_PylonMissile_LAAT_8Rnd_Missile_AA;
	class Aux115_Air_AAR_PylonMag: 3AS_PylonMissile_LAAT_8Rnd_Missile_AA
	{
		hardpoints[]=
		{
			"115_Hardpoint",
			"115_H_Hardpoint"
		};
		displayName="AA Missle";
		descriptionshort="AA Missle";
		count=3;
		model="a3\weapons_f\empty.p3d";
		pylonWeapon="115_AA_Pylon_Weapon";
		autoSeekTarget=1;
		displayNameShort="AA Missle";
		ammo="115_Air_AARocket_Ammo";
	};
	class Aux115_Air_AAR_Heavy_PylonMag: PylonRack_12Rnd_missiles
	{
		hardpoints[]=
		{
			"115_H_Hardpoint"
		};
		displayName="6xAA Missle";
		descriptionshort="6xAA Missle";
		count=6;
		model="a3\weapons_f\empty.p3d";
		pylonWeapon="115_AA_Pylon_Weapon";
		autoSeekTarget=1;
		displayNameShort="AA Missle";
		ammo="115_Air_AARocket_Ammo";
	};
	class PylonRack_7Rnd_Rocket_04_HE_F;
	class Aux115_Air_UGMR_PylonMag: PylonRack_7Rnd_Rocket_04_HE_F
	{
		hardpoints[]=
		{
			"115_Hardpoint",
			"115_H_Hardpoint"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_DAGR_F.p3d";
		displayName="UGM Rockets";
		descriptionshort="UGM Rockets";
		pylonWeapon="115_UGM_Pylon_Weapon";
		displayNameShort="UGM Rockets";
		count=20;
		ammo="115_Air_UGMRocket_Ammo";
	};
	class PylonMissile_Missile_HARM_INT_x1;
	class PylonRack_3Rnd_Missile_AGM_02_F;
	class PylonRack_Bomb_GBU12_x2;
	class PylonRack_2Rnd_BombCluster_01_F;
	class PylonRack_Missile_AMRAAM_D_x2;
	class Aux115_AGM88C_PylonMag: PylonMissile_Missile_HARM_INT_x1
	{
		hardpoints[]=
		{
			"115_H_Hardpoint"
		};
		ammo="115_AGM88C_Ammo";
		pylonWeapon="115_AGM88C_Pylon_Weapon";
		count=2;
		displayname="AGM-88C HARM x2";
	};
	class Aux115_AGM65_PylonMag: PylonRack_3Rnd_Missile_AGM_02_F
	{
		hardpoints[]=
		{
			"115_H_Hardpoint"
		};
		ammo="115_AGM65_Ammo";
		pylonWeapon="115_AGM65_Pylon_Weapon";
	};
	class Aux115_GBU12_PylonMag: PylonRack_Bomb_GBU12_x2
	{
		hardpoints[]=
		{
			"115_H_Hardpoint"
		};
		ammo="115_GBU12_Ammo";
		pylonWeapon="115_GBU12_Pylon_Weapon";
	};
	class Aux115_CBU85_PylonMag: PylonRack_2Rnd_BombCluster_01_F
	{
		hardpoints[]=
		{
			"115_H_Hardpoint"
		};
		ammo="115_CBU85_Ammo";
		pylonWeapon="115_CBU85_Pylon_Weapon";
	};
	class Aux115_amraam_PylonMag: PylonRack_Missile_AMRAAM_D_x2
	{
		hardpoints[]=
		{
			"115_H_Hardpoint"
		};
		ammo="115_amraam_Ammo";
		pylonWeapon="115_amraam_Pylon_Weapon";
	};
};
class CfgWeapons
{
	class missiles_DAGR;
	class weapon_AGM_65Launcher;
	class weapon_HARMLauncher;
	class weapon_R73Launcher;
	class CannonCore;
	class missiles_ASRAAM;
	class Missile_AGM_02_Plane_CAS_01_F;
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		class LowROF;
	};
	class 3as_LAAT_Medium_Canon;
	class Aux115_A2ACannon_Weapon: 3as_LAAT_Medium_Canon
	{
		author="SW 13th IB Dev.";
		scope=2;
		displayName="A2A Cannon";
		modes[]=
		{
			"LowROF"
		};
		canLock=2;
		FCSMaxLeadSpeed=500;
		FCSZeroingDelay=0.5;
		weaponLockSystem="0";
		magazines[]=
		{
			"115_Air_CannonA2A_PylonMag"
		};
		ballisticsComputer=1;
	};
	class 3AS_LAAT_Missile_AA;
	class Aux115_AA_Pylon_Weapon: 3AS_LAAT_Missile_AA
	{
		magazineWell[]={};
		weaponLockDelay=2;
		magazines[]=
		{
			"115_Air_AAR_PylonMag",
			"115_Air_AAR_Heavy_PylonMag"
		};
		lockAcquire=1;
		displayName="AA Missle";
	};
	class Aux115_AGM_Pylon_Weapon: Missile_AGM_02_Plane_CAS_01_F
	{
		magazineWell[]={};
		weaponLockDelay=0.5;
		magazines[]=
		{
			"115_Air_AGMR_PylonMag"
		};
		displayName="AGM Missle";
		lockAcquire=1;
		lockingTargetSound[]=
		{
			"TIE\LockedOn_2.ogg",
			4,
			1
		};
		lockedTargetSound[]=
		{
			"TIE\Locking_Beep1.ogg",
			4,
			1
		};
	};
	class weapon_SDBLauncher;
	class Aux115_Bomb_Pylon_Weapon: weapon_SDBLauncher
	{
		displayName="Proton Bomb";
		magazines[]=
		{
			"115_Air_Bomb_PylonMag"
		};
	};
	class Rocketpods;
	class Rocket_04_HE_Plane_CAS_01_F: Rocketpods
	{
		class Burst;
		class Single;
		class fullauto;
	};
	class Aux115_UGM_Pylon_Weapon: Rocket_04_HE_Plane_CAS_01_F
	{
		magazineWell[]={};
		weaponLockDelay=0.5;
		magazines[]=
		{
			"115_Air_UGMR_PylonMag"
		};
		modes[]=
		{
			"Burst",
			"Single",
			"fullauto"
		};
		displayName="UGM Rocket";
		lockAcquire=1;
		class Burst: Burst
		{
			displayname="Burst";
			textureType="burst";
			burst=3;
		};
		class Single: Burst
		{
			displayname="Semi Auto";
			textureType="semi";
			burst=1;
		};
		class fullauto: Burst
		{
			displayname="Full Auto";
			textureType="fullAuto";
			burst=1;
			autofire=1;
			salvo=2;
			reloadTime=0.1;
		};
	};
	class weapon_GBU12Launcher;
	class BombCluster_01_F;
	class weapon_AMRAAMLauncher;
	class Aux115_AGM88C_Pylon_Weapon: weapon_HARMLauncher
	{
		Magazines[]=
		{
			"115_AGM88C_PylonMag"
		};
	};
	class Aux115_AGM65_Pylon_Weapon: Missile_AGM_02_Plane_CAS_01_F
	{
		Magazines[]=
		{
			"115_AGM65_PylonMag"
		};
	};
	class Aux115_GBU12_Pylon_Weapon: weapon_GBU12Launcher
	{
		Magazines[]=
		{
			"115_GBU12_PylonMag"
		};
	};
	class Aux115_CBU85_Pylon_Weapon: BombCluster_01_F
	{
		Magazines[]=
		{
			"115_CBU85_PylonMag"
		};
	};
	class Aux115_amraam_Pylon_Weapon: weapon_AMRAAMLauncher
	{
		Magazines[]=
		{
			"115_amraam_PylonMag"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449310";
};
