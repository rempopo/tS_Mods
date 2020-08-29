
#define MIN_BLOOD_VOL    3.8
#define MAX_BLOOD_VOL    6.0
#define BLOOD_VOLUME_CLASS_1_HEMORRHAGE 6.000 // lost less than 15% blood, Class I Hemorrhage
#define BLOOD_VOLUME_CLASS_2_HEMORRHAGE 5.100 // lost more than 15% blood, Class II Hemorrhage
#define BLOOD_VOLUME_CLASS_3_HEMORRHAGE 4.200 // lost more than 30% blood, Class III Hemorrhage
#define BLOOD_VOLUME_CLASS_4_HEMORRHAGE 3.600 // lost more than 40% blood, Class IV Hemorrhage
#define BLOOD_VOLUME_FATAL 3.0 // Lost more than 50% blood, Unrecoverable


#define ICON_BLOODVOLUME_IDX_MIN 0
#define ICON_BLOODVOLUME_IDX_MAX 6

#define ICON_BLOODVOLUME_PATH(num) format ["\tS_ACE_Medical\data\ui\bloodVolume_%1.paa", num]
#define ICON_BLOODVOLUME_COLOR_WHITE  [1, 1, 1, 1]
#define ICON_BLOODVOLUME_COLOR_ORANGE [1, 0.6, 0, 1]
#define ICON_BLOODVOLUME_COLOR_RED    [0.8, 0.2, 0, 1]
#define ICON_BLOODVOLUME_COLOR_NONE   [0, 0, 0, 0]

#define ICON_TOURNIQUET_BODY_PARTS ["leftarm", "rightarm", "leftleg", "rightleg"]
#define ICON_TOURNIQUET_PATH(stanceName,bodypart) format ["\tS_ACE_Medical\data\ui\tourniquetIndicator_%1_%2.paa", stanceName, bodypart]
#define ICON_TOURNIQUET_CONTROLNAME(bodypart) (format ["TourniquetInfo_%1", bodypart])
