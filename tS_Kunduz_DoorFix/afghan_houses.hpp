class Land_jbad_House2_basehide: House_F
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		class OpenDoor_2: OpenDoor_1
		{
			statement = "(this animateSource ['Rug_source', 1])";
		};
		class CloseDoor_2: OpenDoor_2
		{
			statement = "(this animateSource ['Rug_source', 0])";
		};
	};
};
class Land_jbad_House_1: Land_jbad_House2_basehide
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
	};
};
class Land_jbad_House3: Land_jbad_House_1
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
		USER_ACTION_DOOR_3;
	};
};
class Land_jbad_House5: Land_jbad_House3
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
	};
};
class Land_jbad_House6: Land_jbad_House5
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
		USER_ACTION_DOOR_3;
		USER_ACTION_DOOR_4;
	};
};
class Land_jbad_House7: Land_jbad_House6
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
		USER_ACTION_DOOR_3;
		USER_ACTION_DOOR_4;
	};
};
class Land_jbad_House8: Land_jbad_House7
{
	class UserActions
	{
		USER_ACTION_DOOR_1;
		USER_ACTION_DOOR_2;
		USER_ACTION_DOOR_3;
	};
};