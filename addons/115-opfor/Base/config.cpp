class cfgPatches
{
	class Aux115_CIS
	{
		name="(115 OpFor) CIS Faction";
		author="Possum";
		requiredAddons[]=
		{
			"JLTS_Core"
		};
		weapons[]=
		{
			"115_CIS_Base_B1_Droid_U",
			"115_CIS_B1_Droid_AT_U",
			"115_CIS_B1_Droid_AA_U",
			"115_CIS_B1_Droid_Sniper_U",
			"115_CIS_B1_Droid_Shotgun_U",
			"115_CIS_B1_Droid_Heavy_U",
			"115_CIS_B1_Droid_Grenadier_U",
			"115_CIS_B1_Droid_Security_U",
			"115_CIS_B1_Droid_Crew_U",
			"115_CIS_B1_Droid_Commander_U",
			"115_CIS_BX_U_Base",
			"115_CIS_BX_Lead_U_Base",
			"115_CIS_BX_Vest"
		};
		units[]=
		{
			"115_CIS_B1_backpack",
			"115_CIS_B1_antenna_backpack",
			"115_CIS_Base_B1_Droid",
			"115_CIS_B1_Droid_AT",
			"115_CIS_B1_Droid_AA",
			"115_CIS_B1_Droid_Heavy_AA",
			"115_CIS_B1_Droid_Sniper",
			"115_CIS_B1_Droid_Shotgun",
			"115_CIS_B1_Droid_Heavy",
			"115_CIS_B1_Droid_Grenadier",
			"115_CIS_B1_Droid_Security",
			"115_CIS_B1_Droid_Crew",
			"115_CIS_B1_Droid_Commander",
			"115_CIS_TSeries",
			"115_CIS_B2_Droid",
			"115_CIS_B2_Droid_Super",
			"115_CIS_B2_Droid_Super_Blaster",
			"115_CIS_BX_Base",
			"115_CIS_BX_Lead",
			"115_CIS_BX_Sniper",
			"115_CIS_BX_Heavy",
			"115_CIS_BX_AT"
		};
	};
};
class CfgFactionClasses
{
	class Aux115_CIS
	{
		displayName="(115 OpFor) CIS Faction";
		author="Possum";
		flag="\a3\Data_f\Flags\flag_nato_co.paa";
		icon="";
		priority=1;
		side=0;
	};
};
class CfgEditorSubcategories
{
	class Aux115_CIS_inf
	{
		displayName="(CIS) B1 Infantry";
	};
	class Aux115_CIS_B2
	{
		displayName="(CIS) B2 Infantry";
	};
	class Aux115_CIS_BX
	{
		displayName="(CIS) BX Infantry";
	};
	class Aux115_CIS_HVT
	{
		displayName="(CIS) High Value Targets";
	};
	class Aux115_CIS_armoured
	{
		displayName="(CIS) Armoured";
	};
	class Aux115_CIS_helicopter
	{
		displayName="(CIS) Helicopter";
	};
	class Aux115_CIS_aircraft
	{
		displayName="(CIS) Aircraft";
	};
	class Aux115_CIS_Turrets
	{
		displayName="(CIS) Turrets";
	};
	class Aux115_CIS_AA
	{
		displayName="(CIS) Anti-Air";
	};
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class JLTS_DroidB1;
	class Aux115_CIS_Base_B1_Droid_U: JLTS_DroidB1
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="Possum";
		scope=2;
		armor=6;
		displayName="(115 OpFor) B1 Uniform";
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model="\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="115_CIS_Base_B1_Droid";
			containerClass="Supply150";
			mass=100;
		};
	};
	class Aux115_CIS_B1_Droid_AT_U: Aux115_CIS_Base_B1_Droid_U
	{
		displayName="(115 OpFor) B1 AT Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="115_CIS_B1_Droid_AT";
		};
	};
	class Aux115_CIS_B1_Droid_AA_U: Aux115_CIS_Base_B1_Droid_U
	{
		displayName="(115 OpFor) B1 AA Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="115_CIS_B1_Droid_AA";
		};
	};
	class Aux115_CIS_B1_Droid_Sniper_U: Aux115_CIS_Base_B1_Droid_U
	{
		displayName="(115 OpFor) B1 Sniper Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="115_CIS_B1_Droid_Sniper";
		};
	};
	class Aux115_CIS_B1_Droid_Shotgun_U: Aux115_CIS_Base_B1_Droid_U
	{
		displayName="(115 OpFor) B1 Shotgun Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="115_CIS_B1_Droid_Shotgun";
		};
	};
	class Aux115_CIS_B1_Droid_Heavy_U: Aux115_CIS_Base_B1_Droid_U
	{
		displayName="(115 OpFor) B1 Heavy Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="115_CIS_B1_Droid_Heavy";
		};
	};
	class Aux115_CIS_B1_Droid_Grenadier_U: Aux115_CIS_Base_B1_Droid_U
	{
		displayName="(115 OpFor) B1 Grenadier Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="115_CIS_B1_Droid_Grenadier";
		};
	};
	class Aux115_CIS_B1_Droid_Security_U: Aux115_CIS_Base_B1_Droid_U
	{
		displayName="(115 OpFor) B1 Security Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="115_CIS_B1_Droid_Security";
		};
	};
	class Aux115_CIS_B1_Droid_Crew_U: Aux115_CIS_Base_B1_Droid_U
	{
		displayName="(115 OpFor) B1 Crew Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="115_CIS_B1_Droid_Crew";
		};
	};
	class Aux115_CIS_B1_Droid_Commander_U: Aux115_CIS_Base_B1_Droid_U
	{
		displayName="(115 OpFor) B1 Commander Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="115_CIS_B1_Droid_Commander";
		};
	};
	class V_PlateCarrier1_rgr;
	class ls_redforVest_base: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class ls_cis_bxCommando_vest: ls_redforVest_base
	{
		class ItemInfo;
	};
	class Aux115_CIS_BX_Vest: ls_cis_bxCommando_vest
	{
		scope=2;
		scopeArsenal=2;
		displayName="(115 OpFor) BX Vest";
		model="\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
			containerClass="Supply40";
			hiddenSelections[]={};
			mass=1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};
};
class CfgVehicles
{
	class JLTS_B1_backpack;
	class JLTS_B1_backpack_prototype;
	class JLTS_B1_antenna;
	class Aux115_CIS_B1_backpack: JLTS_B1_backpack
	{
		author="Possum";
		scope=2;
		scopeArsenal=2;
		displayName="(115 OpFor) Droid B1 Backpack ";
		maximumload=600;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_backpack_co.paa"
		};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=15;
			};
		};
		class TransportMagazines
		{
			class _xx_rps6mag
			{
				magazine="JLTS_RPS6_mag";
				count=2;
			};
			class _xx_aa_mag
			{
				count=2;
				magazine="Titan_AA";
			};
		};
	};
	class Aux115_CIS_B1_antenna_backpack: JLTS_B1_antenna
	{
		author="Possum";
		scope=2;
		scopeArsenal=2;
		displayName="(115 OpFor) B1 Backpack NCO";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_antenna_co.paa"
		};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=10;
			};
		};
	};
	class O_soldier_base_F;
	class O_Soldier_02_F;
	class O_Soldier_sniper_base_F;
	class O_Soldier_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Soldier_LAT_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Soldier_AT_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_soldier_AR_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Crew_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Helipilot_F: O_Soldier_02_F
	{
		class HitPoints;
	};
	class O_Officer_f: O_soldier_base_F
	{
		class HitPoints;
	};
	class O_Sniper_f: O_Soldier_sniper_base_F
	{
		class HitPoints;
	};
	class O_soldier_UAV_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_E5: O_Soldier_F
	{
		class HitPoints;
	};
	class JLTS_Droid_B1_Marine;
	class JLTS_Droid_B1_Security;
	class JLTS_Droid_B1_Commander;
	class JLTS_Droid_B1_Pilot;
	class JLTS_Droid_B1_Crew;
	class JLTS_Droid_B1_Sniper;
	class JLTS_Droid_B1_Prototype;
	class JLTS_Droid_B1_SBB3;
	class Aux115_CIS_Base_B1_Droid: JLTS_Droid_B1_E5
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		displayName="B1 Droid";
		backpack="115_CIS_B1_backpack";
		uniformClass="115_CIS_Base_B1_Droid_U";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"Aux115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"115_CIS_E5",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=2;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=2;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=2;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class Aux115_CIS_B1_Droid_AA: Aux115_CIS_Base_B1_Droid
	{
		author="Possum";
		scope=2;
		displayName="B1 Anti-Air Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Marine.jpg";
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="115_CIS_B1_Droid_AA_U";
		backpack="115_CIS_B1_backpack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5",
			"115_CIS_E60R_AA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"115_CIS_E60R_AA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_mag_E60R_AA",
			"115_CIS_mag_E60R_AA",
			"115_CIS_mag_E60R_AA"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_mag_E60R_AA",
			"115_CIS_mag_E60R_AA",
			"115_CIS_mag_E60R_AA"
		};
	};
	class Aux115_CIS_B1_Droid_Heavy_AA: Aux115_CIS_Base_B1_Droid
	{
		author="Possum";
		scope=2;
		displayName="B1 Heavy AA Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Marine.jpg";
		faction="AR121_CIS";
		editorSubcategory="AR121_CIS_inf";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="AR121_CIS_B1_Droid_AA_U";
		backpack="AR121_CIS_B1_backpack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"AR121_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"AR121_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"AR121_CIS_E5",
			"AR121_CIS_E60R_AA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"115_CIS_E60R_AA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_mag_E60R_Heavy_AA",
			"115_CIS_mag_E60R_Heavy_AA",
			"115_CIS_mag_E60R_Heavy_AA"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_mag_E60R_Heavy_AA",
			"115_CIS_mag_E60R_Heavy_AA",
			"115_CIS_mag_E60R_Heavy_AA"
		};
	};
	class Aux115_CIS_B1_Droid_AT: Aux115_CIS_Base_B1_Droid
	{
		author="Possum";
		scope=2;
		displayName="B1 AT Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Marine.jpg";
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		uniformClass="115_CIS_B1_Droid_AT_U";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		backpack="115_CIS_B1_backpack";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5",
			"115_RPS6",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"115_RPS6",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_RPS6_AT_mag",
			"115_RPS6_AT_mag",
			"115_RPS6_AT_mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_mag_E60R_AT",
			"115_CIS_mag_E60R_AT",
			"115_CIS_mag_E60R_AT"
		};
	};
	class Aux115_CIS_B1_Droid_Sniper: Aux115_CIS_Base_B1_Droid
	{
		author="Possum";
		scope=2;
		displayName="B1 Sniper Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Sniper.jpg";
		icon="JLTS_iconManSniper";
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="115_CIS_B1_Droid_Sniper_U";
		backpack="115_CIS_B1_backpack";
		model="\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5S_Sniper",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5S_Sniper",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
	};
	class Aux115_CIS_B1_Droid_Shotgun: Aux115_CIS_Base_B1_Droid
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		displayName="B1 Shotgun Droid";
		backpack="115_CIS_B1_backpack";
		uniformClass="115_CIS_B1_Droid_Shotgun_U";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_SBB3.jpg";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_SBB3",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_SBB3",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
	};
	class Aux115_CIS_B1_Droid_Heavy: Aux115_CIS_Base_B1_Droid
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		displayName="B1 Heavy Droid";
		uniformClass="115_CIS_B1_Droid_Heavy_U";
		backpack="115_CIS_B1_backpack";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5C_Auto",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5C_Auto",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag"
		};
	};
	class Aux115_CIS_B1_Droid_Grenadier: Aux115_CIS_Base_B1_Droid
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_E5.jpg";
		displayName="B1 Grenadier Droid";
		uniformClass="115_CIS_B1_Droid_Grenadier_U";
		backpack="115_CIS_B1_backpack";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_EPL2_Weapon",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_EPL2_Weapon",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell"
		};
	};
	class Aux115_CIS_B1_Droid_Commander: Aux115_CIS_Base_B1_Droid
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		displayName="B1 Commander Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Commander.jpg";
		uniformClass="115_CIS_B1_Droid_Commander_U";
		backpack="115_CIS_B1_antenna_backpack";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_commander_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"115_CIS_E5",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_Mag_CIS_Grenade",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_Mag_CIS_Grenade",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
	};
	class Aux115_CIS_B1_Droid_Crew: JLTS_Droid_B1_Crew
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		displayName="B1 Crew Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Crew.jpg";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		uniformClass="115_CIS_B1_Droid_Crew_U";
		backpack="115_CIS_B1_backpack";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_crew_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag"
		};
		items[]={};
		respawnItems[]={};
	};
	class Aux115_CIS_B1_Droid_Security: Aux115_CIS_Base_B1_Droid
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		editorSubcategory="115_CIS_inf";
		displayName="B1 Security Droid";
		editorPreview="\MRC\JLTS\characters\DroidArmor\data\ui\editorPreviews\JLTS_Droid_B1_Security.jpg";
		backpack="115_CIS_B1_backpack";
		uniformClass="115_CIS_B1_Droid_Security_U";
		identityTypes[]=
		{
			"lsd_voice_b1Droid"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_security_co.paa"
		};
		LinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"115_CIS_E5",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
	};
	class 3AS_CIS_TS_Base;
	class Aux115_CIS_TSeries: 3AS_CIS_TS_Base
	{
		scope=2;
		armor=4;
		displayName="T-Series Droid";
		faction="115_CIS";
		editorSubcategory="115_CIS_HVT";
		uniformClass="3AS_U_CIS_TS";
		weapons[]=
		{
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_RG4D_Pistol",
			"Throw",
			"Put"
		};
		Items[]=
		{
			""
		};
		RespawnItems[]=
		{
			""
		};
		magazines[]=
		{
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag",
			"115_CIS_RG4D_Pistol_mag"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"ItemRadio"
		};
	};
	class 3AS_CIS_B2_Base;
	class 3AS_CIS_B2_F: 3AS_CIS_B2_Base
	{
		class HitPoints;
	};
	class Aux115_CIS_B2_Droid: 3AS_CIS_B2_F
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		displayName="B2 Standard Droid";
		editorSubcategory="115_CIS_B2";
		uniformClass="3AS_U_CIS_B2";
		model="\3AS\3AS_Characters\Droids\B2\3AS_AB2.p3d";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"115_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"115_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		weapons[]=
		{
			"115_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=30;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=1.5;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=30;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=1.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=30;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=1.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor=30;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitAbdomen: HitPelvis
			{
				armor=30;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=30;
				material=-1;
				name="spine2";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=30;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor=50;
				material=-1;
				name="arms";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitHands: HitArms
			{
				armor=50;
				material=-1;
				name="hands";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=50;
				material=-1;
				name="legs";
				passThrough=0.1;
				radius=0.12;
				explosionShielding=2;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitLeftArm
			{
				armor=50;
				material=-1;
				name="hand_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				armor=50;
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=50;
				material=-1;
				name="leg_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=2;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				armor=40;
				name="leg_r";
			};
		};
		armor=150;
		armorStructural=4;
		explosionShielding=4;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class lsd_cis_b2Droid_base;
	class WBK_B2_Mod_Standart: lsd_cis_b2Droid_base
	{
		class HitPoints;
	};
	class Aux115_CIS_B2_Droid_Super: WBK_B2_Mod_Standart
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		displayName="B2 Super Droid (GL)";
		editorSubcategory="115_CIS_B2";
		uniformClass="lsd_cis_b2Droid_uniform";
		model="\lsd_armor_redfor\uniform\cis\b2\lsd_cis_b2_uniform";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"115_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"115_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		weapons[]=
		{
			"115_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_B2_R_Mag",
			"115_CIS_B2_R_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_B2_R_Mag",
			"115_CIS_B2_R_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag"
		};
		items[]={};
		respawnItems[]={};
		hiddenSelections[]=
		{
			"camo_arms",
			"legs",
			"torso"
		};
		hiddenSelectionsTextures[]=
		{
			"lsd_armor_redfor\uniform\cis\b2\data\arms_co.paa",
			"lsd_armor_redfor\uniform\cis\b2\data\legs_co.paa",
			"lsd_armor_redfor\uniform\cis\b2\data\torso_co.paa"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=150;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=150;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=120;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=120;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=150;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=150;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.30000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=150;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.5;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitSensor: HitChest
			{
				armor=150;
				radius=0.1;
				name="sensor_hit";
			};
			class HitBody: HitChest
			{
				armor=240;
				material=-1;
				name="body";
				passThrough=1;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=150;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=300;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=300;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=3000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=150;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
				armor=150;
			};
			class HitLeftLeg
			{
				armor=150;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
			armor=400;
			armorStructural=6;
			explosionShielding=0.40000001;
			minTotalDamageThreshold=0.001;
			impactDamageMultiplier=0.5;
			impactEffectsNoBlood="ImpactMetal";
			impactEffectsBlood="ImpactMetal";
		};
	};
	class Aux115_CIS_B2_Droid_Super_Blaster: WBK_B2_Mod_Standart
	{
		author="Possum";
		scope=2;
		faction="115_CIS";
		displayName="B2 Super Droid (Standard)";
		editorSubcategory="115_CIS_B2";
		uniformClass="lsd_cis_b2Droid_uniform";
		model="\lsd_armor_redfor\uniform\cis\b2\lsd_cis_b2_uniform";
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"115_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"115_NVG_chip",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		weapons[]=
		{
			"115_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_B2_Wrist_Blaster",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag",
			"115_CIS_B2_Blaster_Mag"
		};
		items[]={};
		respawnItems[]={};
		hiddenSelections[]=
		{
			"camo_arms",
			"legs",
			"torso"
		};
		hiddenSelectionsTextures[]=
		{
			"lsd_armor_redfor\uniform\cis\b2\data\arms_co.paa",
			"lsd_armor_redfor\uniform\cis\b2\data\legs_co.paa",
			"lsd_armor_redfor\uniform\cis\b2\data\torso_co.paa"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=150;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=150;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=120;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=120;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=150;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=150;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.30000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=150;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.5;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitSensor: HitChest
			{
				armor=150;
				radius=0.1;
				name="sensor_hit";
			};
			class HitBody: HitChest
			{
				armor=240;
				material=-1;
				name="body";
				passThrough=1;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=150;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=300;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=300;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=3000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=150;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
				armor=150;
			};
			class HitLeftLeg
			{
				armor=150;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
			armor=400;
			armorStructural=6;
			explosionShielding=0.40000001;
			minTotalDamageThreshold=0.001;
			impactDamageMultiplier=0.5;
			impactEffectsNoBlood="ImpactMetal";
			impactEffectsBlood="ImpactMetal";
		};
	};
	class ls_redforDroid_base;
	class lsd_cis_bxDroid_base: ls_redforDroid_base
	{
		class HitPoints;
	};
	class lsd_cis_bxdroid_specops: lsd_cis_bxDroid_base
	{
		class HitPoints;
	};
	class lsd_cis_bxCaptain_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxAssassin_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class lsd_cis_bxSecurity_specops: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class WBK_BX_Assasin_1: lsd_cis_bxdroid_specops
	{
		class HitPoints;
	};
	class Aux115_CIS_BX_Base: lsd_cis_bxdroid_specops
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Commando";
		editorSubcategory="115_CIS_BX";
		vehicleClass="115_CIS_BX";
		side=0;
		faction="115_CIS";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		backpack="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag"
		};
		items[]={};
		respawnItems[]={};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=30;
				material=-1;
				name="face_hub";
				passThrough=0.90000004;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=30;
				material=-1;
				name="neck";
				passThrough=0.90000004;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=30;
				material=-1;
				name="head";
				passThrough=0.90000004;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=75;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=75;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=75;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=75;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=86;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=75;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=75;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=75;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=2000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=75;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=75;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=8;
		armorStructural=8;
		explosionShielding=0.60000002;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		impactEffectsBlood="ImpactMetal";
		impactEffectsNoBlood="ImpactPlastic";
		canBleed=0;
	};
	class Aux115_CIS_BX_Lead: Aux115_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Commander";
		editorSubcategory="115_CIS_BX";
		vehicleClass="115_CIS_BX";
		side=0;
		faction="115_CIS";
		uniformClass="lsd_cis_bxCaptainDroid_uniform";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		LinkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_Mag_CIS_Grenade"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_Mag_CIS_Grenade"
		};
		items[]={};
		respawnItems[]={};
	};
	class Aux115_CIS_BX_Sniper: Aux115_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Sniper";
		editorSubcategory="115_CIS_BX";
		vehicleClass="115_CIS_BX";
		side=0;
		faction="115_CIS";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5S_Sniper",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AR121_CIS_E5S_Sniper",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag",
			"115_CIS_E5S_Sniper_Mag"
		};
		items[]={};
		respawnItems[]={};
	};
	class Aux115_CIS_BX_Heavy: Aux115_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid Heavy";
		editorSubcategory="115_CIS_BX";
		vehicleClass="115_CIS_BX";
		side=0;
		faction="115_CIS";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		uniformClass="lsd_cis_bxDroid_uniform";
		LinkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5C_Auto",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5C_Auto",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag",
			"115_CIS_E5C_Auto_mag"
		};
	};
	class Aux115_CIS_BX_AT: Aux115_CIS_BX_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="BX Droid AT";
		editorSubcategory="115_CIS_BX";
		vehicleClass="115_CIS_BX";
		side=0;
		faction="115_CIS";
		identityTypes[]=
		{
			"NoGlasses",
			"Head_NATO"
		};
		facewear="";
		uniformClass="lsd_cis_bxDroid_uniform";
		linkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"115_CIS_BX_Vest",
			"115_NVG_chip",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"115_CIS_E5",
			"115_CIS_E60R_AT",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"115_CIS_E5",
			"115_CIS_E60R_AT",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_mag_E60R_AT",
			"115_CIS_mag_E60R_AT",
			"115_CIS_mag_E60R_AT"
		};
		respawnMagazines[]=
		{
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_E5_Mag",
			"115_CIS_mag_E60R_AT",
			"115_CIS_mag_E60R_AT",
			"115_CIS_mag_E60R_AT"
		};
	};
};
class CfgGroups
{
	class East
	{
		class Aux115_CIS_faction
		{
			name="(115 OpFor) CIS Faction";
			class B1Infantry
			{
				name="B1 Groups";
				class Aux115_CIS_Command
				{
					name="B1 Command Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Commander";
						rank="MAJOR";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Security";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Security";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
				};
				class Aux115_CIS_Base_Duo
				{
					name="B1 Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class Aux115_CIS_Fireteam
				{
					name="B1 Fire Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class Aux115_CIS_Firesquad
				{
					name="B1 Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
				};
				class Aux115_CIS_AT
				{
					name="B1 AT Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_B1_Droid_AT";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class Aux115_CIS_AA
				{
					name="B1 AA Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_B1_Droid_AA";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_B1_Droid_AA";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class Aux115_Heavy_CIS_AA
				{
					name="B1 Heavy AA Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Heavy_AA";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Heavy_AA";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Heavy_AA";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Heavy_AA";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class Aux115_CIS_Assault
				{
					name="B1 Heavy Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Commander";
						rank="MAJOR";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Sniper";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="115_CIS_B1_Droid_Heavy";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="115_CIS_Base_B1_Droid";
						rank="PRIVATE";
						position[]={3,-3,0};
					};
					class Unit9
					{
						side=0;
						vehicle="115_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={-3,3,0};
					};
				};
			};
			class B2Infantry
			{
				name="B2 Groups";
				class Aux115_CIS_B2_Assault
				{
					name="B2 Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_B2_Droid_Super_Blaster";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class Aux115_CIS_B2_Duo
				{
					name="B2 Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_B2_Droid";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_B2_Droid";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
				class Aux115_CIS_B2_Super_Duo
				{
					name="B2 Super Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_B2_Droid_Super_Blaster";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_B2_Droid_Super_Blaster";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
				};
			};
			class BXInfantry
			{
				name="BX Groups";
				class Aux115_CIS_BX_Assault
				{
					name="BX CQB Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_BX_Base";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_BX_Base";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class Aux115_CIS_BX_Team
				{
					name="BX Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_BX_Heavy";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_BX_AT";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
				};
				class Aux115_CIS_BX_Sniper_Duo
				{
					name="BX Sniper Duo";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_BX_Sniper";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_BX_Sniper";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
				};
				class Aux115_CIS_BX_Squad
				{
					name="BX Squad";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_BX_Lead";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_BX_Base";
						rank="PRIVATE";
						position[]={-3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_BX_Heavy";
						rank="PRIVATE";
						position[]={-6,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="115_CIS_BX_AT";
						rank="CORPORAL";
						position[]={0,-6,0};
					};
					class Unit5
					{
						side=0;
						vehicle="115_CIS_BX_Base";
						rank="PRIVATE";
						position[]={0,-9,0};
					};
					class Unit6
					{
						side=0;
						vehicle="115_CIS_BX_Sniper";
						rank="PRIVATE";
						position[]={-9,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="115_CIS_BX_Heavy";
						rank="PRIVATE";
						position[]={-12,0,0};
					};
				};
			};
			class VultureTeams
			{
				name="Vulture Flights";
				class Aux115_CIS_Vulture_Form
				{
					name="Vulture Formation";
					side=0;
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={0,-20,-20};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-20,0,-20};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={0,-40,-40};
					};
					class Unit4
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-40,0,-40};
					};
				};
				class Aux115_CIS_Vulture_CAS
				{
					name="Vulture Formation CAS";
					side=0;
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Vulture_CAS";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_Vulture_CAS";
						rank="PRIVATE";
						position[]={0,-20,-20};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_Vulture_CAS";
						rank="PRIVATE";
						position[]={-20,0,-20};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_Vulture_CAS";
						rank="PRIVATE";
						position[]={0,-40,-40};
					};
					class Unit4
					{
						side=0;
						vehicle="115_CIS_Vulture_CAS";
						rank="PRIVATE";
						position[]={-40,0,-40};
					};
				};
				class Aux115_CIS_Vulture_Hell
				{
					name="Large Vulture Formation";
					side=0;
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-20,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={20,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={0,-30,0};
					};
					class Unit4
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={-20,-30,0};
					};
					class Unit5
					{
						side=0;
						vehicle="115_CIS_Vulture_Elite";
						rank="PRIVATE";
						position[]={20,-30,0};
					};
					class Unit6
					{
						side=0;
						vehicle="115_CIS_Vulture_Elite";
						rank="PRIVATE";
						position[]={-20,30,0};
					};
					class Unit7
					{
						side=0;
						vehicle="115_CIS_Vulture_Elite";
						rank="PRIVATE";
						position[]={20,30,0};
					};
					class Unit8
					{
						side=0;
						vehicle="115_CIS_Vulture_Standard";
						rank="PRIVATE";
						position[]={0,30,0};
					};
				};
			};
			class ArtyTeams
			{
				name="Artillery Groups";
				class Aux115_CIS_HAGM_Section
				{
					name="HAG-M Line";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_HAGM";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_HAGM";
						rank="PRIVATE";
						position[]={-20,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_HAGM";
						rank="PRIVATE";
						position[]={-40,0,0};
					};
				};
				class Aux115_CIS_Mortars
				{
					name="Mortar Team";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Mortar";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_Mortar";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_Mortar";
						rank="PRIVATE";
						position[]={3,-3,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_Mortar";
						rank="PRIVATE";
						position[]={-3,-3,0};
					};
				};
			};
			class ArmouredTeams
			{
				name="Armoured Groups";
				class Aux115_CIS_AAT_Section
				{
					name="AAT Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_AAT_Blue";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_AAT_Tan";
						rank="PRIVATE";
						position[]={0,-20,-20};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_AAT_Blue";
						rank="CORPORAL";
						position[]={-20,-20,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_AAT_Tan";
						rank="PRIVATE";
						position[]={20,-20,-20};
					};
				};
				class Aux115_CIS_MIXED_PLATOON
				{
					name="AAT Mixed Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_AAT_Blue";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_AAT_Blue";
						rank="PRIVATE";
						position[]={0,-20,-20};
					};
					class Unit2
					{
						side=0;
						vehicle="115_CIS_GAT";
						rank="CORPORAL";
						position[]={-20,-20,0};
					};
					class Unit3
					{
						side=0;
						vehicle="115_CIS_GAT_Light";
						rank="PRIVATE";
						position[]={20,-20,-20};
					};
				};
				class Aux115_CIS_Snail_Section
				{
					name="Snail Tank Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					faction="115_CIS";
					class Unit0
					{
						side=0;
						vehicle="115_CIS_Snail";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="115_CIS_Snail";
						rank="PRIVATE";
						position[]={0,-20,-10};
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449302";
};
