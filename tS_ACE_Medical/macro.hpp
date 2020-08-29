
#define ICON_TOURNIQUET_BODY_PARTS ["leftarm", "rightarm", "leftleg", "rightleg"]
#define ICON_TOURNIQUET_PATH(stanceName,bodypart) format ["\tS_ACE_Medical\data\ui\tourniquetIndicator_%1_%2.paa", stanceName, bodypart]
#define ICON_TOURNIQUET_CONTROLNAME(bodypart) (format ["TourniquetInfo_%1", bodypart])
