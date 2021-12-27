
#define USER_ACTION_DOOR_1 \
	class OpenDoor_1 \
	{\
		statement = "(this animateSource ['Door_1_source', 1])";\
	};\
	class CloseDoor_1: OpenDoor_1 \
	{\
		statement = "(this animateSource ['Door_1_source', 0])";\
	}

#define USER_ACTION_DOOR_2 \
	class OpenDoor_2: OpenDoor_1 \
	{\
		statement = "(this animateSource ['Door_2_source', 1])";\
	};\
	class CloseDoor_2: OpenDoor_2 \
	{\
		statement = "(this animateSource ['Door_2_source', 0])";\
	}

#define USER_ACTION_DOOR_3 \
	class OpenDoor_3: OpenDoor_2 \
	{\
		statement = "(this animateSource ['Door_3_source', 1])";\
	};\
	class CloseDoor_3: OpenDoor_3 \
	{\
		statement = "(this animateSource ['Door_3_source', 0])";\
	}

#define USER_ACTION_DOOR_4 \
	class OpenDoor_4: OpenDoor_3 \
	{\
		statement = "(this animateSource ['Door_4_source', 1])";\
	};\
	class CloseDoor_4: OpenDoor_4 \
	{\
		statement = "(this animateSource ['Door_4_source', 0])";\
	}

#define USER_ACTION_DOOR_5 \
	class OpenDoor_5: OpenDoor_4 \
	{\
		statement = "(this animateSource ['Door_5_source', 1])";\
	};\
	class CloseDoor_5: OpenDoor_5 \
	{\
		statement = "(this animateSource ['Door_5_source', 0])";\
	}

#define USER_ACTION_DOOR_6 \
	class OpenDoor_6: OpenDoor_5 \
	{\
		statement = "(this animateSource ['Door_6_source', 1])";\
	};\
	class CloseDoor_6: OpenDoor_6 \
	{\
		statement = "(this animateSource ['Door_6_source', 0])";\
	}