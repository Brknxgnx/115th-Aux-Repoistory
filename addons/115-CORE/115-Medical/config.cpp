class cfgPatches
{
	class Aux115_Medical
	{
		requiredAddons[]=
		{
			"ace_medical_treatment"
		};
		units[]=
		{
			"ACE_bodyBagObject_115"
		};
		weapons[]=
		{
			"115_Painkiller",
			"ACE_bodyBag_115"
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class Aux115_Painkiller: ACE_ItemCore
	{
		scope=2;
		displayName="[115] Painkiller Injector";
		picture="\AR121-Core\data\Misc\thepill.paa";
		model="\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort="Painkiller";
		descriptionUse="Painkiller Injector to reduce Pain";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_bodyBag;
	class ACE_bodyBag_Aux115: ACE_bodyBag
	{
		displayName="[115] Bodybag";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Core\data\Misc\Bodybag_01_white_CO.paa"
		};
		ACE_Medical_Treatment_BodyBagObject="ACE_bodyBagObject_115";
	};
};
class CfgVehicles
{
	class Land_Bodybag_01_base_F;
	class Aux115_Bodybag: Land_Bodybag_01_base_F
	{
		author="Queen";
		mapSize=2.8699999;
		_generalMacro="Land_Bodybag_01_base_F";
		displayName="[115] Bodybag";
		scope=2;
		scopeCurator=2;
		model="\A3\Props_F_Orange\Humanitarian\Camps\Bodybag_01_F.p3d";
		DLC="Orange";
		icon="iconObject_1x3";
		editorCategory="AR121_statics_props";
		editorSubCategory="AR121_Props";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AR121-Core\data\Misc\Bodybag_01_white_CO.paa"
		};
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.13600001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_Bodybag_01_black_F.jpg";
	};
	class ACE_bodyBagObject;
	class ACE_bodyBagObject_115: ACE_bodyBagObject
	{
		displayName="[AR121] Bodybag";
		hiddenSelectionsTextures[]=
		{
			"\AR121-Core\data\Misc\Bodybag_01_white_CO.paa"
		};
	};
};
class ACE_Medical_Treatment
{
	class Morphine;
	class Medication
	{
		class Aux115_Painkiller: Morphine
		{
		};
	};
};
class ACE_Medical_Treatment_Actions
{
	class BodyBag;
	class Morphine;
	class Aux115_Painkiller: Morphine
	{
		displayName="[115] Painkiller Injector";
		displayNameProgress="Injecting Estrogen";
		allowedSelections[]=
		{
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};
		items[]=
		{
			"Aux115_Painkiller"
		};
		treatmentTime=1;
	};
	class BodyBagAux115: BodyBag
	{
		displayName="Place In 115th Bodybag";
		items[]=
		{
			"ACE_bodyBag_115"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449290";
};
