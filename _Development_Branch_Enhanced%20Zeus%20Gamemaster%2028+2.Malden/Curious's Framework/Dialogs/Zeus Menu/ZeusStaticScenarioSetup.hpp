class MissionSelector
{

	idd = -1
	enableSimulation = true;
	movingEnabled = false;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Curious, v1.063, #Bexeke)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.412603 * safezoneW;
			h = 0.44 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
		class IGUIBack_2201: IGUIBack
		{
			idc = 2201;
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.412603 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.03,0.51,1,0.75};
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "EZGM Framework - Static Mission Creator"; //--- ToDo: Localize;
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.412603 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Objective 1:"; //--- ToDo: Localize;
			x = 0.314328 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2100: RscCombo
		{
			idc = 2100;
			x = 0.298856 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0825207 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Objective 2:"; //--- ToDo: Localize;
			x = 0.314328 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2101: RscCombo
		{
			idc = 2101;
			x = 0.298856 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0825207 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Objective 3:"; //--- ToDo: Localize;
			x = 0.314328 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2102: RscCombo
		{
			idc = 2102;
			x = 0.298856 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0825207 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Create Objective(s)"; //--- ToDo: Localize;
			x = 0.304013 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0722056 * safezoneW;
			h = 0.044 * safezoneH;
			action = "closeDialog 0; ";
		};
		class RscFrame_1800: RscFrame
		{
			idc = 1800;
			x = 0.391691 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.31461 * safezoneW;
			h = 0.33 * safezoneH;
		};
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.391692 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.31461 * safezoneW;
			h = 0.33 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
};