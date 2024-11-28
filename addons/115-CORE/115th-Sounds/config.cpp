class CfgPatches
{
	class Aux115_Sound_Master
	{
		author="SW 1st KG";
		requiredAddons[]={};
		requiredVersion=2;
		units[]={};
		weapons[]={};
	};
};
class CfgSoundCurves
{
	class InverseSquareCurve1
	{
		points[]=
		{
			{0,0.97509998},
			{0.1,0.63319999},
			{0.2,0.4307},
			{0.30000001,0.30090001},
			{0.40000001,0.2128},
			{0.5,0.1503},
			{0.60000002,0.1043},
			{0.69999999,0.069499999},
			{0.80000001,0.042599998},
			{0.89999998,0.021299999},
			{1,0.0041}
		};
	};
	class InverseSquareCurve2
	{
		points[]=
		{
			{0,1},
			{0.050000001,0.61500001},
			{0.1,0.41940001},
			{0.15000001,0.30149999},
			{0.2,0.22499999},
			{0.25,0.1725},
			{0.30000001,0.13500001},
			{0.34999999,0.1072},
			{0.40000001,0.086099997},
			{0.44999999,0.069700003},
			{0.5,0.056600001},
			{0.60000002,0.037500001},
			{0.69999999,0.0244},
			{0.80000001,0.015},
			{0.89999998,0.0081000002},
			{1,0}
		};
	};
};
class CfgSoundShaders
{
	class Aux115_DC15A_SoundShader
	{
		samples[]=
		{
			
			{
				"AR121-Weapons\DC15A\data\DC15A_Sound_1.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15A\data\DC15A_Sound_2.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15A\data\DC15A_Sound_3.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15A\data\DC15A_Sound_4.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15A\data\DC15A_Sound_5.ogg",
				1
			}
		};
		volume=1;
		range=900;
	};
	class Aux115_DC15S_SoundShader
	{
		samples[]=
		{
			
			{
				"AR121-Weapons\DC15S\data\DC15S_Sound_1.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15S\data\DC15S_Sound_2.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15S\data\DC15S_Sound_3.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15S\data\DC15S_Sound_4.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15S\data\DC15S_Sound_5.ogg",
				1
			}
		};
		volume=1;
		range=900;
	};
	class Aux115_DC15C_SoundShader
	{
		samples[]=
		{
			
			{
				"AR121-Weapons\DC15C\data\DC15C_Sound_1.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15C\data\DC15C_Sound_2.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15C\data\DC15C_Sound_3.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15C\data\DC15C_Sound_4.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC15C\data\DC15C_Sound_5.ogg",
				1
			}
		};
		volume=1;
		range=900;
	};
	class Aux115_DC17SA_SoundShader
	{
		samples[]=
		{
			
			{
				"AR121-Weapons\DC17SA\data\DC17_Sound_1.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC17SA\data\DC17_Sound_2.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC17SA\data\DC17_Sound_3.ogg",
				1
			},
			
			{
				"AR121-Weapons\DC17SA\data\DC17_Sound_4.ogg",
				1
			}
		};
		volume=1;
		range=900;
	};
};
class CfgSoundSets
{
	class Aux115_DC15A_Set
	{
		soundShaders[]=
		{
			"115_DC15A_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquareCurve2";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class Aux115_DC15S_Set
	{
		soundShaders[]=
		{
			"115_DC15S_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquareCurve2";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class Aux115_DC15C_Set
	{
		soundShaders[]=
		{
			"115_DC15C_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquareCurve2";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class Aux115_DC17SA_Set
	{
		soundShaders[]=
		{
			"115_DC17SA_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquareCurve2";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
};
class cfgMods
{
	author="Possum";
	timepacked="1732449290";
};
