class Land_jbad_House_c_1: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
		USER_ACTION_DOOR_3;
	};
};
class Land_jbad_House_c_1_v2: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
		USER_ACTION_DOOR_3;
		USER_ACTION_DOOR_4;
	};
};
class Land_jbad_House_c_2: House_F
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
		class OpenDoor_3: OpenDoor_2
		{
			statement = "(this animateSource ['Door_4_source', 1])";
		};
		class CloseDoor_3: OpenDoor_3
		{
			statement = "(this animateSource ['Door_4_source', 0])";
		};
		class OpenDoor_4: OpenDoor_3
		{
			statement = "(this animateSource ['Door_5_source', 1])";
		};
		class CloseDoor_4: OpenDoor_4
		{
			statement = "(this animateSource ['Door_5_source', 0])";
		};
	};
};
class Land_jbad_House_c_3: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		class OpenDoor_2: OpenDoor_1
		{
			statement = "(this animateSource ['Door_2_source', 1])";
		};
		class CloseDoor_2: OpenDoor_2
		{
			statement = "(this animateSource ['Door_2_source', 0])";
		};
		class OpenDoor_3: OpenDoor_2
		{
			statement = "(this animateSource ['Door_4_source', 1])";
		};
		class CloseDoor_3: OpenDoor_3
		{
			statement = "(this animateSource ['Door_4_source', 0])";
		};
		class OpenDoor_4: OpenDoor_3
		{
			statement = "(this animateSource ['Door_5_source', 1])";
		};
		class CloseDoor_4: OpenDoor_4
		{
			statement = "(this animateSource ['Door_5_source', 0])";
		};
		class OpenDoor_5: OpenDoor_4
		{
			statement = "(this animateSource ['Door_6_source', 1])";
		};
		class CloseDoor_5: OpenDoor_5
		{
			statement = "(this animateSource ['Door_6_source', 0])";
		};
		class OpenDoor_6: OpenDoor_5
		{
			statement = "(this animateSource ['Door_7_source', 1])";
		};
		class CloseDoor_6: OpenDoor_6
		{
			statement = "(this animateSource ['Door_7_source', 0])";
		};
	};
};
class Land_jbad_House_c_4: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
		USER_ACTION_DOOR_3;
		USER_ACTION_DOOR_4;
	};
};
class Land_jbad_House_c_5: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
	};
};
class Land_jbad_House_c_5_v1: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
	};
};
class Land_jbad_House_c_5_v2: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
	};
};
class Land_jbad_House_c_5_v3: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
	};
};
class Land_jbad_House_c_11: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
	};
};
