class CfgPatches
{
	class Aux115Core
	{
		author="Possum";
		requiredAddons[]=
		{
			"JLTS_Core",
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneLegions",
			"ls_armor_bluefor"
		};
		weapons[]=
		{
			"115_P2Helmet_Base",
			"115_P2Helmet_CT",
			"115_BarcHelmet_CT",
			"115_P2Helmet_NCO",
			"115_BarcHelmet_NCO",
			"115_P2Helmet_Officer",
			"115_P2Helmet_Engineer",
			"115_Cadet_Pilot",
			"115_trooper_Helmet",
			"115_NCO_Helmet",
			"115_P2Helmet_RTO",
			"115_P2Helmet_Engineer",
			"115_P2Helmet_ATRT",
			"115_P2Uniform_Base",
			"115_P2Uniform_CT",
			"115_P2Uniform_NCO",
			"115_P2Uniform_Medic",
			"115_P1_pilot"
		};
		units[]=
		{
			"115_P2_Backpack",
			"115_MEDIC_Backpack",
			"115_RTO_Backpack",
			"115_RTO_Pack",
			"115_LR_Attachment",
			"115_P2_BP_Invisible",
			"115_LR_Invis",
			"JLTS_Clone_P2_DC15A",
			"115_P2Unit_CR",
			"115_P2Unit_CT",
			"115_P2Unit_NCO",
			"115_P2Unit_Medic"
		};
	};
};
class CfgFactionClasses
{
	class Aux115_Faction
	{
		displayName="115th Armor Regiment";
	};
};
class CfgEditorCategories
{
	class Aux115_statics_Props
	{
		displayName="115th Props and Supplies";
	};
};
class CfgEditorSubcategories
{
	class Aux115_inf
	{
		displayName="Infantry";
	};
	class Aux115_customs
	{
		displayName="Customs";
	};
	class Aux115_aircraft
	{
		displayName="Aircraft";
	};
	class Aux115_Mechanized
	{
		displayName="Armour";
	};
	class Aux115_Light
	{
		displayName="Light Vehicles";
	};
	class Aux115_Static
	{
		displayName="Static";
	};
	class Aux115_Resupply
	{
		displayName="Resupply";
		priority=1;
	};
	class Aux115_Props
	{
		displayName="Props";
		priority=1;
	};
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class Uniform_Base;
	class H_HelmetO_ViperSP_hex_F;
	class V_PlateCarrier1_rgr;
	class NVGoggles;
	class UniformItem;
	class HeadgearItem;
	class VestItem;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetBARC;
	class JLTS_CloneArmor;
	class 3as_P2_Pilot_helmet;
	class SEA_Helmet_Engineer_Base;
	class SEA_Helmet_SpecOps_LR_Base;
	class ls_gar_atrtDriver_helmet;
	class LSEA_Helmet_Pilot_P1_Base;
	class Aux115_P1_pilot: LSEA_Helmet_Pilot_P1_Base
	{
		displayName="[115] Tanker Helmet";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		author="Greg";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\ls_p1_pilot_helmet.paa",
			"\115-Core\data\Helmets\ls_p1_pilot_helmet.paa"
		};
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE\LS_Helmet_Pilot_P1.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=16;
					passThrough=0.5;
				};
			};
		};
	};
	class Aux115_P2Helmet_Engineer: SEA_Helmet_Engineer_Base
	{
		displayName="[115] Engineer Helmet";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		author="Possum";
		scope=2;
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\Engineer_Helmet_CO.paa",
			"\115-Core\data\Helmets\Engineer_Helmet_CO.paa"
		};
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE\SEA_Helmet_Engineer.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=16;
					passThrough=0.5;
				};
			};
		};
	};
	class Aux115_P2Helmet_RTO: SEA_Helmet_SpecOps_LR_Base
	{
		displayName="[115] RTO Helmet";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		author="Possum";
		scope=2;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\SpecOpsHelmet_CO.paa",
			"\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\LR_Antenna_co.paa",
			"\JLTS_AE\Data\BaseTextures\SpecOps\SpecOpsHelmet_co.paa"
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE\SEA_Helmet_SpecOps_LR.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=16;
					passThrough=0.5;
				};
			};
		};
	};
	class Aux115_P2Helmet_Base: JLTS_CloneHelmetP2
	{
		scope=2;
		author="Possum";
		displayName="[115] Cadet P2 Helmet";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\Cadet_P2_Helmet.paa"
		};
		subItems[]={};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=16;
					passThrough=0.5;
				};
			};
		};
	};
	class Aux115_BarcHelmet_Base: JLTS_CloneHelmetBARC
	{
		scope=2;
		author="Possum";
		displayName="[115] Cadet BARC Helmet";
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\CloneHelmetBARC_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\Cadet_Barc_Helmet.paa"
		};
		subItems[]={};
		model="\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=16;
					passThrough=0.5;
				};
			};
		};
	};
	class Aux115_Cadet_Pilot: 3as_P2_Pilot_helmet
	{
		author="Possum";
		scope=0;
		weaponPoolAvailable=1;
		displayName="[115] Cadet Flight Helmet";
		picture="\3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\cadet_pilot_helmet.paa",
			"\115-Core\data\Helmets\cadet_pilot_helmet.paa",
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			"\115-Core\data\Helmets\cadet_pilot_helmet.paa",
			""
		};
		ace_hearing_lowerVolume=0.60000002;
		ace_hearing_protection=0.85000002;
		subItems[]=
		{
			"Integrated_NVG_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo1",
				"Camo2",
				"Camo3",
				"Camo4",
				"Camo5"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=16;
					passThrough=0.5;
				};
			};
		};
	};
	class Aux115_Trooper_Helmet: Aux115_Cadet_Pilot
	{
		author="Possum";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[115] Enlisted Flight Helmet";
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\trooper_pilot_helmet.paa",
			"\115-Core\data\Helmets\trooper_pilot_helmet.paa",
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			"\115-Core\data\Helmets\trooper_pilot_helmet.paa",
			""
		};
	};
	class Aux115_NCO_Helmet: Aux115_Cadet_Pilot
	{
		author="Possum";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[115] NCO Flight Helmet";
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\NCO_pilot_helmet.paa",
			"\115-Core\data\Helmets\NCO_pilot_helmet.paa",
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			"\115-Core\data\Helmets\NCO_pilot_helmet.paa",
			""
		};
	};
	class Aux115_P2Helmet_CT: Aux115_P2Helmet_Base
	{
		displayName="[115] Enlisted P2 Helmet";
		author="Possum";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\Trooper_P2_Helmet.paa"
		};
	};
	class Aux115_BarcHelmet_CT: Aux115_BarcHelmet_Base
	{
		displayName="[115] Enlisted BARC Helmet";
		author="Possum";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\Trooper_Barc_Helmet.paa"
		};
	};
	class Aux115_P2Helmet_NCO: Aux115_P2Helmet_Base
	{
		displayName="[115] NCO P2 Helmet";
		author="Possum";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\NCO_P2_Helmet.paa"
		};
	};
	class Aux115_BarcHelmet_NCO: Aux115_BarcHelmet_Base
	{
		displayName="[115] NCO BARC Helmet";
		author="Possum";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\NCO_Barc_Helmet.paa"
		};
	};
	class Aux115_P2Helmet_Greg: Aux115_P2Helmet_Base
	{
		displayName="[115 Customs] Greg's P2 Helmet";
		author="Brokie";
		scope=0;
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Helmets\P2_HelmetGreg.paa"
		};
	};
	class Aux115_P2Uniform_Base: JLTS_CloneArmor
	{
		author="Brokie";
		scope=2;
		displayName="[115] Cadet Armour";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="115_P2Unit_Base";
			uniformType="Neopren";
			containerClass="Supply150";
			mass=40;
		};
	};
	class Aux115_P2Uniform_CT: Aux115_P2Uniform_Base
	{
		displayName="[115] Enlisted Armour";
		author="Brokie";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="115_P2Unit_CT";
			uniformType="Neopren";
			containerClass="Supply150";
			mass=40;
		};
	};
	class Aux115_P2Unit_Medic: Aux115_P2Uniform_Base
	{
		displayName="[115] Enlisted Medic Armour";
		author="Possum";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="115_P2Unit_Medic";
			uniformType="Neopren";
			containerClass="Supply150";
			mass=40;
		};
	};
	class Aux115_P2Uniform_NCO: Aux115_P2Uniform_Base
	{
		displayName="[115] NCO Armour";
		author="Possum";
		scope=2;
		class ItemInfo: UniformItem
		{
			uniformClass="115_P2Unit_NCO";
			uniformType="Neopren";
			containerClass="Supply150";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_LR_attachment;
	class JLTS_Clone_belt_bag;
	class SEA_Backpack_RTO_Pack;
	class Aux115_P2_beltbag: JLTS_Clone_belt_bag
	{
		author="Possum";
		scope=2;
		maximumLoad=280;
		displayName="[115] Trooper Beltbag";
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Backpacks\beltbag.paa"
		};
	};
	class Aux115_P2_Backpack: JLTS_Clone_backpack
	{
		author="Possum";
		scope=2;
		maximumLoad=280;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		displayName="[115] Trooper Backpack";
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Backpacks\Backpack.paa"
		};
	};
	class Aux115_P2_BP_Invisible: Aux115_P2_Backpack
	{
		author="Possum";
		scope=2;
		maximumLoad=280;
		displayName="[115] Invisible Backpack";
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class Aux115_MEDIC_Backpack: JLTS_Clone_backpack
	{
		author="Possum";
		scope=2;
		maximumLoad=320;
		displayName="[115] Medic Backpack";
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=100000;
		tf_subtype="digital_lr";
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Backpacks\Backpack_Medic.paa"
		};
		mass=10;
	};
	class Aux115_RTO_Backpack: JLTS_Clone_backpack_RTO
	{
		author="Possum";
		scope=2;
		maximumLoad=280;
		displayName="[115] RTO Backpack";
		tf_range=100000;
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Backpacks\BackpackRTO.paa"
		};
	};
	class Aux115_LR_Invis: JLTS_Clone_LR_attachment
	{
		author="Possum";
		scope=2;
		maximumLoad=280;
		displayName="[115] Invisible LR Backpack";
		tf_range=100000;
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class Aux115_RTO_Pack: SEA_Backpack_RTO_Pack
	{
		author="Greg";
		scope=2;
		maximumLoad=280;
		displayName="[115] RTO Pack";
		tf_range=100000;
	};
	class Aux115_LR_Attachment: JLTS_Clone_LR_attachment
	{
		author="Possum";
		scope=2;
		maximumLoad=280;
		displayName="[115] LR Attachment";
		tf_range=100000;
	};
	class JLTS_Clone_P2_DC15A;
	class Aux115_P2Unit_Base: JLTS_Clone_P2_DC15A
	{
		author="Possum";
		scope=2;
		displayName="[115] Clone Cadet";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		genericNames="JLTS_Clones";
		faction="115_Faction";
		editorSubcategory="115_inf";
		backpack="115_P2_BP_Invisible";
		identityTypes[]=
		{
			"JLTS_voice_clone",
			"JLTS_head_clone",
			"JLTS_Clone_P2"
		};
		uniformClass="115_P2Uniform_Base";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Uniforms\Cadet_Upper.paa",
			"\115-Core\data\Uniforms\Cadet_Lower.paa"
		};
		linkedItems[]=
		{
			"115_P2Helmet_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"115_P2Helmet_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		nakedUniform="JLTS_CloneNaked_uniform";
		magazines[]=
		{
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		items[]={};
		respawnItems[]={};
	};
	class Aux115_P2Unit_CT: Aux115_P2Unit_Base
	{
		author="Possum";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[115] Clone Trooper";
		faction="115_Faction";
		backpack="115_P2_BP_Invisible";
		editorSubcategory="115_inf";
		uniformClass="115_P2Uniform_CT";
		linkedItems[]=
		{
			"115_P2Helmet_CT",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Weapons[]=
		{
			"115_DC15A",
			"Throw",
			"Put"
		};
		respawnLinkedItems[]=
		{
			"115_P2Helmet_CT",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		Magazines[]=
		{
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A"
		};
		respawnMagazines[]=
		{
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A",
			"115_Magazine_DC15A"
		};
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Uniforms\Trooper_Upper.paa",
			"\115-Core\data\Uniforms\Trooper_Lower.paa"
		};
	};
	class Aux115_P2Unit_Medic: Aux115_P2Unit_Base
	{
		author="Possum";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[115] Clone Medic Trooper";
		faction="115_Faction";
		backpack="115_MEDIC_Backpack";
		editorSubcategory="115_inf";
		uniformClass="115_P2Unit_Medic";
		linkedItems[]=
		{
			"115_P2Helmet_CT",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"115_P2Helmet_CT",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Uniforms\Trooper_Medic_Upper.paa",
			"\115-Core\data\Uniforms\Trooper_Lower.paa"
		};
	};
	class Aux115_P2Unit_NCO: Aux115_P2Unit_Base
	{
		author="Possum";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[115] Clone NCO";
		faction="115_Faction";
		backpack="115_LR_Attachment";
		editorSubcategory="115_inf";
		uniformClass="115_P2Uniform_NCO";
		linkedItems[]=
		{
			"115_P2Helmet_NCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"115_P2Helmet_NCO",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Uniforms\NCO_Upper.paa",
			"\115-Core\data\Uniforms\NCO_Lower.paa"
		};
	};
	//   Beggining of custom
	class Aux115_P2Unit_Greg: Aux115_P2Unit_Base
	{
		author="Greg";
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		displayName="[115 Customs] Greg";
		editorSubcategory="115_customs";
		uniformClass="115_P2Uniform_Greg";
		hiddenSelectionsTextures[]=
		{
			"\115-Core\data\Uniforms\GregUpper.paa",
			"\115-Core\data\Uniforms\GregLower.paa"
		};
	};
};
class ACEX_Fortify_Presets
{
	class TAG_MyPreset
	{
		displayName="115th";
		objects[]=
		{
			
			{
				"3AS_Cover1",
				10
			},
			
			{
				"3AS_Shield_3_Prop",
				15
			},
			
			{
				"3AS_H_Barrier_Small_5",
				20
			},
			
			{
				"3AS_Barricade_Prop",
				20
			},
			
			{
				"3AS_Shield_C_Prop",
				30
			},
			
			{
				"3AS_Metal_Trench_Short_Single",
				30
			},
			
			{
				"3AS_Short_Wall_Bunker",
				40
			},
			
			{
				"3AS_HeavyRepeater_Unarmoured",
				80
			}
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449290";
};
