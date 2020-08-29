class CfgPatches
{
	class tS_LowGrass_Chernarus
	{
		units[] = {};
		weapons[] = {};
		version = "1";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"CUP_Bohemia_Config"
			, "Woodland_ACR"			
			, "CUP_Bootcamp_acr_Config"
			, "Bootcamp_ACR"			
			, "CUP_Chernarus_Config"
			, "Chernarus"			
			, "CUP_Chernarus_Summer_Config"
			, "Chernarus_Summer"
		};
	};
};


class CfgWorlds
{
	class DefaultWorld{};
	class CAWorld: DefaultWorld
	{
		class DefaultClutter;
	};
	class Chernarus: CAWorld
	{
		class clutter
		{
			class GrassTall: DefaultClutter
			{
				scaleMin = 0.18;
				scaleMax = 0.22;
			};
			class StubbleClutter: DefaultClutter
			{
				scaleMin = 0.65;
				scaleMax = 0.75;
			};
			class AutumnFlowers: DefaultClutter
			{
				scaleMin = 0.25;
				scaleMax = 0.32;
			};
			class GrassBunch: DefaultClutter
			{
				scaleMin = 0.23;
				scaleMax = 0.3;
			};
			class GrassCrooked: DefaultClutter
			{
				scaleMin = 0.85;
				scaleMax = 0.95;
			};
			class GrassCrookedGreen: DefaultClutter
			{
				scaleMin = 0.8;
				scaleMax = 0.9;
			};
			class GrassCrookedForest: DefaultClutter
			{
				scaleMin = 1.1;
				scaleMax = 1.4;
			};
			class WeedDead: DefaultClutter
			{
				scaleMin = 0.22;
				scaleMax = 0.28;
			};
			class WeedDeadSmall: DefaultClutter
			{
				scaleMin = 0.22;
				scaleMax = 0.28;
			};
			class HeatherBrush: DefaultClutter
			{
				scaleMin = 0.5;
				scaleMax = 0.65;
			};
			class WeedSedge: DefaultClutter
			{
				scaleMin = 0.22;
				scaleMax = 0.28;
			};
			class WeedTall: DefaultClutter
			{
				scaleMin = 0.24;
				scaleMax = 0.3;
			};
			class BlueBerry: DefaultClutter
			{
				scaleMin = 0.8;
				scaleMax = 1.1;
			};
			class RaspBerry: DefaultClutter
			{
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			class FernAutumn: DefaultClutter
			{
				scaleMin = 0.38;
				scaleMax = 0.45;
			};
			class FernAutumnTall: DefaultClutter
			{
				scaleMin = 0.22;
				scaleMax = 0.27;
			};
			class SmallPicea: DefaultClutter
			{
				scaleMin = 0.28;
				scaleMax = 0.33;
			};
			class PlantWideLeaf: DefaultClutter
			{
				scaleMin = 1.0;
				scaleMax = 1.0;
			};
		};
	};
};