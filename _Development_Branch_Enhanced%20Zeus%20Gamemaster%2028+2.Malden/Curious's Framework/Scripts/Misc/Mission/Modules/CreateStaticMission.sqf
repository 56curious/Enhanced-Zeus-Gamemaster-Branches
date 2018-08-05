/*
Script name:	CreateStaticMission.sqf
Created on:		‎04 ‎August ‎2018
Author:			Curious

Description:	Take the data from the menu and create mission(s) from it.

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:		N/A

*/

Params ["_Objective1", "_Objective2", "_Objective3"];

//Tasks
_SupplyCache = [West,["task1", "EZGM Tasks"],["Move to the target location and capture the supply cache. We've had some reports that there are vehicles on the scene, however we're unsure of they're operational. Reinforcements may be called in as well so keep the surrounding area covered.", "Destroy Supply Cache", ""], [3791.95,4873.21,70.0768], 2, 2, true,"destroy"];

_DestroyCheckpoint = [West,["task2", "EZGM Tasks"],["Move to the target location and capture the checkpoint. Once you have arrived, make sure to destory any vehicles and then vacate the area. Reinforcements may, or may not be present.", "Capture Checkpoint", ""], [5753.74,11147.1,0.000350952], 2, 2, true,"attack"];

//Obj 1 Outcome
if (_Objective1 isEqualTo "None") then {} else {

switch (_Objective1) do
{
	case "Destroy Checkpoint":
	{

		execVM "Curious's Framework\Compile\Static Missions\DestroyCheckpoint.sqf";
		_DestroyCheckpoint call bis_fnc_taskCreate;
	};

	default
	{
		SystemChat "No mission selected for Objective 1 param";
	};
};

};

