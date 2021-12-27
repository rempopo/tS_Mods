class Land_jbad_wall_l1_gate: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
	};
};

class Land_jbad_wall_l3_gate: Wall_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		class OpenDoor_2: OpenDoor_1
		{
			statement = "(this animateSource ['Door_3_source', 1])";
		};
		class CloseDoor_2: OpenDoor_2
		{
			statement = "(this animateSource ['Door_3_source', 0])";
		};
	};
};