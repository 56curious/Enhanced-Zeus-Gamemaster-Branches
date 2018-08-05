class MissionSelector
{

	idd = -1
	enableSimulation = true;
	movingEnabled = false;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Curious, v1.063, #Guqaxy)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.407164 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.185671 * safezoneW;
			h = 0.198 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
		class IGUIBack_2201: IGUIBack
		{
			idc = 2201;
			x = 0.407164 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.185671 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "EZGM Framework - Mission Generator Selection"; //--- ToDo: Localize;
			x = 0.407164 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.185671 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Randomized Mission Creator"; //--- ToDo: Localize;
			x = 0.438109 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.123781 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 0; createDialog ""ZeusScenarioSetup"";";
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Static Mission Creator"; //--- ToDo: Localize;
			x = 0.438109 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.123781 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 0; createDialog ""ZeusStaticScenarioSetup"";";
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "Exit"; //--- ToDo: Localize;
			x = 0.438109 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.123781 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 0;";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////



	};
};