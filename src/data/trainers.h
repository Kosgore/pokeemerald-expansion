const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.TrainerMon = NULL},
    },

    [TRAINER_SAWYER_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Sawyer1),
        .party = {.TrainerMon = sParty_Sawyer1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout1),
        .party = {.TrainerMon = sParty_GruntAquaHideout1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout2),
        .party = {.TrainerMon = sParty_GruntAquaHideout2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout3),
        .party = {.TrainerMon = sParty_GruntAquaHideout3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout4),
        .party = {.TrainerMon = sParty_GruntAquaHideout4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern1),
        .party = {.TrainerMon = sParty_GruntSeafloorCavern1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern2),
        .party = {.TrainerMon = sParty_GruntSeafloorCavern2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern3),
        .party = {.TrainerMon = sParty_GruntSeafloorCavern3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABRIELLE_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Gabrielle1),
        .party = {.TrainerMon = sParty_Gabrielle1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_PETALBURG_WOODS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_GruntPetalburgWoods),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntPetalburgWoods),
        .party = {.TrainerMon = sParty_GruntPetalburgWoods},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARCEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("MARCEL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marcel),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Marcel),
        .party = {.TrainerMon = sParty_Marcel},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALBERTO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ALBERTO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alberto),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Alberto),
        .party = {.TrainerMon = sParty_Alberto},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ED] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("ED"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ed),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ed),
        .party = {.TrainerMon = sParty_Ed},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern4),
        .party = {.TrainerMon = sParty_GruntSeafloorCavern4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DECLAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DECLAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Declan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Declan),
        .party = {.TrainerMon = sParty_Declan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = ITEM_CUSTOM_MOVES(sParty_GruntRusturfTunnel),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntRusturfTunnel),
        .party = {.TrainerMon = sParty_GruntRusturfTunnel},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_WEATHER_INST_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst1),
        .party = {.TrainerMon = sParty_GruntWeatherInst1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_WEATHER_INST_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst2),
        .party = {.TrainerMon = sParty_GruntWeatherInst2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_WEATHER_INST_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst3),
        .party = {.TrainerMon = sParty_GruntWeatherInst3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MUSEUM_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_GruntMuseum1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMuseum1),
        .party = {.TrainerMon = sParty_GruntMuseum1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MUSEUM_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_GruntMuseum2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMuseum2),
        .party = {.TrainerMon = sParty_GruntMuseum2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SPACE_CENTER_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter1),
        .party = {.TrainerMon = sParty_GruntSpaceCenter1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MT_PYRE_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtPyre1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMtPyre1),
        .party = {.TrainerMon = sParty_GruntMtPyre1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MT_PYRE_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtPyre2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMtPyre2),
        .party = {.TrainerMon = sParty_GruntMtPyre2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MT_PYRE_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtPyre3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMtPyre3),
        .party = {.TrainerMon = sParty_GruntMtPyre3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_WEATHER_INST_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst4),
        .party = {.TrainerMon = sParty_GruntWeatherInst4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout5),
        .party = {.TrainerMon = sParty_GruntAquaHideout5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout6),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout6),
        .party = {.TrainerMon = sParty_GruntAquaHideout6},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FREDRICK] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("FREDRICK"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fredrick),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Fredrick),
        .party = {.TrainerMon = sParty_Fredrick},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MATT] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .trainerName = _("MATT"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Matt),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Matt),
        .party = {.TrainerMon = sParty_Matt},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ZANDER] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("ZANDER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zander),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Zander),
        .party = {.TrainerMon = sParty_Zander},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .trainerName = _("SHELLY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ShellyWeatherInstitute),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_ShellyWeatherInstitute),
        .party = {.TrainerMon = sParty_ShellyWeatherInstitute},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .trainerName = _("SHELLY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ShellySeafloorCavern),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_ShellySeafloorCavern),
        .party = {.TrainerMon = sParty_ShellySeafloorCavern},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ARCHIE] =
    {
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("ARCHIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Archie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Archie),
        .party = {.TrainerMon = sParty_Archie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LEAH] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("LEAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leah),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Leah),
        .party = {.TrainerMon = sParty_Leah},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DAISY] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("DAISY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Daisy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Daisy),
        .party = {.TrainerMon = sParty_Daisy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROSE_1] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Rose1),
        .party = {.TrainerMon = sParty_Rose1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FELIX] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("FELIX"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Felix),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Felix),
        .party = {.TrainerMon = sParty_Felix},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VIOLET] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("VIOLET"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Violet),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Violet),
        .party = {.TrainerMon = sParty_Violet},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROSE_2] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Rose2),
        .party = {.TrainerMon = sParty_Rose2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROSE_3] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Rose3),
        .party = {.TrainerMon = sParty_Rose3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROSE_4] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Rose4),
        .party = {.TrainerMon = sParty_Rose4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROSE_5] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("ROSE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rose5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Rose5),
        .party = {.TrainerMon = sParty_Rose5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DUSTY_1] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dusty1),
        .party = {.TrainerMon = sParty_Dusty1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CHIP] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("CHIP"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Chip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Chip),
        .party = {.TrainerMon = sParty_Chip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FOSTER] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("FOSTER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Foster),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Foster),
        .party = {.TrainerMon = sParty_Foster},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DUSTY_2] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dusty2),
        .party = {.TrainerMon = sParty_Dusty2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DUSTY_3] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dusty3),
        .party = {.TrainerMon = sParty_Dusty3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DUSTY_4] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dusty4),
        .party = {.TrainerMon = sParty_Dusty4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DUSTY_5] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("DUSTY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Dusty5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dusty5),
        .party = {.TrainerMon = sParty_Dusty5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABBY_AND_TY_1] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy1),
        .party = {.TrainerMon = sParty_GabbyAndTy1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABBY_AND_TY_2] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy2),
        .party = {.TrainerMon = sParty_GabbyAndTy2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABBY_AND_TY_3] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy3),
        .party = {.TrainerMon = sParty_GabbyAndTy3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABBY_AND_TY_4] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy4),
        .party = {.TrainerMon = sParty_GabbyAndTy4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABBY_AND_TY_5] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GabbyAndTy5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy5),
        .party = {.TrainerMon = sParty_GabbyAndTy5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABBY_AND_TY_6] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("GABBY & TY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_GabbyAndTy6),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GabbyAndTy6),
        .party = {.TrainerMon = sParty_GabbyAndTy6},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LOLA_1] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Lola1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lola1),
        .party = {.TrainerMon = sParty_Lola1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AUSTINA] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("AUSTINA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Austina),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Austina),
        .party = {.TrainerMon = sParty_Austina},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GWEN] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("GWEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gwen),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Gwen),
        .party = {.TrainerMon = sParty_Gwen},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LOLA_2] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lola2),
        .party = {.TrainerMon = sParty_Lola2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LOLA_3] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lola3),
        .party = {.TrainerMon = sParty_Lola3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LOLA_4] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lola4),
        .party = {.TrainerMon = sParty_Lola4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LOLA_5] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("LOLA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lola5),
        .party = {.TrainerMon = sParty_Lola5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RICKY_1] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Ricky1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ricky1),
        .party = {.TrainerMon = sParty_Ricky1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SIMON] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("SIMON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Simon),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Simon),
        .party = {.TrainerMon = sParty_Simon},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CHARLIE] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("CHARLIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Charlie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Charlie),
        .party = {.TrainerMon = sParty_Charlie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RICKY_2] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ricky2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ricky2),
        .party = {.TrainerMon = sParty_Ricky2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RICKY_3] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ricky3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ricky3),
        .party = {.TrainerMon = sParty_Ricky3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RICKY_4] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ricky4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ricky4),
        .party = {.TrainerMon = sParty_Ricky4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RICKY_5] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("RICKY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ricky5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ricky5),
        .party = {.TrainerMon = sParty_Ricky5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RANDALL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("RANDALL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Randall),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Randall),
        .party = {.TrainerMon = sParty_Randall},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PARKER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("PARKER"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Parker),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Parker),
        .party = {.TrainerMon = sParty_Parker},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GEORGE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("GEORGE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_George),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_George),
        .party = {.TrainerMon = sParty_George},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BERKE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("BERKE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Berke),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Berke),
        .party = {.TrainerMon = sParty_Berke},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRAXTON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("BRAXTON"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Braxton),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Braxton),
        .party = {.TrainerMon = sParty_Braxton},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VINCENT] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("VINCENT"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vincent),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Vincent),
        .party = {.TrainerMon = sParty_Vincent},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LEROY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("LEROY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leroy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Leroy),
        .party = {.TrainerMon = sParty_Leroy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WILTON_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wilton1),
        .party = {.TrainerMon = sParty_Wilton1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDGAR] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("EDGAR"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edgar),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Edgar),
        .party = {.TrainerMon = sParty_Edgar},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALBERT] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("ALBERT"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Albert),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Albert),
        .party = {.TrainerMon = sParty_Albert},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SAMUEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("SAMUEL"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Samuel),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Samuel),
        .party = {.TrainerMon = sParty_Samuel},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VITO] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("VITO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vito),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Vito),
        .party = {.TrainerMon = sParty_Vito},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_OWEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("OWEN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Owen),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Owen),
        .party = {.TrainerMon = sParty_Owen},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WILTON_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wilton2),
        .party = {.TrainerMon = sParty_Wilton2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WILTON_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wilton3),
        .party = {.TrainerMon = sParty_Wilton3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WILTON_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wilton4),
        .party = {.TrainerMon = sParty_Wilton4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WILTON_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WILTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wilton5),
        .party = {.TrainerMon = sParty_Wilton5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WARREN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("WARREN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Warren),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Warren),
        .party = {.TrainerMon = sParty_Warren},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("MARY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Mary),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Mary),
        .party = {.TrainerMon = sParty_Mary},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALEXIA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ALEXIA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Alexia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Alexia),
        .party = {.TrainerMon = sParty_Alexia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JODY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JODY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = ITEM_CUSTOM_MOVES(sParty_Jody),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Jody),
        .party = {.TrainerMon = sParty_Jody},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WENDY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("WENDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Wendy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Wendy),
        .party = {.TrainerMon = sParty_Wendy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KEIRA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("KEIRA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Keira),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Keira),
        .party = {.TrainerMon = sParty_Keira},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BROOKE_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brooke1),
        .party = {.TrainerMon = sParty_Brooke1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JENNIFER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JENNIFER"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jennifer),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jennifer),
        .party = {.TrainerMon = sParty_Jennifer},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HOPE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("HOPE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hope),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Hope),
        .party = {.TrainerMon = sParty_Hope},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHANNON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("SHANNON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shannon),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Shannon),
        .party = {.TrainerMon = sParty_Shannon},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MICHELLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("MICHELLE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Michelle),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Michelle),
        .party = {.TrainerMon = sParty_Michelle},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAROLINE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CAROLINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Caroline),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Caroline),
        .party = {.TrainerMon = sParty_Caroline},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JULIE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JULIE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Julie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Julie),
        .party = {.TrainerMon = sParty_Julie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BROOKE_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brooke2),
        .party = {.TrainerMon = sParty_Brooke2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BROOKE_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brooke3),
        .party = {.TrainerMon = sParty_Brooke3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BROOKE_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brooke4),
        .party = {.TrainerMon = sParty_Brooke4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BROOKE_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("BROOKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brooke5),
        .party = {.TrainerMon = sParty_Brooke5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PATRICIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("PATRICIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Patricia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Patricia),
        .party = {.TrainerMon = sParty_Patricia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KINDRA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("KINDRA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kindra),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kindra),
        .party = {.TrainerMon = sParty_Kindra},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TAMMY] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("TAMMY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tammy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tammy),
        .party = {.TrainerMon = sParty_Tammy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VALERIE_1] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Valerie1),
        .party = {.TrainerMon = sParty_Valerie1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TASHA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("TASHA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tasha),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tasha),
        .party = {.TrainerMon = sParty_Tasha},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VALERIE_2] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Valerie2),
        .party = {.TrainerMon = sParty_Valerie2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VALERIE_3] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Valerie3),
        .party = {.TrainerMon = sParty_Valerie3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VALERIE_4] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Valerie4),
        .party = {.TrainerMon = sParty_Valerie4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VALERIE_5] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("VALERIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Valerie5),
        .party = {.TrainerMon = sParty_Valerie5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CINDY_1] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Cindy1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cindy1),
        .party = {.TrainerMon = sParty_Cindy1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DAPHNE] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("DAPHNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Daphne),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Daphne),
        .party = {.TrainerMon = sParty_Daphne},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter2),
        .party = {.TrainerMon = sParty_GruntSpaceCenter2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CINDY_2] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Cindy2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cindy2),
        .party = {.TrainerMon = sParty_Cindy2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRIANNA] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("BRIANNA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Brianna),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Brianna),
        .party = {.TrainerMon = sParty_Brianna},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NAOMI] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("NAOMI"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Naomi),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Naomi),
        .party = {.TrainerMon = sParty_Naomi},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CINDY_3] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Cindy3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cindy3),
        .party = {.TrainerMon = sParty_Cindy3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CINDY_4] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Cindy4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cindy4),
        .party = {.TrainerMon = sParty_Cindy4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CINDY_5] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Cindy5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cindy5),
        .party = {.TrainerMon = sParty_Cindy5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CINDY_6] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("CINDY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Cindy6),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cindy6),
        .party = {.TrainerMon = sParty_Cindy6},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MELISSA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("MELISSA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Melissa),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Melissa),
        .party = {.TrainerMon = sParty_Melissa},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHEILA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("SHEILA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sheila),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Sheila),
        .party = {.TrainerMon = sParty_Sheila},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHIRLEY] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("SHIRLEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shirley),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Shirley),
        .party = {.TrainerMon = sParty_Shirley},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JESSICA_1] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jessica1),
        .party = {.TrainerMon = sParty_Jessica1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CONNIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("CONNIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Connie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Connie),
        .party = {.TrainerMon = sParty_Connie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRIDGET] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("BRIDGET"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bridget),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bridget),
        .party = {.TrainerMon = sParty_Bridget},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_OLIVIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("OLIVIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Olivia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Olivia),
        .party = {.TrainerMon = sParty_Olivia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TIFFANY] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("TIFFANY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tiffany),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tiffany),
        .party = {.TrainerMon = sParty_Tiffany},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JESSICA_2] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jessica2),
        .party = {.TrainerMon = sParty_Jessica2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JESSICA_3] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jessica3),
        .party = {.TrainerMon = sParty_Jessica3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JESSICA_4] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jessica4),
        .party = {.TrainerMon = sParty_Jessica4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JESSICA_5] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JESSICA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jessica5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jessica5),
        .party = {.TrainerMon = sParty_Jessica5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINSTON_1] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Winston1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Winston1),
        .party = {.TrainerMon = sParty_Winston1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MOLLIE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("MOLLIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mollie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Mollie),
        .party = {.TrainerMon = sParty_Mollie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GARRET] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("GARRET"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Garret),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Garret),
        .party = {.TrainerMon = sParty_Garret},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINSTON_2] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Winston2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Winston2),
        .party = {.TrainerMon = sParty_Winston2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINSTON_3] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Winston3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Winston3),
        .party = {.TrainerMon = sParty_Winston3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINSTON_4] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Winston4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Winston4),
        .party = {.TrainerMon = sParty_Winston4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINSTON_5] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("WINSTON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Winston5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Winston5),
        .party = {.TrainerMon = sParty_Winston5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_STEVE_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Steve1),
        .party = {.TrainerMon = sParty_Steve1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_THALIA_1] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Thalia1),
        .party = {.TrainerMon = sParty_Thalia1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARK] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("MARK"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mark),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Mark),
        .party = {.TrainerMon = sParty_Mark},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtChimney1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMtChimney1),
        .party = {.TrainerMon = sParty_GruntMtChimney1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_STEVE_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Steve2),
        .party = {.TrainerMon = sParty_Steve2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_STEVE_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Steve3),
        .party = {.TrainerMon = sParty_Steve3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_STEVE_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Steve4),
        .party = {.TrainerMon = sParty_Steve4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_STEVE_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("STEVE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Steve5),
        .party = {.TrainerMon = sParty_Steve5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LUIS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("LUIS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Luis),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Luis),
        .party = {.TrainerMon = sParty_Luis},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DOMINIK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DOMINIK"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dominik),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dominik),
        .party = {.TrainerMon = sParty_Dominik},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DOUGLAS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DOUGLAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Douglas),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Douglas),
        .party = {.TrainerMon = sParty_Douglas},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DARRIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DARRIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darrin),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Darrin),
        .party = {.TrainerMon = sParty_Darrin},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TONY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tony1),
        .party = {.TrainerMon = sParty_Tony1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JEROME] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("JEROME"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerome),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jerome),
        .party = {.TrainerMon = sParty_Jerome},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MATTHEW] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("MATTHEW"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Matthew),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Matthew),
        .party = {.TrainerMon = sParty_Matthew},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DAVID] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DAVID"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_David),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_David),
        .party = {.TrainerMon = sParty_David},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SPENCER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("SPENCER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Spencer),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Spencer),
        .party = {.TrainerMon = sParty_Spencer},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROLAND] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("ROLAND"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roland),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Roland),
        .party = {.TrainerMon = sParty_Roland},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NOLEN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("NOLEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nolen),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nolen),
        .party = {.TrainerMon = sParty_Nolen},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_STAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("STAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Stan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Stan),
        .party = {.TrainerMon = sParty_Stan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BARRY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("BARRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Barry),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Barry),
        .party = {.TrainerMon = sParty_Barry},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DEAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DEAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dean),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dean),
        .party = {.TrainerMon = sParty_Dean},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RODNEY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("RODNEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rodney),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Rodney),
        .party = {.TrainerMon = sParty_Rodney},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RICHARD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("RICHARD"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Richard),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Richard),
        .party = {.TrainerMon = sParty_Richard},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HERMAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HERMAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Herman),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Herman),
        .party = {.TrainerMon = sParty_Herman},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SANTIAGO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("SANTIAGO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Santiago),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Santiago),
        .party = {.TrainerMon = sParty_Santiago},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GILBERT] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("GILBERT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gilbert),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Gilbert),
        .party = {.TrainerMon = sParty_Gilbert},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FRANKLIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("FRANKLIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Franklin),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Franklin),
        .party = {.TrainerMon = sParty_Franklin},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KEVIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("KEVIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kevin),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kevin),
        .party = {.TrainerMon = sParty_Kevin},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("JACK"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jack),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jack),
        .party = {.TrainerMon = sParty_Jack},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DUDLEY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("DUDLEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dudley),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dudley),
        .party = {.TrainerMon = sParty_Dudley},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CHAD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CHAD"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chad),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Chad),
        .party = {.TrainerMon = sParty_Chad},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TONY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tony2),
        .party = {.TrainerMon = sParty_Tony2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TONY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tony3),
        .party = {.TrainerMon = sParty_Tony3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TONY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tony4),
        .party = {.TrainerMon = sParty_Tony4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TONY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("TONY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tony5),
        .party = {.TrainerMon = sParty_Tony5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TAKAO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("TAKAO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Takao),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Takao),
        .party = {.TrainerMon = sParty_Takao},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HITOSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("HITOSHI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hitoshi),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Hitoshi),
        .party = {.TrainerMon = sParty_Hitoshi},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KIYO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KIYO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kiyo),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kiyo),
        .party = {.TrainerMon = sParty_Kiyo},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KOICHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOICHI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koichi),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Koichi),
        .party = {.TrainerMon = sParty_Koichi},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NOB_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nob1),
        .party = {.TrainerMon = sParty_Nob1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NOB_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nob2),
        .party = {.TrainerMon = sParty_Nob2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NOB_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nob3),
        .party = {.TrainerMon = sParty_Nob3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NOB_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nob4),
        .party = {.TrainerMon = sParty_Nob4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NOB_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("NOB"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Nob5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nob5),
        .party = {.TrainerMon = sParty_Nob5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_YUJI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("YUJI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Yuji),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Yuji),
        .party = {.TrainerMon = sParty_Yuji},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DAISUKE] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("DAISUKE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Daisuke),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Daisuke),
        .party = {.TrainerMon = sParty_Daisuke},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ATSUSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("ATSUSHI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Atsushi),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Atsushi),
        .party = {.TrainerMon = sParty_Atsushi},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KIRK] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("KIRK"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Kirk),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kirk),
        .party = {.TrainerMon = sParty_Kirk},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout7),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout7),
        .party = {.TrainerMon = sParty_GruntAquaHideout7},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntAquaHideout8),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntAquaHideout8),
        .party = {.TrainerMon = sParty_GruntAquaHideout8},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHAWN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("SHAWN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shawn),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Shawn),
        .party = {.TrainerMon = sParty_Shawn},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FERNANDO_1] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Fernando1),
        .party = {.TrainerMon = sParty_Fernando1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DALTON_1] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dalton1),
        .party = {.TrainerMon = sParty_Dalton1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DALTON_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dalton2),
        .party = {.TrainerMon = sParty_Dalton2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DALTON_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dalton3),
        .party = {.TrainerMon = sParty_Dalton3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DALTON_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dalton4),
        .party = {.TrainerMon = sParty_Dalton4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DALTON_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("DALTON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dalton5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dalton5),
        .party = {.TrainerMon = sParty_Dalton5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_COLE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("COLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cole),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cole),
        .party = {.TrainerMon = sParty_Cole},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JEFF] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("JEFF"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeff),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jeff),
        .party = {.TrainerMon = sParty_Jeff},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AXLE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("AXLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Axle),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Axle),
        .party = {.TrainerMon = sParty_Axle},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("JACE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jace),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jace),
        .party = {.TrainerMon = sParty_Jace},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KEEGAN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("KEEGAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Keegan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Keegan),
        .party = {.TrainerMon = sParty_Keegan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BERNIE_1] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bernie1),
        .party = {.TrainerMon = sParty_Bernie1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BERNIE_2] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bernie2),
        .party = {.TrainerMon = sParty_Bernie2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BERNIE_3] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bernie3),
        .party = {.TrainerMon = sParty_Bernie3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BERNIE_4] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bernie4),
        .party = {.TrainerMon = sParty_Bernie4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BERNIE_5] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BERNIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bernie5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bernie5),
        .party = {.TrainerMon = sParty_Bernie5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DREW] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("DREW"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Drew),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Drew),
        .party = {.TrainerMon = sParty_Drew},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BEAU] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("BEAU"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Beau),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Beau),
        .party = {.TrainerMon = sParty_Beau},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LARRY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LARRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Larry),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Larry),
        .party = {.TrainerMon = sParty_Larry},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHANE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("SHANE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shane),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Shane),
        .party = {.TrainerMon = sParty_Shane},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JUSTIN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("JUSTIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Justin),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Justin),
        .party = {.TrainerMon = sParty_Justin},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ETHAN_1] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ethan1),
        .party = {.TrainerMon = sParty_Ethan1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AUTUMN] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("AUTUMN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Autumn),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Autumn),
        .party = {.TrainerMon = sParty_Autumn},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TRAVIS] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("TRAVIS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Travis),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Travis),
        .party = {.TrainerMon = sParty_Travis},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ETHAN_2] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ethan2),
        .party = {.TrainerMon = sParty_Ethan2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ETHAN_3] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ethan3),
        .party = {.TrainerMon = sParty_Ethan3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ETHAN_4] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ethan4),
        .party = {.TrainerMon = sParty_Ethan4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ETHAN_5] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("ETHAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ethan5),
        .party = {.TrainerMon = sParty_Ethan5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("BRENT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brent),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Brent),
        .party = {.TrainerMon = sParty_Brent},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DONALD] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("DONALD"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Donald),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Donald),
        .party = {.TrainerMon = sParty_Donald},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TAYLOR] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("TAYLOR"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Taylor),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Taylor),
        .party = {.TrainerMon = sParty_Taylor},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JEFFREY_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jeffrey1),
        .party = {.TrainerMon = sParty_Jeffrey1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DEREK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("DEREK"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Derek),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Derek),
        .party = {.TrainerMon = sParty_Derek},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JEFFREY_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jeffrey2),
        .party = {.TrainerMon = sParty_Jeffrey2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JEFFREY_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jeffrey3),
        .party = {.TrainerMon = sParty_Jeffrey3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JEFFREY_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jeffrey4),
        .party = {.TrainerMon = sParty_Jeffrey4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JEFFREY_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("JEFFREY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Jeffrey5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jeffrey5),
        .party = {.TrainerMon = sParty_Jeffrey5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDWARD] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("EDWARD"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Edward),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Edward),
        .party = {.TrainerMon = sParty_Edward},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PRESTON] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("PRESTON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Preston),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Preston),
        .party = {.TrainerMon = sParty_Preston},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VIRGIL] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("VIRGIL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Virgil),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Virgil),
        .party = {.TrainerMon = sParty_Virgil},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BLAKE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("BLAKE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Blake),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Blake),
        .party = {.TrainerMon = sParty_Blake},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WILLIAM] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("WILLIAM"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_William),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_William),
        .party = {.TrainerMon = sParty_William},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOSHUA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("JOSHUA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joshua),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Joshua),
        .party = {.TrainerMon = sParty_Joshua},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAMERON_1] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cameron1),
        .party = {.TrainerMon = sParty_Cameron1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAMERON_2] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cameron2),
        .party = {.TrainerMon = sParty_Cameron2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAMERON_3] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cameron3),
        .party = {.TrainerMon = sParty_Cameron3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAMERON_4] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cameron4),
        .party = {.TrainerMon = sParty_Cameron4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAMERON_5] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CAMERON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cameron5),
        .party = {.TrainerMon = sParty_Cameron5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACLYN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACLYN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jaclyn),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jaclyn),
        .party = {.TrainerMon = sParty_Jaclyn},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HANNAH] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("HANNAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hannah),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Hannah),
        .party = {.TrainerMon = sParty_Hannah},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SAMANTHA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("SAMANTHA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Samantha),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Samantha),
        .party = {.TrainerMon = sParty_Samantha},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAURA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MAURA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maura),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Maura),
        .party = {.TrainerMon = sParty_Maura},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KAYLA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("KAYLA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kayla),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kayla),
        .party = {.TrainerMon = sParty_Kayla},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALEXIS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("ALEXIS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alexis),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Alexis),
        .party = {.TrainerMon = sParty_Alexis},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKI_1] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jacki1),
        .party = {.TrainerMon = sParty_Jacki1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKI_2] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jacki2),
        .party = {.TrainerMon = sParty_Jacki2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKI_3] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jacki3),
        .party = {.TrainerMon = sParty_Jacki3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKI_4] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jacki4),
        .party = {.TrainerMon = sParty_Jacki4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKI_5] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("JACKI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacki5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jacki5),
        .party = {.TrainerMon = sParty_Jacki5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALTER_1] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Walter1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Walter1),
        .party = {.TrainerMon = sParty_Walter1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MICAH] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("MICAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Micah),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Micah),
        .party = {.TrainerMon = sParty_Micah},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_THOMAS] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("THOMAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thomas),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Thomas),
        .party = {.TrainerMon = sParty_Thomas},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALTER_2] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Walter2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Walter2),
        .party = {.TrainerMon = sParty_Walter2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALTER_3] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Walter3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Walter3),
        .party = {.TrainerMon = sParty_Walter3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALTER_4] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Walter4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Walter4),
        .party = {.TrainerMon = sParty_Walter4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALTER_5] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("WALTER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Walter5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Walter5),
        .party = {.TrainerMon = sParty_Walter5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SIDNEY] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName = _("SIDNEY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN,
        .party = ITEM_CUSTOM_MOVES(sParty_Sidney),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Sidney),
        .party = {.TrainerMon = sParty_Sidney},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PHOEBE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("PHOEBE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Phoebe),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Phoebe),
        .party = {.TrainerMon = sParty_Phoebe},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GLACIA] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .trainerName = _("GLACIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Glacia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Glacia),
        .party = {.TrainerMon = sParty_Glacia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DRAKE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .trainerName = _("DRAKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Drake),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Drake),
        .party = {.TrainerMon = sParty_Drake},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROXANNE_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Roxanne1),
        .party = {.TrainerMon = sParty_Roxanne1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRAWLY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brawly1),
        .party = {.TrainerMon = sParty_Brawly1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WATTSON_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wattson1),
        .party = {.TrainerMon = sParty_Wattson1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FLANNERY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Flannery1),
        .party = {.TrainerMon = sParty_Flannery1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NORMAN_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Norman1),
        .party = {.TrainerMon = sParty_Norman1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINONA_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .partySize = ARRAY_COUNT(sParty_Winona1),
        .party = {.TrainerMon = sParty_Winona1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TATE_AND_LIZA_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza1),
        .party = {.TrainerMon = sParty_TateAndLiza1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JUAN_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Juan1),
        .party = {.TrainerMon = sParty_Juan1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JERRY_1] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Jerry1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jerry1),
        .party = {.TrainerMon = sParty_Jerry1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TED] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("TED"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ted),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ted),
        .party = {.TrainerMon = sParty_Ted},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("PAUL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paul),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Paul),
        .party = {.TrainerMon = sParty_Paul},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JERRY_2] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jerry2),
        .party = {.TrainerMon = sParty_Jerry2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JERRY_3] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jerry3),
        .party = {.TrainerMon = sParty_Jerry3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JERRY_4] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jerry4),
        .party = {.TrainerMon = sParty_Jerry4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JERRY_5] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("JERRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jerry5),
        .party = {.TrainerMon = sParty_Jerry5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KAREN_1] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Karen1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Karen1),
        .party = {.TrainerMon = sParty_Karen1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GEORGIA] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("GEORGIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Georgia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Georgia),
        .party = {.TrainerMon = sParty_Georgia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KAREN_2] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Karen2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Karen2),
        .party = {.TrainerMon = sParty_Karen2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KAREN_3] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Karen3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Karen3),
        .party = {.TrainerMon = sParty_Karen3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KAREN_4] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Karen4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Karen4),
        .party = {.TrainerMon = sParty_Karen4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KAREN_5] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("KAREN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Karen5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Karen5),
        .party = {.TrainerMon = sParty_Karen5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KATE_AND_JOY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("KATE & JOY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_KateAndJoy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KateAndJoy),
        .party = {.TrainerMon = sParty_KateAndJoy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANNA_AND_MEG_1] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg1),
        .party = {.TrainerMon = sParty_AnnaAndMeg1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANNA_AND_MEG_2] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg2),
        .party = {.TrainerMon = sParty_AnnaAndMeg2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANNA_AND_MEG_3] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg3),
        .party = {.TrainerMon = sParty_AnnaAndMeg3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANNA_AND_MEG_4] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg4),
        .party = {.TrainerMon = sParty_AnnaAndMeg4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANNA_AND_MEG_5] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("ANNA & MEG"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AnnaAndMeg5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AnnaAndMeg5),
        .party = {.TrainerMon = sParty_AnnaAndMeg5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VICTOR] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("VICTOR"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Victor),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Victor),
        .party = {.TrainerMon = sParty_Victor},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MIGUEL_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Miguel1),
        .party = {.TrainerMon = sParty_Miguel1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_COLTON] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("COLTON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Colton),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Colton),
        .party = {.TrainerMon = sParty_Colton},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MIGUEL_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Miguel2),
        .party = {.TrainerMon = sParty_Miguel2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MIGUEL_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Miguel3),
        .party = {.TrainerMon = sParty_Miguel3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MIGUEL_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Miguel4),
        .party = {.TrainerMon = sParty_Miguel4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MIGUEL_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("MIGUEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Miguel5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Miguel5),
        .party = {.TrainerMon = sParty_Miguel5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VICTORIA] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("VICTORIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = ITEM_DEFAULT_MOVES(sParty_Victoria),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_Victoria),
        .party = {.TrainerMon = sParty_Victoria},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VANESSA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("VANESSA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Vanessa),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Vanessa),
        .party = {.TrainerMon = sParty_Vanessa},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BETHANY] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("BETHANY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Bethany),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bethany),
        .party = {.TrainerMon = sParty_Bethany},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISABEL_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Isabel1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isabel1),
        .party = {.TrainerMon = sParty_Isabel1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISABEL_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Isabel2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isabel2),
        .party = {.TrainerMon = sParty_Isabel2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISABEL_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Isabel3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isabel3),
        .party = {.TrainerMon = sParty_Isabel3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISABEL_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Isabel4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isabel4),
        .party = {.TrainerMon = sParty_Isabel4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISABEL_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ISABEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Isabel5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isabel5),
        .party = {.TrainerMon = sParty_Isabel5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TIMOTHY_1] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Timothy1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Timothy1),
        .party = {.TrainerMon = sParty_Timothy1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TIMOTHY_2] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Timothy2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Timothy2),
        .party = {.TrainerMon = sParty_Timothy2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TIMOTHY_3] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Timothy3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Timothy3),
        .party = {.TrainerMon = sParty_Timothy3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TIMOTHY_4] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Timothy4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Timothy4),
        .party = {.TrainerMon = sParty_Timothy4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TIMOTHY_5] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("TIMOTHY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Timothy5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Timothy5),
        .party = {.TrainerMon = sParty_Timothy5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VICKY] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("VICKY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Vicky),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Vicky),
        .party = {.TrainerMon = sParty_Vicky},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHELBY_1] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Shelby1),
        .party = {.TrainerMon = sParty_Shelby1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHELBY_2] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Shelby2),
        .party = {.TrainerMon = sParty_Shelby2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHELBY_3] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Shelby3),
        .party = {.TrainerMon = sParty_Shelby3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHELBY_4] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Shelby4),
        .party = {.TrainerMon = sParty_Shelby4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHELBY_5] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("SHELBY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shelby5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Shelby5),
        .party = {.TrainerMon = sParty_Shelby5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CALVIN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Calvin1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Calvin1),
        .party = {.TrainerMon = sParty_Calvin1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BILLY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("BILLY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Billy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Billy),
        .party = {.TrainerMon = sParty_Billy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOSH] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JOSH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Josh),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Josh),
        .party = {.TrainerMon = sParty_Josh},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TOMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("TOMMY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Tommy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tommy),
        .party = {.TrainerMon = sParty_Tommy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOEY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JOEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Joey),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Joey),
        .party = {.TrainerMon = sParty_Joey},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("BEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ben),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ben),
        .party = {.TrainerMon = sParty_Ben},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_QUINCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("QUINCY"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Quincy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Quincy),
        .party = {.TrainerMon = sParty_Quincy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KATELYNN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("KATELYNN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Katelynn),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Katelynn),
        .party = {.TrainerMon = sParty_Katelynn},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JAYLEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JAYLEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaylen),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jaylen),
        .party = {.TrainerMon = sParty_Jaylen},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DILLON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DILLON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dillon),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dillon),
        .party = {.TrainerMon = sParty_Dillon},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CALVIN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Calvin2),
        .party = {.TrainerMon = sParty_Calvin2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CALVIN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Calvin3),
        .party = {.TrainerMon = sParty_Calvin3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CALVIN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Calvin4),
        .party = {.TrainerMon = sParty_Calvin4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CALVIN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("CALVIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Calvin5),
        .party = {.TrainerMon = sParty_Calvin5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDDIE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("EDDIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eddie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Eddie),
        .party = {.TrainerMon = sParty_Eddie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALLEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("ALLEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Allen),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Allen),
        .party = {.TrainerMon = sParty_Allen},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TIMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("TIMMY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Timmy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Timmy),
        .party = {.TrainerMon = sParty_Timmy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALLACE] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .trainerName = _("WALLACE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wallace),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wallace),
        .party = {.TrainerMon = sParty_Wallace},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANDREW] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ANDREW"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andrew),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Andrew),
        .party = {.TrainerMon = sParty_Andrew},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_IVAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("IVAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ivan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ivan),
        .party = {.TrainerMon = sParty_Ivan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CLAUDE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CLAUDE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Claude),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Claude),
        .party = {.TrainerMon = sParty_Claude},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ELLIOT_1] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Elliot1),
        .party = {.TrainerMon = sParty_Elliot1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NED] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("NED"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ned),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ned),
        .party = {.TrainerMon = sParty_Ned},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DALE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("DALE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dale),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dale),
        .party = {.TrainerMon = sParty_Dale},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NOLAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("NOLAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nolan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nolan),
        .party = {.TrainerMon = sParty_Nolan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BARNY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("BARNY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Barny),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Barny),
        .party = {.TrainerMon = sParty_Barny},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WADE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("WADE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wade),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Wade),
        .party = {.TrainerMon = sParty_Wade},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CARTER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CARTER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carter),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Carter),
        .party = {.TrainerMon = sParty_Carter},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ELLIOT_2] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Elliot2),
        .party = {.TrainerMon = sParty_Elliot2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ELLIOT_3] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Elliot3),
        .party = {.TrainerMon = sParty_Elliot3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ELLIOT_4] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Elliot4),
        .party = {.TrainerMon = sParty_Elliot4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ELLIOT_5] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ELLIOT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_Elliot5),
        .party = {.TrainerMon = sParty_Elliot5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RONALD] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("RONALD"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ronald),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ronald),
        .party = {.TrainerMon = sParty_Ronald},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACOB] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("JACOB"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jacob),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jacob),
        .party = {.TrainerMon = sParty_Jacob},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANTHONY] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("ANTHONY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anthony),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Anthony),
        .party = {.TrainerMon = sParty_Anthony},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BENJAMIN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Benjamin1),
        .party = {.TrainerMon = sParty_Benjamin1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BENJAMIN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Benjamin2),
        .party = {.TrainerMon = sParty_Benjamin2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BENJAMIN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Benjamin3),
        .party = {.TrainerMon = sParty_Benjamin3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BENJAMIN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Benjamin4),
        .party = {.TrainerMon = sParty_Benjamin4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BENJAMIN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("BENJAMIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Benjamin5),
        .party = {.TrainerMon = sParty_Benjamin5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ABIGAIL_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Abigail1),
        .party = {.TrainerMon = sParty_Abigail1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JASMINE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("JASMINE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jasmine),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jasmine),
        .party = {.TrainerMon = sParty_Jasmine},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ABIGAIL_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Abigail2),
        .party = {.TrainerMon = sParty_Abigail2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ABIGAIL_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Abigail3),
        .party = {.TrainerMon = sParty_Abigail3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ABIGAIL_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Abigail4),
        .party = {.TrainerMon = sParty_Abigail4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ABIGAIL_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ABIGAIL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abigail5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Abigail5),
        .party = {.TrainerMon = sParty_Abigail5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DYLAN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dylan1),
        .party = {.TrainerMon = sParty_Dylan1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DYLAN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dylan2),
        .party = {.TrainerMon = sParty_Dylan2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DYLAN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dylan3),
        .party = {.TrainerMon = sParty_Dylan3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DYLAN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dylan4),
        .party = {.TrainerMon = sParty_Dylan4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DYLAN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("DYLAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dylan5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dylan5),
        .party = {.TrainerMon = sParty_Dylan5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Maria1),
        .party = {.TrainerMon = sParty_Maria1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARIA_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Maria2),
        .party = {.TrainerMon = sParty_Maria2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARIA_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Maria3),
        .party = {.TrainerMon = sParty_Maria3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARIA_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Maria4),
        .party = {.TrainerMon = sParty_Maria4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARIA_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MARIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Maria5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Maria5),
        .party = {.TrainerMon = sParty_Maria5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAMDEN] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CAMDEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Camden),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Camden),
        .party = {.TrainerMon = sParty_Camden},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DEMETRIUS] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DEMETRIUS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Demetrius),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Demetrius),
        .party = {.TrainerMon = sParty_Demetrius},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAIAH_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaiah1),
        .party = {.TrainerMon = sParty_Isaiah1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PABLO_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Pablo1),
        .party = {.TrainerMon = sParty_Pablo1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CHASE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CHASE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chase),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Chase),
        .party = {.TrainerMon = sParty_Chase},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAIAH_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaiah2),
        .party = {.TrainerMon = sParty_Isaiah2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAIAH_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaiah3),
        .party = {.TrainerMon = sParty_Isaiah3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAIAH_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaiah4),
        .party = {.TrainerMon = sParty_Isaiah4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAIAH_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAIAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaiah5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaiah5),
        .party = {.TrainerMon = sParty_Isaiah5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISOBEL] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ISOBEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isobel),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isobel),
        .party = {.TrainerMon = sParty_Isobel},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DONNY] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("DONNY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Donny),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Donny),
        .party = {.TrainerMon = sParty_Donny},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TALIA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("TALIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Talia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Talia),
        .party = {.TrainerMon = sParty_Talia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KATELYN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Katelyn1),
        .party = {.TrainerMon = sParty_Katelyn1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALLISON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ALLISON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allison),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Allison),
        .party = {.TrainerMon = sParty_Allison},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KATELYN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Katelyn2),
        .party = {.TrainerMon = sParty_Katelyn2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KATELYN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Katelyn3),
        .party = {.TrainerMon = sParty_Katelyn3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KATELYN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Katelyn4),
        .party = {.TrainerMon = sParty_Katelyn4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KATELYN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("KATELYN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katelyn5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Katelyn5),
        .party = {.TrainerMon = sParty_Katelyn5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NICOLAS_1] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicolas1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nicolas1),
        .party = {.TrainerMon = sParty_Nicolas1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NICOLAS_2] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicolas2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nicolas2),
        .party = {.TrainerMon = sParty_Nicolas2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NICOLAS_3] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicolas3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nicolas3),
        .party = {.TrainerMon = sParty_Nicolas3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NICOLAS_4] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicolas4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nicolas4),
        .party = {.TrainerMon = sParty_Nicolas4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NICOLAS_5] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("NICOLAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_Nicolas5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nicolas5),
        .party = {.TrainerMon = sParty_Nicolas5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AARON] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("AARON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Aaron),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Aaron),
        .party = {.TrainerMon = sParty_Aaron},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PERRY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("PERRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Perry),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Perry),
        .party = {.TrainerMon = sParty_Perry},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HUGH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("HUGH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hugh),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Hugh),
        .party = {.TrainerMon = sParty_Hugh},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PHIL] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("PHIL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phil),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Phil),
        .party = {.TrainerMon = sParty_Phil},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JARED] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("JARED"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jared),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jared),
        .party = {.TrainerMon = sParty_Jared},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HUMBERTO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("HUMBERTO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Humberto),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Humberto),
        .party = {.TrainerMon = sParty_Humberto},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PRESLEY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("PRESLEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Presley),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Presley),
        .party = {.TrainerMon = sParty_Presley},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDWARDO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("EDWARDO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwardo),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Edwardo),
        .party = {.TrainerMon = sParty_Edwardo},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_COLIN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("COLIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colin),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Colin),
        .party = {.TrainerMon = sParty_Colin},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROBERT_1] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Robert1),
        .party = {.TrainerMon = sParty_Robert1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BENNY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("BENNY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benny),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Benny),
        .party = {.TrainerMon = sParty_Benny},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CHESTER] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("CHESTER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chester),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Chester),
        .party = {.TrainerMon = sParty_Chester},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROBERT_2] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Robert2),
        .party = {.TrainerMon = sParty_Robert2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROBERT_3] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Robert3),
        .party = {.TrainerMon = sParty_Robert3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROBERT_4] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Robert4),
        .party = {.TrainerMon = sParty_Robert4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROBERT_5] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ROBERT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Robert5),
        .party = {.TrainerMon = sParty_Robert5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALEX] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ALEX"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alex),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Alex),
        .party = {.TrainerMon = sParty_Alex},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BECK] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("BECK"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beck),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Beck),
        .party = {.TrainerMon = sParty_Beck},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_YASU] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("YASU"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Yasu),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_Yasu),
        .party = {.TrainerMon = sParty_Yasu},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TAKASHI] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("TAKASHI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Takashi),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_Takashi),
        .party = {.TrainerMon = sParty_Takashi},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DIANNE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DIANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = ITEM_CUSTOM_MOVES(sParty_Dianne),
=======
        .partySize = ARRAY_COUNT(sParty_Dianne),
        .party = {.TrainerMon = sParty_Dianne},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JANI] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("JANI"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jani),
