class CfgPatches
{
	class Aux115_Screens
	{
		author="Possum";
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CAWorld;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class RscText;
class RscPicture;
class RscTitle;
class RscButtonMenu;
class RscHTML;
class RscControlsGroupNoHScrollbars;
class RscListBox;
class RscPictureKeepAspect;
class RscButton;
class RscButtonImages;
class RscShortcutButton;
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	idc=1;
	enableDisplay=1;
	text="\AR121-Core\AR121-Screens\Images\AR121Propaganda.paa";
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class Spotlight
	{
	};
	class controls
	{
		class Spotlight1
		{
		};
		class Spotlight2
		{
		};
		class Spotlight3
		{
		};
		class BackgroundSpotlightRight
		{
		};
		class BackgroundSpotlightLeft
		{
		};
		class BackgroundSpotlight
		{
		};
		class B_Credits
		{
		};
		
	};
	class controlsBackground
	{
		class LoadingPicture_Aux115: RscPicture
		{
			idc=1;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\AR121-Core\AR121-Screens\Images\AR121Propaganda.paa";
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPicture_Aux115: RscPicture
		{
			idc=1000;
			colorText[]={1,1,1,0.41999999};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\AR121-Core\AR121-Screens\Images\AR121Propaganda.paa";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingBackground_Aux115_1: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_1.paa";
				};
			};
		};
		class LoadingBackground_Aux115_2: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_2.paa";
				};
			};
		};
		class LoadingBackground_Aux115_3: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_3.paa";
				};
			};
		};
		class LoadingBackground_Aux115_4: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_4.paa";
				};
			};
		};
		class LoadingBackground_Aux115_5: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_5.paa";
				};
			};
		};
		class LoadingBackground_Aux115_6: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_6.paa";
				};
			};
		};
		class LoadingBackground_Aux115_7: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_7.paa";
				};
			};
		};
		class LoadingBackground_Aux115_8: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_8.paa";
				};
			};
		};
		class LoadingBackground_Aux115_9: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_9.paa";
				};
			};
		};
		class LoadingBackground_Aux115_10: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_10.paa";
				};
			};
		};
		class LoadingBackground_Aux115_11: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_11.paa";
				};
			};
		};
		class LoadingBackground_Aux115_12: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_12.paa";
				};
			};
		};
		class LoadingBackground_Aux115_13: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_13.paa";
				};
			};
		};
		class LoadingBackground_Aux115_14: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_Aux115: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\AR121-Core\AR121-Screens\Images\Loading_14.paa";
				};
			};
		};
	};
};
class RscDisplayLoadCustom: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPicture_Aux115: RscPicture
		{
			idc=1000;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\AR121-Core\AR121-Screens\Images\AR121Propaganda.paa";
		};
	};
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPicture_Aux115: RscPicture
	{
		idc=1000;
		colorText[]={1,1,1,1};
		x="SafeZoneX";
		y="SafeZoneY";
		h="SafeZoneH";
		w="SafeZoneW";
		text="\AR121-Core\AR121-Screens\Images\AR121Propaganda.paa";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPicture_Aux115: RscPicture
		{
			idc=1000;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\AR121-Core\AR121-Screens\Images\AR121Propaganda.paa";
		};
	};
};
class RscDisplayConfigure
{
	enableDisplay=1;
};
class cfgMods
{
	author="Possum";
	timepacked="1732449290";
};
