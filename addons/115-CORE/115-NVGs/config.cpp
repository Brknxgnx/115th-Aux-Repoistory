class CfgPatches
{
	class Aux115_NVG
	{
		author="Possum";
		requiredAddons[]={};
		requiredVersion=2;
		units[]={};
		weapons[]=
		{
			"Aux115_NVG_chip",
			"Aux115_Commander_NVG",
			"Aux115_Adv_NVG_chip",
			"Aux115_Visor_NVG1",
			"Aux115_Visor_NVG_Closed1",
			"Aux115_Visor_NVG2",
			"Aux115_Visor_NVG_Closed2",
			"Aux115_Range_NVG_White",
			"Aux115_Range_NVG_Green",
			"Aux115_Visor_NVG_Closed3",
			"121AR_Range_NVG_Black",
			"Aux115_Visor_NVG3"
		};
	};
};
class CfgWeapons
{
	class JLTS_NVG_droid_chip_1;
	class Aux115_NVG_chip: JLTS_NVG_droid_chip_1
	{
		author="Possum";
		displayName="[115] Clone NVG Chip";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
	};
	class JLTS_CloneNVGCC;
	class Aux115_Commander_NVG: JLTS_CloneNVGCC
	{
		author="Possum";
		displayName="[115] Visor";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
	};
	class JLTS_CloneNVGMC;
	class Aux115_Marshal_Commander_NVG: JLTS_CloneNVGMC
	{
		author="Possum";
		displayName="[115] Officer Visor";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
	};
	class JLTS_CloneNVG;
	class Aux115_Visor_NVG1: JLTS_CloneNVG
	{
		author="Possum";
		displayName="[115] Striped Visor NVG (Open)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		hiddenSelectionsTextures[]=
		{
			"\AR121-CORE\data\NVG\Macro_NVG_Stripe.paa"
		};
	};
	class JLTS_CloneNVG_Spec;
	class Aux115_Visor_NVG_Closed1: JLTS_CloneNVG_Spec
	{
		author="Possum";
		displayName="[115] Striped Visor NVG (Closed)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		hiddenSelectionsTextures[]=
		{
			"\AR121-CORE\data\NVG\Macro_NVG_Stripe.paa"
		};
	};
	class Aux115_Visor_NVG2: JLTS_CloneNVG
	{
		author="Possum";
		displayName="[115] Green Visor NVG (Open)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		hiddenSelectionsTextures[]=
		{
			"\AR121-CORE\data\NVG\Macro_NVG_Green.paa"
		};
	};
	class Aux115_Visor_NVG_Closed2: JLTS_CloneNVG_Spec
	{
		author="Possum";
		displayName="[115] Green Visor NVG (Closed)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		hiddenSelectionsTextures[]=
		{
			"\AR121-CORE\data\NVG\Macro_NVG_Green.paa"
		};
	};
	class Aux115_Visor_NVG3: JLTS_CloneNVG
	{
		author="Possum";
		displayName="[115] Black Visor NVG (Open)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		hiddenSelectionsTextures[]=
		{
			"\AR121-CORE\data\NVG\Macro_NVG_Black.paa"
		};
	};
	class Aux115_Visor_NVG_Closed3: JLTS_CloneNVG_Spec
	{
		author="Possum";
		displayName="[115] Black Visor NVG (Closed)";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		hiddenSelectionsTextures[]=
		{
			"\AR121-CORE\data\NVG\Macro_NVG_black.paa"
		};
	};
	class JLTS_CloneNVGRange;
	class Aux115_Range_NVG_White: JLTS_CloneNVGRange
	{
		author="Possum";
		displayName="[115] White Rangefinder";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
	};
	class JLTS_CloneNVGRange_ARC_Blitz;
	class Aux115_Range_NVG_Green: JLTS_CloneNVGRange_ARC_Blitz
	{
		author="Possum";
		displayName="[115] Green Rangefinder";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		hiddenSelectionsTextures[]=
		{
			"\AR121-CORE\data\NVG\Rangefinder_NVG_Green.paa"
		};
	};
	class Aux115_Range_NVG_Black: JLTS_CloneNVGRange_ARC_Blitz
	{
		author="Possum";
		displayName="[115] Black Rangefinder";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		hiddenSelectionsTextures[]=
		{
			"\AR121-CORE\data\NVG\Rangefinder_NVG_black.paa"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449290";
};