=======
        .partySize = ARRAY_COUNT(sParty_Jani),
        .party = {.TrainerMon = sParty_Jani},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LAO_1] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lao1),
=======
        .partySize = ARRAY_COUNT(sParty_Lao1),
        .party = {.TrainerMon = sParty_Lao1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LUNG] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LUNG"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lung),
=======
        .partySize = ARRAY_COUNT(sParty_Lung),
        .party = {.TrainerMon = sParty_Lung},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LAO_2] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lao2),
=======
        .partySize = ARRAY_COUNT(sParty_Lao2),
        .party = {.TrainerMon = sParty_Lao2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LAO_3] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lao3),
=======
        .partySize = ARRAY_COUNT(sParty_Lao3),
        .party = {.TrainerMon = sParty_Lao3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LAO_4] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lao4),
=======
        .partySize = ARRAY_COUNT(sParty_Lao4),
        .party = {.TrainerMon = sParty_Lao4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LAO_5] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("LAO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = ITEM_CUSTOM_MOVES(sParty_Lao5),
=======
        .partySize = ARRAY_COUNT(sParty_Lao5),
        .party = {.TrainerMon = sParty_Lao5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOCELYN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("JOCELYN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Jocelyn),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jocelyn),
        .party = {.TrainerMon = sParty_Jocelyn},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LAURA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("LAURA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Laura),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Laura),
        .party = {.TrainerMon = sParty_Laura},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CYNDY_1] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cyndy1),
        .party = {.TrainerMon = sParty_Cyndy1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CORA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CORA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cora),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cora),
        .party = {.TrainerMon = sParty_Cora},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PAULA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("PAULA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paula),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Paula),
        .party = {.TrainerMon = sParty_Paula},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CYNDY_2] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cyndy2),
        .party = {.TrainerMon = sParty_Cyndy2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CYNDY_3] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cyndy3),
        .party = {.TrainerMon = sParty_Cyndy3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CYNDY_4] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cyndy4),
        .party = {.TrainerMon = sParty_Cyndy4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CYNDY_5] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CYNDY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cyndy5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cyndy5),
        .party = {.TrainerMon = sParty_Cyndy5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MADELINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Madeline1),
        .party = {.TrainerMon = sParty_Madeline1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CLARISSA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("CLARISSA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clarissa),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Clarissa),
        .party = {.TrainerMon = sParty_Clarissa},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANGELICA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("ANGELICA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Angelica),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Angelica),
        .party = {.TrainerMon = sParty_Angelica},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MADELINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Madeline2),
        .party = {.TrainerMon = sParty_Madeline2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MADELINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Madeline3),
        .party = {.TrainerMon = sParty_Madeline3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MADELINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Madeline4),
        .party = {.TrainerMon = sParty_Madeline4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MADELINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Madeline5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Madeline5),
        .party = {.TrainerMon = sParty_Madeline5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BEVERLY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BEVERLY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beverly),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Beverly),
        .party = {.TrainerMon = sParty_Beverly},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_IMANI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("IMANI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Imani),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Imani),
        .party = {.TrainerMon = sParty_Imani},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KYLA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KYLA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kyla),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kyla),
        .party = {.TrainerMon = sParty_Kyla},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DENISE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DENISE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Denise),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Denise),
        .party = {.TrainerMon = sParty_Denise},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BETH] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BETH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beth),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Beth),
        .party = {.TrainerMon = sParty_Beth},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TARA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tara),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tara),
        .party = {.TrainerMon = sParty_Tara},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MISSY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("MISSY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Missy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Missy),
        .party = {.TrainerMon = sParty_Missy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALICE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ALICE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alice),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Alice),
        .party = {.TrainerMon = sParty_Alice},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JENNY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jenny1),
        .party = {.TrainerMon = sParty_Jenny1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRACE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("GRACE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grace),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Grace),
        .party = {.TrainerMon = sParty_Grace},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TANYA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TANYA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tanya),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tanya),
        .party = {.TrainerMon = sParty_Tanya},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHARON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SHARON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sharon),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Sharon),
        .party = {.TrainerMon = sParty_Sharon},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NIKKI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("NIKKI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nikki),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nikki),
        .party = {.TrainerMon = sParty_Nikki},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BRENDA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brenda),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Brenda),
        .party = {.TrainerMon = sParty_Brenda},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KATIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KATIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Katie),
        .party = {.TrainerMon = sParty_Katie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SUSIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SUSIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Susie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Susie),
        .party = {.TrainerMon = sParty_Susie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KARA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kara),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kara),
        .party = {.TrainerMon = sParty_Kara},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DANA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dana),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dana),
        .party = {.TrainerMon = sParty_Dana},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SIENNA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SIENNA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sienna),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Sienna),
        .party = {.TrainerMon = sParty_Sienna},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DEBRA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DEBRA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Debra),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Debra),
        .party = {.TrainerMon = sParty_Debra},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LINDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LINDA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Linda),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Linda),
        .party = {.TrainerMon = sParty_Linda},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KAYLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KAYLEE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kaylee),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kaylee),
        .party = {.TrainerMon = sParty_Kaylee},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LAUREL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LAUREL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Laurel),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Laurel),
        .party = {.TrainerMon = sParty_Laurel},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CARLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("CARLEE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carlee),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Carlee),
        .party = {.TrainerMon = sParty_Carlee},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JENNY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jenny2),
        .party = {.TrainerMon = sParty_Jenny2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JENNY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jenny3),
        .party = {.TrainerMon = sParty_Jenny3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JENNY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jenny4),
        .party = {.TrainerMon = sParty_Jenny4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JENNY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenny5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jenny5),
        .party = {.TrainerMon = sParty_Jenny5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HEIDI] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("HEIDI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Heidi),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Heidi),
        .party = {.TrainerMon = sParty_Heidi},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BECKY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BECKY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Becky),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Becky),
        .party = {.TrainerMon = sParty_Becky},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAROL] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CAROL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carol),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Carol),
        .party = {.TrainerMon = sParty_Carol},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NANCY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("NANCY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nancy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nancy),
        .party = {.TrainerMon = sParty_Nancy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARTHA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("MARTHA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Martha),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Martha),
        .party = {.TrainerMon = sParty_Martha},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DIANA_1] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Diana1),
        .party = {.TrainerMon = sParty_Diana1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CEDRIC] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CEDRIC"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Cedric),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cedric),
        .party = {.TrainerMon = sParty_Cedric},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_IRENE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("IRENE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Irene),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Irene),
        .party = {.TrainerMon = sParty_Irene},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DIANA_2] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Diana2),
        .party = {.TrainerMon = sParty_Diana2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DIANA_3] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Diana3),
        .party = {.TrainerMon = sParty_Diana3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DIANA_4] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Diana4),
        .party = {.TrainerMon = sParty_Diana4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DIANA_5] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Diana5),
        .party = {.TrainerMon = sParty_Diana5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AMY_AND_LIV_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndLiv1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv1),
        .party = {.TrainerMon = sParty_AmyAndLiv1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AMY_AND_LIV_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndLiv2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv2),
        .party = {.TrainerMon = sParty_AmyAndLiv2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GINA_AND_MIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_HELP_PARTNER,
        .party = ITEM_CUSTOM_MOVES(sParty_GinaAndMia1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GinaAndMia1),
        .party = {.TrainerMon = sParty_GinaAndMia1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MIU_AND_YUKI] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("MIU & YUKI"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MiuAndYuki),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_MiuAndYuki),
        .party = {.TrainerMon = sParty_MiuAndYuki},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AMY_AND_LIV_3] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndLiv3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv3),
        .party = {.TrainerMon = sParty_AmyAndLiv3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GINA_AND_MIA_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_GinaAndMia2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GinaAndMia2),
        .party = {.TrainerMon = sParty_GinaAndMia2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AMY_AND_LIV_4] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndLiv4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv4),
        .party = {.TrainerMon = sParty_AmyAndLiv4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AMY_AND_LIV_5] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AmyAndLiv5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv5),
        .party = {.TrainerMon = sParty_AmyAndLiv5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AMY_AND_LIV_6] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_AmyAndLiv6),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_AmyAndLiv6),
        .party = {.TrainerMon = sParty_AmyAndLiv6},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HUEY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HUEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Huey),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Huey),
        .party = {.TrainerMon = sParty_Huey},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDMOND] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("EDMOND"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Edmond),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Edmond),
        .party = {.TrainerMon = sParty_Edmond},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ERNEST_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ernest1),
        .party = {.TrainerMon = sParty_Ernest1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DWAYNE] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("DWAYNE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dwayne),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dwayne),
        .party = {.TrainerMon = sParty_Dwayne},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PHILLIP] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("PHILLIP"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phillip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Phillip),
        .party = {.TrainerMon = sParty_Phillip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LEONARD] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("LEONARD"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leonard),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Leonard),
        .party = {.TrainerMon = sParty_Leonard},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DUNCAN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("DUNCAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Duncan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Duncan),
        .party = {.TrainerMon = sParty_Duncan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ERNEST_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ernest2),
        .party = {.TrainerMon = sParty_Ernest2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ERNEST_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ernest3),
        .party = {.TrainerMon = sParty_Ernest3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ERNEST_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ernest4),
        .party = {.TrainerMon = sParty_Ernest4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ERNEST_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ernest5),
        .party = {.TrainerMon = sParty_Ernest5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ELI] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ELI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eli),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Eli),
        .party = {.TrainerMon = sParty_Eli},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANNIKA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ANNIKA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_Annika),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Annika),
        .party = {.TrainerMon = sParty_Annika},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JAZMYN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JAZMYN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jazmyn),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jazmyn),
        .party = {.TrainerMon = sParty_Jazmyn},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JONAS] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("JONAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Jonas),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jonas),
        .party = {.TrainerMon = sParty_Jonas},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KAYLEY] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("KAYLEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Kayley),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kayley),
        .party = {.TrainerMon = sParty_Kayley},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AURON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("AURON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Auron),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Auron),
        .party = {.TrainerMon = sParty_Auron},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KELVIN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("KELVIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kelvin),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kelvin),
        .party = {.TrainerMon = sParty_Kelvin},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARLEY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("MARLEY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Marley),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Marley),
        .party = {.TrainerMon = sParty_Marley},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_REYNA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("REYNA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Reyna),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Reyna),
        .party = {.TrainerMon = sParty_Reyna},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HUDSON] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HUDSON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hudson),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Hudson),
        .party = {.TrainerMon = sParty_Hudson},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CONOR] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("CONOR"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Conor),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Conor),
        .party = {.TrainerMon = sParty_Conor},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDWIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Edwin1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Edwin1),
        .party = {.TrainerMon = sParty_Edwin1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HECTOR] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("HECTOR"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hector),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Hector),
        .party = {.TrainerMon = sParty_Hector},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TABITHA_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TabithaMossdeep),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_TabithaMossdeep),
        .party = {.TrainerMon = sParty_TabithaMossdeep},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDWIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwin2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Edwin2),
        .party = {.TrainerMon = sParty_Edwin2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDWIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwin3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Edwin3),
        .party = {.TrainerMon = sParty_Edwin3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDWIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwin4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Edwin4),
        .party = {.TrainerMon = sParty_Edwin4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EDWIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edwin5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Edwin5),
        .party = {.TrainerMon = sParty_Edwin5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALLY_VR_1] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_WallyVR1),
        .party = {.TrainerMon = sParty_WallyVR1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute103Mudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute103Mudkip),
        .party = {.TrainerMon = sParty_BrendanRoute103Mudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = ITEM_CUSTOM_MOVES(sParty_BrendanRoute110Mudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute110Mudkip),
        .party = {.TrainerMon = sParty_BrendanRoute110Mudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute119Mudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute119Mudkip),
        .party = {.TrainerMon = sParty_BrendanRoute119Mudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute103Treecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute103Treecko),
        .party = {.TrainerMon = sParty_BrendanRoute103Treecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = ITEM_CUSTOM_MOVES(sParty_BrendanRoute110Treecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute110Treecko),
        .party = {.TrainerMon = sParty_BrendanRoute110Treecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute119Treecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute119Treecko),
        .party = {.TrainerMon = sParty_BrendanRoute119Treecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute103Torchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute103Torchic),
        .party = {.TrainerMon = sParty_BrendanRoute103Torchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = ITEM_CUSTOM_MOVES(sParty_BrendanRoute110Torchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute110Torchic),
        .party = {.TrainerMon = sParty_BrendanRoute110Torchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRoute119Torchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanRoute119Torchic),
        .party = {.TrainerMon = sParty_BrendanRoute119Torchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute103Mudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRoute103Mudkip),
        .party = {.TrainerMon = sParty_MayRoute103Mudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = ITEM_CUSTOM_MOVES(sParty_MayRoute110Mudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRoute110Mudkip),
        .party = {.TrainerMon = sParty_MayRoute110Mudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute119Mudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRoute119Mudkip),
        .party = {.TrainerMon = sParty_MayRoute119Mudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute103Treecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRoute103Treecko),
        .party = {.TrainerMon = sParty_MayRoute103Treecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = ITEM_CUSTOM_MOVES(sParty_MayRoute110Treecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRoute110Treecko),
        .party = {.TrainerMon = sParty_MayRoute110Treecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute119Treecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRoute119Treecko),
        .party = {.TrainerMon = sParty_MayRoute119Treecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute103Torchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRoute103Torchic),
        .party = {.TrainerMon = sParty_MayRoute103Torchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = ITEM_CUSTOM_MOVES(sParty_MayRoute110Torchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRoute110Torchic),
        .party = {.TrainerMon = sParty_MayRoute110Torchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_ACE_POKEMON,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRoute119Torchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRoute119Torchic),
        .party = {.TrainerMon = sParty_MayRoute119Torchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAAC_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaac1),
        .party = {.TrainerMon = sParty_Isaac1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DAVIS] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DAVIS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Davis),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Davis),
        .party = {.TrainerMon = sParty_Davis},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MITCHELL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("MITCHELL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Mitchell),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Mitchell),
        .party = {.TrainerMon = sParty_Mitchell},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAAC_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaac2),
        .party = {.TrainerMon = sParty_Isaac2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAAC_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaac3),
        .party = {.TrainerMon = sParty_Isaac3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAAC_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaac4),
        .party = {.TrainerMon = sParty_Isaac4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISAAC_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isaac5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isaac5),
        .party = {.TrainerMon = sParty_Isaac5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LYDIA_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lydia1),
        .party = {.TrainerMon = sParty_Lydia1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HALLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("HALLE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Halle),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Halle),
        .party = {.TrainerMon = sParty_Halle},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GARRISON] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("GARRISON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Garrison),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Garrison),
        .party = {.TrainerMon = sParty_Garrison},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LYDIA_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lydia2),
        .party = {.TrainerMon = sParty_Lydia2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LYDIA_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lydia3),
        .party = {.TrainerMon = sParty_Lydia3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LYDIA_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lydia4),
        .party = {.TrainerMon = sParty_Lydia4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LYDIA_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lydia5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lydia5),
        .party = {.TrainerMon = sParty_Lydia5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKSON_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jackson1),
        .party = {.TrainerMon = sParty_Jackson1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LORENZO] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("LORENZO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lorenzo),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Lorenzo),
        .party = {.TrainerMon = sParty_Lorenzo},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SEBASTIAN] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("SEBASTIAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sebastian),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Sebastian),
        .party = {.TrainerMon = sParty_Sebastian},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKSON_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Jackson2),
        .party = {.TrainerMon = sParty_Jackson2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKSON_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jackson3),
        .party = {.TrainerMon = sParty_Jackson3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKSON_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Jackson4),
        .party = {.TrainerMon = sParty_Jackson4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JACKSON_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jackson5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Jackson5),
        .party = {.TrainerMon = sParty_Jackson5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CATHERINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Catherine1),
        .party = {.TrainerMon = sParty_Catherine1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JENNA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("JENNA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenna),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Jenna),
        .party = {.TrainerMon = sParty_Jenna},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SOPHIA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("SOPHIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sophia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Sophia),
        .party = {.TrainerMon = sParty_Sophia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CATHERINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Catherine2),
        .party = {.TrainerMon = sParty_Catherine2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CATHERINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Catherine3),
        .party = {.TrainerMon = sParty_Catherine3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CATHERINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Catherine4),
        .party = {.TrainerMon = sParty_Catherine4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CATHERINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Catherine5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Catherine5),
        .party = {.TrainerMon = sParty_Catherine5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JULIO] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("JULIO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Julio),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Julio),
        .party = {.TrainerMon = sParty_Julio},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSeafloorCavern5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSeafloorCavern5),
        .party = {.TrainerMon = sParty_GruntSeafloorCavern5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_UNUSED] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntUnused),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntUnused),
        .party = {.TrainerMon = sParty_GruntUnused},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MT_PYRE_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtPyre4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMtPyre4),
        .party = {.TrainerMon = sParty_GruntMtPyre4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_JAGGED_PASS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntJaggedPass),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntJaggedPass),
        .party = {.TrainerMon = sParty_GruntJaggedPass},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MARC"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Marc),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Marc),
        .party = {.TrainerMon = sParty_Marc},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDEN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("BRENDEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brenden),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Brenden),
        .party = {.TrainerMon = sParty_Brenden},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LILITH] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("LILITH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lilith),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lilith),
        .party = {.TrainerMon = sParty_Lilith},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CRISTIAN] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("CRISTIAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Cristian),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cristian),
        .party = {.TrainerMon = sParty_Cristian},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SYLVIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("SYLVIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sylvia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Sylvia),
        .party = {.TrainerMon = sParty_Sylvia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LEONARDO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("LEONARDO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leonardo),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Leonardo),
        .party = {.TrainerMon = sParty_Leonardo},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ATHENA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ATHENA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Athena),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Athena),
        .party = {.TrainerMon = sParty_Athena},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HARRISON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HARRISON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harrison),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Harrison),
        .party = {.TrainerMon = sParty_Harrison},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMtChimney2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMtChimney2),
        .party = {.TrainerMon = sParty_GruntMtChimney2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CLARENCE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CLARENCE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clarence),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Clarence),
        .party = {.TrainerMon = sParty_Clarence},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TERRY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("TERRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Terry),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Terry),
        .party = {.TrainerMon = sParty_Terry},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NATE] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("NATE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nate),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nate),
        .party = {.TrainerMon = sParty_Nate},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KATHLEEN] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("KATHLEEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kathleen),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kathleen),
        .party = {.TrainerMon = sParty_Kathleen},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CLIFFORD] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("CLIFFORD"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clifford),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Clifford),
        .party = {.TrainerMon = sParty_Clifford},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NICHOLAS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("NICHOLAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicholas),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Nicholas),
        .party = {.TrainerMon = sParty_Nicholas},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter3),
        .party = {.TrainerMon = sParty_GruntSpaceCenter3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter4),
        .party = {.TrainerMon = sParty_GruntSpaceCenter4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter5),
        .party = {.TrainerMon = sParty_GruntSpaceCenter5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter6),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter6),
        .party = {.TrainerMon = sParty_GruntSpaceCenter6},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntSpaceCenter7),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntSpaceCenter7),
        .party = {.TrainerMon = sParty_GruntSpaceCenter7},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MACEY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MACEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Macey),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Macey),
        .party = {.TrainerMon = sParty_Macey},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRustboroTreecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BrendanRustboroTreecko),
        .party = {.TrainerMon = sParty_BrendanRustboroTreecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRustboroMudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_BrendanRustboroMudkip),
        .party = {.TrainerMon = sParty_BrendanRustboroMudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PAXTON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("PAXTON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paxton),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Paxton),
        .party = {.TrainerMon = sParty_Paxton},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISABELLA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ISABELLA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isabella),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isabella),
        .party = {.TrainerMon = sParty_Isabella},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntWeatherInst5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntWeatherInst5),
        .party = {.TrainerMon = sParty_GruntWeatherInst5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TabithaMtChimney),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_TabithaMtChimney),
        .party = {.TrainerMon = sParty_TabithaMtChimney},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JONATHAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("JONATHAN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jonathan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_Jonathan),
        .party = {.TrainerMon = sParty_Jonathan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanRustboroTorchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanRustboroTorchic),
        .party = {.TrainerMon = sParty_BrendanRustboroTorchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRustboroMudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_MayRustboroMudkip),
        .party = {.TrainerMon = sParty_MayRustboroMudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MaxieMagmaHideout),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MaxieMagmaHideout),
        .party = {.TrainerMon = sParty_MaxieMagmaHideout},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MaxieMtChimney),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MaxieMtChimney),
        .party = {.TrainerMon = sParty_MaxieMtChimney},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TIANA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("TIANA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Tiana),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tiana),
        .party = {.TrainerMon = sParty_Tiana},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HALEY_1] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Haley1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Haley1),
        .party = {.TrainerMon = sParty_Haley1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JANICE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("JANICE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Janice),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Janice),
        .party = {.TrainerMon = sParty_Janice},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VIVI] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("VIVI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vivi),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Vivi),
        .party = {.TrainerMon = sParty_Vivi},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HALEY_2] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Haley2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Haley2),
        .party = {.TrainerMon = sParty_Haley2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HALEY_3] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Haley3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Haley3),
        .party = {.TrainerMon = sParty_Haley3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HALEY_4] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Haley4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Haley4),
        .party = {.TrainerMon = sParty_Haley4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HALEY_5] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Haley5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Haley5),
        .party = {.TrainerMon = sParty_Haley5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SALLY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("SALLY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sally),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Sally),
        .party = {.TrainerMon = sParty_Sally},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROBIN] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ROBIN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robin),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Robin),
        .party = {.TrainerMon = sParty_Robin},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANDREA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ANDREA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andrea),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Andrea),
        .party = {.TrainerMon = sParty_Andrea},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CRISSY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("CRISSY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Crissy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Crissy),
        .party = {.TrainerMon = sParty_Crissy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RICK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("RICK"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Rick),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Rick),
        .party = {.TrainerMon = sParty_Rick},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LYLE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("LYLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Lyle),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lyle),
        .party = {.TrainerMon = sParty_Lyle},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOSE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JOSE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Jose),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jose),
        .party = {.TrainerMon = sParty_Jose},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DOUG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DOUG"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Doug),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Doug),
        .party = {.TrainerMon = sParty_Doug},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GREG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("GREG"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Greg),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Greg),
        .party = {.TrainerMon = sParty_Greg},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("KENT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kent),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kent),
        .party = {.TrainerMon = sParty_Kent},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JAMES_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_James1),
        .party = {.TrainerMon = sParty_James1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JAMES_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_James2),
        .party = {.TrainerMon = sParty_James2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JAMES_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_James3),
        .party = {.TrainerMon = sParty_James3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JAMES_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_James4),
        .party = {.TrainerMon = sParty_James4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JAMES_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_James5),
        .party = {.TrainerMon = sParty_James5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRICE] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("BRICE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brice),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Brice),
        .party = {.TrainerMon = sParty_Brice},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TRENT_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Trent1),
        .party = {.TrainerMon = sParty_Trent1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LENNY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LENNY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lenny),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lenny),
        .party = {.TrainerMon = sParty_Lenny},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LUCAS_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lucas1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lucas1),
        .party = {.TrainerMon = sParty_Lucas1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ALAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Alan),
        .party = {.TrainerMon = sParty_Alan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CLARK] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("CLARK"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Clark),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Clark),
        .party = {.TrainerMon = sParty_Clark},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ERIC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ERIC"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eric),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Eric),
        .party = {.TrainerMon = sParty_Eric},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LUCAS_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Lucas2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lucas2),
        .party = {.TrainerMon = sParty_Lucas2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MIKE_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Mike1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Mike1),
        .party = {.TrainerMon = sParty_Mike1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MIKE_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mike2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Mike2),
        .party = {.TrainerMon = sParty_Mike2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TRENT_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Trent2),
        .party = {.TrainerMon = sParty_Trent2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TRENT_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Trent3),
        .party = {.TrainerMon = sParty_Trent3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TRENT_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Trent4),
        .party = {.TrainerMon = sParty_Trent4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TRENT_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trent5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Trent5),
        .party = {.TrainerMon = sParty_Trent5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DEZ_AND_LUKE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("DEZ & LUKE"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_DezAndLuke),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_DezAndLuke),
        .party = {.TrainerMon = sParty_DezAndLuke},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LEA_AND_JED] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("LEA & JED"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaAndJed),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LeaAndJed),
        .party = {.TrainerMon = sParty_LeaAndJed},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KIRA_AND_DAN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan1),
        .party = {.TrainerMon = sParty_KiraAndDan1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KIRA_AND_DAN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan2),
        .party = {.TrainerMon = sParty_KiraAndDan2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KIRA_AND_DAN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan3),
        .party = {.TrainerMon = sParty_KiraAndDan3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KIRA_AND_DAN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan4),
        .party = {.TrainerMon = sParty_KiraAndDan4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KIRA_AND_DAN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_KiraAndDan5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KiraAndDan5),
        .party = {.TrainerMon = sParty_KiraAndDan5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOHANNA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JOHANNA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Johanna),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Johanna),
        .party = {.TrainerMon = sParty_Johanna},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GERALD] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("GERALD"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Gerald),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Gerald),
        .party = {.TrainerMon = sParty_Gerald},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_VIVIAN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("VIVIAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Vivian),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Vivian),
        .party = {.TrainerMon = sParty_Vivian},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DANIELLE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("DANIELLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Danielle),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Danielle),
        .party = {.TrainerMon = sParty_Danielle},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HIDEO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("HIDEO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Hideo),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_Hideo),
        .party = {.TrainerMon = sParty_Hideo},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KEIGO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("KEIGO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Keigo),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_Keigo),
        .party = {.TrainerMon = sParty_Keigo},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RILEY] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("RILEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Riley),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = ARRAY_COUNT(sParty_Riley),
        .party = {.TrainerMon = sParty_Riley},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FLINT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("FLINT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Flint),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Flint),
        .party = {.TrainerMon = sParty_Flint},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ASHLEY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ASHLEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ashley),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Ashley),
        .party = {.TrainerMon = sParty_Ashley},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALLY_MAUVILLE] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_WallyMauville),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_WallyMauville),
        .party = {.TrainerMon = sParty_WallyMauville},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALLY_VR_2] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_WallyVR2),
        .party = {.TrainerMon = sParty_WallyVR2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALLY_VR_3] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_WallyVR3),
        .party = {.TrainerMon = sParty_WallyVR3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALLY_VR_4] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_WallyVR4),
        .party = {.TrainerMon = sParty_WallyVR4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WALLY_VR_5] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_WallyVR5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_WallyVR5),
        .party = {.TrainerMon = sParty_WallyVR5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanLilycoveMudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanLilycoveMudkip),
        .party = {.TrainerMon = sParty_BrendanLilycoveMudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanLilycoveTreecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanLilycoveTreecko),
        .party = {.TrainerMon = sParty_BrendanLilycoveTreecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanLilycoveTorchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_BrendanLilycoveTorchic),
        .party = {.TrainerMon = sParty_BrendanLilycoveTorchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayLilycoveMudkip),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayLilycoveMudkip),
        .party = {.TrainerMon = sParty_MayLilycoveMudkip},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayLilycoveTreecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayLilycoveTreecko),
        .party = {.TrainerMon = sParty_MayLilycoveTreecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayLilycoveTorchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayLilycoveTorchic),
        .party = {.TrainerMon = sParty_MayLilycoveTorchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JONAH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("JONAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jonah),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jonah),
        .party = {.TrainerMon = sParty_Jonah},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HENRY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("HENRY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Henry),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Henry),
        .party = {.TrainerMon = sParty_Henry},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROGER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ROGER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roger),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Roger),
        .party = {.TrainerMon = sParty_Roger},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALEXA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ALEXA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alexa),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Alexa),
        .party = {.TrainerMon = sParty_Alexa},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RUBEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("RUBEN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ruben),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Ruben),
        .party = {.TrainerMon = sParty_Ruben},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KOJI_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Koji1),
        .party = {.TrainerMon = sParty_Koji1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WAYNE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("WAYNE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wayne),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Wayne),
        .party = {.TrainerMon = sParty_Wayne},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AIDAN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("AIDAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Aidan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Aidan),
        .party = {.TrainerMon = sParty_Aidan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_REED] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("REED"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Reed),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Reed),
        .party = {.TrainerMon = sParty_Reed},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TISHA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TISHA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tisha),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tisha),
        .party = {.TrainerMon = sParty_Tisha},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TORI_AND_TIA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("TORI & TIA"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ToriAndTia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ToriAndTia),
        .party = {.TrainerMon = sParty_ToriAndTia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KIM_AND_IRIS] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("KIM & IRIS"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_KimAndIris),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_KimAndIris),
        .party = {.TrainerMon = sParty_KimAndIris},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TYRA_AND_IVY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("TYRA & IVY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_TyraAndIvy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_TyraAndIvy),
        .party = {.TrainerMon = sParty_TyraAndIvy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MEL_AND_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("MEL & PAUL"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_MelAndPaul),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_MelAndPaul),
        .party = {.TrainerMon = sParty_MelAndPaul},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOHN_AND_JAY_1] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay1),
        .party = {.TrainerMon = sParty_JohnAndJay1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOHN_AND_JAY_2] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay2),
        .party = {.TrainerMon = sParty_JohnAndJay2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOHN_AND_JAY_3] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay3),
        .party = {.TrainerMon = sParty_JohnAndJay3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOHN_AND_JAY_4] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay4),
        .party = {.TrainerMon = sParty_JohnAndJay4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOHN_AND_JAY_5] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JohnAndJay5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_JohnAndJay5),
        .party = {.TrainerMon = sParty_JohnAndJay5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RELI_AND_IAN] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("RELI & IAN"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ReliAndIan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_ReliAndIan),
        .party = {.TrainerMon = sParty_ReliAndIan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LILA_AND_ROY_1] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy1),
        .party = {.TrainerMon = sParty_LilaAndRoy1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LILA_AND_ROY_2] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy2),
        .party = {.TrainerMon = sParty_LilaAndRoy2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LILA_AND_ROY_3] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy3),
        .party = {.TrainerMon = sParty_LilaAndRoy3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LILA_AND_ROY_4] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy4),
        .party = {.TrainerMon = sParty_LilaAndRoy4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LILA_AND_ROY_5] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LilaAndRoy5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LilaAndRoy5),
        .party = {.TrainerMon = sParty_LilaAndRoy5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LISA_AND_RAY] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LISA & RAY"),
        .items = {},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LisaAndRay),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_LisaAndRay),
        .party = {.TrainerMon = sParty_LisaAndRay},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CHRIS] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CHRIS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chris),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Chris),
        .party = {.TrainerMon = sParty_Chris},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DAWSON] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("DAWSON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Dawson),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dawson),
        .party = {.TrainerMon = sParty_Dawson},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SARAH] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("SARAH"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Sarah),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Sarah),
        .party = {.TrainerMon = sParty_Sarah},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DARIAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("DARIAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darian),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Darian),
        .party = {.TrainerMon = sParty_Darian},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HAILEY] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("HAILEY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Hailey),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Hailey),
        .party = {.TrainerMon = sParty_Hailey},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CHANDLER] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("CHANDLER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Chandler),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Chandler),
        .party = {.TrainerMon = sParty_Chandler},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KALEB] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("KALEB"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Kaleb),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kaleb),
        .party = {.TrainerMon = sParty_Kaleb},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOSEPH] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("JOSEPH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE | AI_FLAG_WILL_SUICIDE,
        .party = ITEM_CUSTOM_MOVES(sParty_Joseph),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Joseph),
        .party = {.TrainerMon = sParty_Joseph},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALYSSA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ALYSSA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Alyssa),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Alyssa),
        .party = {.TrainerMon = sParty_Alyssa},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARCOS] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("MARCOS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marcos),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Marcos),
        .party = {.TrainerMon = sParty_Marcos},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RHETT] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("RHETT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rhett),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Rhett),
        .party = {.TrainerMon = sParty_Rhett},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TYRON] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("TYRON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tyron),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Tyron),
        .party = {.TrainerMon = sParty_Tyron},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CELINA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("CELINA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Celina),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Celina),
        .party = {.TrainerMon = sParty_Celina},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BIANCA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BIANCA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bianca),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bianca),
        .party = {.TrainerMon = sParty_Bianca},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HAYDEN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("HAYDEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hayden),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Hayden),
        .party = {.TrainerMon = sParty_Hayden},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SOPHIE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("SOPHIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sophie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Sophie),
        .party = {.TrainerMon = sParty_Sophie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_COBY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("COBY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Coby),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Coby),
        .party = {.TrainerMon = sParty_Coby},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LAWRENCE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LAWRENCE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lawrence),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Lawrence),
        .party = {.TrainerMon = sParty_Lawrence},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WYATT] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("WYATT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wyatt),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Wyatt),
        .party = {.TrainerMon = sParty_Wyatt},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANGELINA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ANGELINA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Angelina),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Angelina),
        .party = {.TrainerMon = sParty_Angelina},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KAI] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("KAI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kai),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kai),
        .party = {.TrainerMon = sParty_Kai},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CHARLOTTE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CHARLOTTE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Charlotte),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Charlotte),
        .party = {.TrainerMon = sParty_Charlotte},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DEANDRE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DEANDRE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Deandre),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Deandre),
        .party = {.TrainerMon = sParty_Deandre},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout1),
        .party = {.TrainerMon = sParty_GruntMagmaHideout1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout2),
        .party = {.TrainerMon = sParty_GruntMagmaHideout2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout3),
        .party = {.TrainerMon = sParty_GruntMagmaHideout3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout4),
        .party = {.TrainerMon = sParty_GruntMagmaHideout4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout5),
        .party = {.TrainerMon = sParty_GruntMagmaHideout5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout6),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout6),
        .party = {.TrainerMon = sParty_GruntMagmaHideout6},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout7),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout7),
        .party = {.TrainerMon = sParty_GruntMagmaHideout7},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout8),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout8),
        .party = {.TrainerMon = sParty_GruntMagmaHideout8},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout9),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout9),
        .party = {.TrainerMon = sParty_GruntMagmaHideout9},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout10),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout10),
        .party = {.TrainerMon = sParty_GruntMagmaHideout10},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout11),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout11),
        .party = {.TrainerMon = sParty_GruntMagmaHideout11},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout12),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout12),
        .party = {.TrainerMon = sParty_GruntMagmaHideout12},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout13),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout13),
        .party = {.TrainerMon = sParty_GruntMagmaHideout13},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout14),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout14),
        .party = {.TrainerMon = sParty_GruntMagmaHideout14},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout15),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout15),
        .party = {.TrainerMon = sParty_GruntMagmaHideout15},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GruntMagmaHideout16),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_GruntMagmaHideout16),
        .party = {.TrainerMon = sParty_GruntMagmaHideout16},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TabithaMagmaHideout),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_TabithaMagmaHideout),
        .party = {.TrainerMon = sParty_TabithaMagmaHideout},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DARCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DARCY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darcy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Darcy),
        .party = {.TrainerMon = sParty_Darcy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAXIE_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MaxieMossdeep),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MaxieMossdeep),
        .party = {.TrainerMon = sParty_MaxieMossdeep},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PETE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("PETE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pete),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Pete),
        .party = {.TrainerMon = sParty_Pete},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ISABELLE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ISABELLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Isabelle),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Isabelle),
        .party = {.TrainerMon = sParty_Isabelle},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANDRES_1] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Andres1),
        .party = {.TrainerMon = sParty_Andres1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOSUE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("JOSUE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Josue),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Josue),
        .party = {.TrainerMon = sParty_Josue},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAMRON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CAMRON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Camron),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Camron),
        .party = {.TrainerMon = sParty_Camron},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CORY_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cory1),
        .party = {.TrainerMon = sParty_Cory1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CAROLINA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CAROLINA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carolina),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Carolina),
        .party = {.TrainerMon = sParty_Carolina},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ELIJAH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ELIJAH"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elijah),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Elijah),
        .party = {.TrainerMon = sParty_Elijah},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CELIA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CELIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Celia),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Celia),
        .party = {.TrainerMon = sParty_Celia},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRYAN] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("BRYAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bryan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bryan),
        .party = {.TrainerMon = sParty_Bryan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRANDEN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("BRANDEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Branden),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Branden),
        .party = {.TrainerMon = sParty_Branden},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRYANT] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BRYANT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bryant),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Bryant),
        .party = {.TrainerMon = sParty_Bryant},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SHAYLA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("SHAYLA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shayla),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Shayla),
        .party = {.TrainerMon = sParty_Shayla},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KYRA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("KYRA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kyra),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Kyra),
        .party = {.TrainerMon = sParty_Kyra},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JAIDEN] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("JAIDEN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaiden),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Jaiden),
        .party = {.TrainerMon = sParty_Jaiden},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALIX] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("ALIX"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alix),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Alix),
        .party = {.TrainerMon = sParty_Alix},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_HELENE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("HELENE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Helene),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Helene),
        .party = {.TrainerMon = sParty_Helene},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARLENE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MARLENE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marlene),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Marlene),
        .party = {.TrainerMon = sParty_Marlene},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DEVAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("DEVAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Devan),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Devan),
        .party = {.TrainerMon = sParty_Devan},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JOHNSON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JOHNSON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_HP_AWARE,
        .party = ITEM_CUSTOM_MOVES(sParty_Johnson),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Johnson),
        .party = {.TrainerMon = sParty_Johnson},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MELINA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MELINA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Melina),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Melina),
        .party = {.TrainerMon = sParty_Melina},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRANDI] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("BRANDI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandi),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Brandi),
        .party = {.TrainerMon = sParty_Brandi},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_AISHA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("AISHA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Aisha),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Aisha),
        .party = {.TrainerMon = sParty_Aisha},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAKAYLA] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("MAKAYLA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Makayla),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Makayla),
        .party = {.TrainerMon = sParty_Makayla},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FABIAN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FABIAN"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fabian),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Fabian),
        .party = {.TrainerMon = sParty_Fabian},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DAYTON] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("DAYTON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dayton),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Dayton),
        .party = {.TrainerMon = sParty_Dayton},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RACHEL] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("RACHEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rachel),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Rachel),
        .party = {.TrainerMon = sParty_Rachel},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LEONEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("LEONEL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Leonel),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Leonel),
        .party = {.TrainerMon = sParty_Leonel},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CALLIE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CALLIE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Callie),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Callie),
        .party = {.TrainerMon = sParty_Callie},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CALE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("CALE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cale),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cale),
        .party = {.TrainerMon = sParty_Cale},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MYLES] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("MYLES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Myles),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Myles),
        .party = {.TrainerMon = sParty_Myles},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PAT] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("PAT"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pat),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Pat),
        .party = {.TrainerMon = sParty_Pat},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CRISTIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin1),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Cristin1),
        .party = {.TrainerMon = sParty_Cristin1},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRustboroTreecko),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRustboroTreecko),
        .party = {.TrainerMon = sParty_MayRustboroTreecko},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayRustboroTorchic),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_MayRustboroTorchic),
        .party = {.TrainerMon = sParty_MayRustboroTorchic},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROXANNE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Roxanne2),
        .party = {.TrainerMon = sParty_Roxanne2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROXANNE_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Roxanne3),
        .party = {.TrainerMon = sParty_Roxanne3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROXANNE_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Roxanne4),
        .party = {.TrainerMon = sParty_Roxanne4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ROXANNE_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Roxanne5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Roxanne5),
        .party = {.TrainerMon = sParty_Roxanne5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRAWLY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brawly2),
        .party = {.TrainerMon = sParty_Brawly2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRAWLY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brawly3),
        .party = {.TrainerMon = sParty_Brawly3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRAWLY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brawly4),
        .party = {.TrainerMon = sParty_Brawly4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRAWLY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brawly5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brawly5),
        .party = {.TrainerMon = sParty_Brawly5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WATTSON_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wattson2),
        .party = {.TrainerMon = sParty_Wattson2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WATTSON_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wattson3),
        .party = {.TrainerMon = sParty_Wattson3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WATTSON_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wattson4),
        .party = {.TrainerMon = sParty_Wattson4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WATTSON_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Wattson5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Wattson5),
        .party = {.TrainerMon = sParty_Wattson5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FLANNERY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Flannery2),
        .party = {.TrainerMon = sParty_Flannery2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FLANNERY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Flannery3),
        .party = {.TrainerMon = sParty_Flannery3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FLANNERY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Flannery4),
        .party = {.TrainerMon = sParty_Flannery4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FLANNERY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Flannery5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Flannery5),
        .party = {.TrainerMon = sParty_Flannery5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NORMAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Norman2),
        .party = {.TrainerMon = sParty_Norman2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NORMAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Norman3),
        .party = {.TrainerMon = sParty_Norman3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NORMAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Norman4),
        .party = {.TrainerMon = sParty_Norman4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NORMAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Norman5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Norman5),
        .party = {.TrainerMon = sParty_Norman5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINONA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .partySize = ARRAY_COUNT(sParty_Winona2),
        .party = {.TrainerMon = sParty_Winona2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINONA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .partySize = ARRAY_COUNT(sParty_Winona3),
        .party = {.TrainerMon = sParty_Winona3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINONA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .partySize = ARRAY_COUNT(sParty_Winona4),
        .party = {.TrainerMon = sParty_Winona4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_WINONA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = ITEM_CUSTOM_MOVES(sParty_Winona5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .partySize = ARRAY_COUNT(sParty_Winona5),
        .party = {.TrainerMon = sParty_Winona5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TATE_AND_LIZA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza2),
        .party = {.TrainerMon = sParty_TateAndLiza2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TATE_AND_LIZA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza3),
        .party = {.TrainerMon = sParty_TateAndLiza3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TATE_AND_LIZA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza4),
        .party = {.TrainerMon = sParty_TateAndLiza4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TATE_AND_LIZA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_TateAndLiza5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_TateAndLiza5),
        .party = {.TrainerMon = sParty_TateAndLiza5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JUAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Juan2),
        .party = {.TrainerMon = sParty_Juan2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JUAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Juan3),
        .party = {.TrainerMon = sParty_Juan3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JUAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Juan4),
        .party = {.TrainerMon = sParty_Juan4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_JUAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Juan5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Juan5),
        .party = {.TrainerMon = sParty_Juan5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANGELO] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("ANGELO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Angelo),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Angelo),
        .party = {.TrainerMon = sParty_Angelo},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_DARIUS] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("DARIUS"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darius),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Darius),
        .party = {.TrainerMon = sParty_Darius},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_STEVEN] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_STEVEN,
        .trainerName = _("STEVEN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Steven),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Steven),
        .party = {.TrainerMon = sParty_Steven},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANABEL] =
    {
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .trainerName = _("ANABEL"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anabel),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Anabel),
        .party = {.TrainerMon = sParty_Anabel},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_TUCKER] =
    {
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("TUCKER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tucker),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Tucker),
        .party = {.TrainerMon = sParty_Tucker},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SPENSER] =
    {
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .trainerName = _("SPENSER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Spenser),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Spenser),
        .party = {.TrainerMon = sParty_Spenser},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GRETA] =
    {
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("GRETA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Greta),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Greta),
        .party = {.TrainerMon = sParty_Greta},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_NOLAND] =
    {
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("NOLAND"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Noland),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Noland),
        .party = {.TrainerMon = sParty_Noland},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LUCY] =
    {
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("LUCY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lucy),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Lucy),
        .party = {.TrainerMon = sParty_Lucy},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRANDON] =
    {
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("BRANDON"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandon),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Brandon),
        .party = {.TrainerMon = sParty_Brandon},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANDRES_2] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Andres2),
        .party = {.TrainerMon = sParty_Andres2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANDRES_3] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Andres3),
        .party = {.TrainerMon = sParty_Andres3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANDRES_4] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Andres4),
        .party = {.TrainerMon = sParty_Andres4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ANDRES_5] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andres5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Andres5),
        .party = {.TrainerMon = sParty_Andres5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CORY_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cory2),
        .party = {.TrainerMon = sParty_Cory2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CORY_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cory3),
        .party = {.TrainerMon = sParty_Cory3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CORY_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cory4),
        .party = {.TrainerMon = sParty_Cory4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CORY_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cory5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Cory5),
        .party = {.TrainerMon = sParty_Cory5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PABLO_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Pablo2),
        .party = {.TrainerMon = sParty_Pablo2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PABLO_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Pablo3),
        .party = {.TrainerMon = sParty_Pablo3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PABLO_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Pablo4),
        .party = {.TrainerMon = sParty_Pablo4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_PABLO_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pablo5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Pablo5),
        .party = {.TrainerMon = sParty_Pablo5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KOJI_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Koji2),
        .party = {.TrainerMon = sParty_Koji2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KOJI_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Koji3),
        .party = {.TrainerMon = sParty_Koji3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KOJI_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Koji4),
        .party = {.TrainerMon = sParty_Koji4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_KOJI_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Koji5),
        .party = {.TrainerMon = sParty_Koji5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CRISTIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Cristin2),
        .party = {.TrainerMon = sParty_Cristin2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CRISTIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Cristin3),
        .party = {.TrainerMon = sParty_Cristin3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CRISTIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Cristin4),
        .party = {.TrainerMon = sParty_Cristin4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_CRISTIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cristin5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Cristin5),
        .party = {.TrainerMon = sParty_Cristin5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FERNANDO_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Fernando2),
        .party = {.TrainerMon = sParty_Fernando2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FERNANDO_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Fernando3),
        .party = {.TrainerMon = sParty_Fernando3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FERNANDO_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Fernando4),
        .party = {.TrainerMon = sParty_Fernando4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_FERNANDO_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fernando5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Fernando5),
        .party = {.TrainerMon = sParty_Fernando5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SAWYER_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Sawyer2),
        .party = {.TrainerMon = sParty_Sawyer2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SAWYER_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Sawyer3),
        .party = {.TrainerMon = sParty_Sawyer3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SAWYER_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Sawyer4),
        .party = {.TrainerMon = sParty_Sawyer4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_SAWYER_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .partySize = ARRAY_COUNT(sParty_Sawyer5),
        .party = {.TrainerMon = sParty_Sawyer5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABRIELLE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Gabrielle2),
        .party = {.TrainerMon = sParty_Gabrielle2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABRIELLE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Gabrielle3),
        .party = {.TrainerMon = sParty_Gabrielle3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABRIELLE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Gabrielle4),
        .party = {.TrainerMon = sParty_Gabrielle4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_GABRIELLE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gabrielle5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Gabrielle5),
        .party = {.TrainerMon = sParty_Gabrielle5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_THALIA_2] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia2),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Thalia2),
        .party = {.TrainerMon = sParty_Thalia2},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_THALIA_3] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia3),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Thalia3),
        .party = {.TrainerMon = sParty_Thalia3},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_THALIA_4] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia4),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Thalia4),
        .party = {.TrainerMon = sParty_Thalia4},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_THALIA_5] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .doubleBattle = FALSE,
