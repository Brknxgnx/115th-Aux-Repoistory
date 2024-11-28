class CfgPatches
{
	class Aux115_Facewear
	{
		author="Possum";
		requiredAddons[]={};
		requiredVersion=2;
		units[]={};
		weapons[]={};
	};
};
class CfgGlasses
{

};
class CfgWeapons
{
	class JLTS_CloneBinocular;
	class Aux115_Binocular1: JLTS_CloneBinocular
	{
		displayName="[115] 115th Electrobinoculars (white)";
		author="Possum";
		scope=2;
		model="\MRC\JLTS\characters\CloneArmor\CloneBinocular.p3d";
		modelOptics="\MRC\JLTS\characters\CloneArmor\CloneBinocular_optics.p3d";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_binocular_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\AR121-Core\data\misc\binocularswhite.paa"
		};
	};
	class Aux115_Binocular2: JLTS_CloneBinocular
	{
		displayName="[115] 115th Electrobinoculars (green)";
		author="Possum";
		scope=2;
		model="\MRC\JLTS\characters\CloneArmor\CloneBinocular.p3d";
		modelOptics="\MRC\JLTS\characters\CloneArmor\CloneBinocular_optics.p3d";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_binocular_ui_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\AR121-Core\data\misc\binocularsgreen.paa"
		};
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449290";
};