<<<<<<< HEAD
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thalia5),
=======
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = ARRAY_COUNT(sParty_Thalia5),
        .party = {.TrainerMon = sParty_Thalia5},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MARIELA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MARIELA"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mariela),
=======
        .partySize = ARRAY_COUNT(sParty_Mariela),
        .party = {.TrainerMon = sParty_Mariela},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_ALVARO] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("ALVARO"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alvaro),
=======
        .partySize = ARRAY_COUNT(sParty_Alvaro),
        .party = {.TrainerMon = sParty_Alvaro},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_EVERETT] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("EVERETT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Everett),
=======
        .partySize = ARRAY_COUNT(sParty_Everett),
        .party = {.TrainerMon = sParty_Everett},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_RED] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("RED"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Red),
=======
        .partySize = ARRAY_COUNT(sParty_Red),
        .party = {.TrainerMon = sParty_Red},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_LEAF] =
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
        .trainerClass = TRAINER_CLASS_RIVAL,
=======
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEAF,
        .trainerName = _("LEAF"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leaf),
=======
        .partySize = ARRAY_COUNT(sParty_Leaf),
        .party = {.TrainerMon = sParty_Leaf},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .trainerName = _("BRENDAN"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BrendanLinkPlaceholder),
=======
        .partySize = ARRAY_COUNT(sParty_BrendanLinkPlaceholder),
        .party = {.TrainerMon = sParty_BrendanLinkPlaceholder},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },

    [TRAINER_MAY_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("MAY"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
<<<<<<< HEAD
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MayLinkPlaceholder),
=======
        .partySize = ARRAY_COUNT(sParty_MayLinkPlaceholder),
        .party = {.TrainerMon = sParty_MayLinkPlaceholder},
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
=======
>>>>>>> a1d38183f593b720ec7a375006b22eb90ec03bf1
    },
};
