#include "gb_rom_values/gb_rom_values.h"

const struct GB_ROM gb_rom_values_jpn[] = {
      {// JPN_GOLD
     .language = JPN_ID,
     .version = GOLD_ID,
     .generation = 2,
     .method = METHOD_GEN2,
     .payload_size = 672,
     .box_data_size = 0x44E,

     .print_string_start = 0xC442, //This might be the same
     .stack_overwrite_location = 0xDFCD, // Found by seeing where 75B8 is stored in the stack, 75B8 is the code that calls PlaceString
     .short_pkmn_name = 0x4E,
     .pointer_pkmn_name = 0,
     .padding_1 = 0,

     .clearScreen = 0x000EB4, //Shifted
     .CableClub_TextBoxBorder = 0x0A4D8E, // LinkTextboxAtHL shifted
     .placeString = 0x000F46, //Shifted
     .Serial_ExchangeBytes = 0x070F, //Shifted
     ._RemovePokemon = 0x0362E2, // RemoveMonFromPartyOrBox Shifted
     .SaveSAVtoSRAM1 = 0,
     .SaveSAVtoSRAM2 = 0,
     .LoadCurrentBoxData = 0,
     .OpenSRAM = 0x00309D, //Shifted
     .SaveBox = 0x054D88, //Shifted
     .Bankswitch = 0,
     .SoftReset = 0x05AF, //Why tf did this shift?!?
     .CloseSRAM = 0,
     .garbageDataLocation = 0x0654, //Should be the same

     .wRemoveMonFromBox = 0x01D002,   // wPokemonWithdrawDepositParameter Shifted
     .wBoxCount = 0x01AD10,           // sBoxCount Shifted same as english crystal lol
     .wWhichPokemon = 0x01CFFF,       // wCurPartyMon Omega shift from D005 may need to recheck EDIT: yup it`s that shifted.
     .wBoxDataStart = 0xAD10,         // sBoxStart assume same as Crystal Shifted from AD6C
     .wBoxDataEnd = 0xB15E,           // sBoxEnd  assume same as Crystal Shifted from B1BA
     .wSerialEnemyDataBlock = 0xDDB1, // wOTPartyData Shifted from DD40
     .wEnemyMonSpecies = 0x01D0E1,

     .wSerialEnemyMonsPatchList = 0xC5D0,                // wOTPatchLists No shift same
     .wSerialOtherGameboyRandomNumberListBlock = 0xD0E1, // wOTLinkBattleRNData Shifted from 0a:D0EF
     .hSerialConnectionStatus = 0xFFCD, // No shift

     .transferStringLocation = 0xC444, //Maybe also same
     .textBorderUppLeft = 0xC42F, //Transfer string no shift so probably no shift we will test
     .textBorderWidth = 12,
     .textBorderHeight = 1,
     .padding_2 = 0},
    {// JPN_SILVER
     .language = JPN_ID,
     .version = SILVER_ID,
     .generation = 2,
     .method = METHOD_GEN2,
     .payload_size = 672,
     .box_data_size = 0x44E,

     .print_string_start = 0xC442, //This might be the same
     .stack_overwrite_location = 0xDFCD, // Found by seeing where 75B8 is stored in the stack, 75B8 is the code that calls PlaceString
     .short_pkmn_name = 0x4E,
     .pointer_pkmn_name = 0,
     .padding_1 = 0,

     .clearScreen = 0x000EB4, //Shifted
     .CableClub_TextBoxBorder = 0x0A4D8E, // LinkTextboxAtHL shifted
     .placeString = 0x000F46, //Shifted
     .Serial_ExchangeBytes = 0x070F, //Shifted
     ._RemovePokemon = 0x0362E2, // RemoveMonFromPartyOrBox Shifted
     .SaveSAVtoSRAM1 = 0,
     .SaveSAVtoSRAM2 = 0,
     .LoadCurrentBoxData = 0,
     .OpenSRAM = 0x00309D, //Shifted
     .SaveBox = 0x054D88, //Shifted
     .Bankswitch = 0,
     .SoftReset = 0x05AF, //Why tf did this shift?!?
     .CloseSRAM = 0,
     .garbageDataLocation = 0x0654, //Should be the same

     .wRemoveMonFromBox = 0x01D002,   // wPokemonWithdrawDepositParameter Shifted
     .wBoxCount = 0x01AD10,           // sBoxCount Shifted same as english crystal lol
     .wWhichPokemon = 0x01CFFF,       // wCurPartyMon Omega shift from D005 may need to recheck EDIT: yup it`s that shifted.
     .wBoxDataStart = 0xAD10,         // sBoxStart assume same as Crystal Shifted from AD6C
     .wBoxDataEnd = 0xB15E,           // sBoxEnd  assume same as Crystal Shifted from B1BA
     .wSerialEnemyDataBlock = 0xDDB1, // wOTPartyData Shifted from DD40
     .wEnemyMonSpecies = 0x01D0E1,

     .wSerialEnemyMonsPatchList = 0xC5D0,                // wOTPatchLists No shift same
     .wSerialOtherGameboyRandomNumberListBlock = 0xD0E1, // wOTLinkBattleRNData Shifted from 0a:D0EF
     .hSerialConnectionStatus = 0xFFCD, // No shift

     .transferStringLocation = 0xC444, //Maybe also same
     .textBorderUppLeft = 0xC42F, //Transfer string no shift so probably no shift we will test
     .textBorderWidth = 12,
     .textBorderHeight = 1,
     .padding_2 = 0},
    {// JPN_CRYSTAL
     .language = JPN_ID,
     .version = CRYSTAL_ID,
     .generation = 2,
     .method = METHOD_GEN2,
     .payload_size = 672,
     .box_data_size = 0x44E, // not known but probably same

     .print_string_start = 0xC4C0, //Shifted from C4B7 or C4C0
     .stack_overwrite_location = 0xC0BB, // Found by seeing where  765D is stored in the stack,  765D is the code that calls PlaceString (PlaceTradePartnerNamesAndParty). if you want to find this look at SP value could be C0BD
     .short_pkmn_name = 0x4E,
     .pointer_pkmn_name = 0,
     .padding_1 = 0,
     
     .clearScreen = 0x000FB2, // shifted
     .CableClub_TextBoxBorder = 0x0A4E80, // LinkTextboxAtHL mega shifted 
     .placeString = 0x001057, // shifted
     .Serial_ExchangeBytes = 0x075F, //Same as eng lol
     ._RemovePokemon = 0x03628E, // RemoveMonFromPartyOrBox shifted
     .SaveSAVtoSRAM1 = 0,
     .SaveSAVtoSRAM2 = 0,
     .LoadCurrentBoxData = 0,
     .OpenSRAM = 0x002F9D, // shifted
     .SaveBox = 0x054DEE, //shifted 
     .Bankswitch = 0,
     .SoftReset = 0x0150, // Reset same
     .CloseSRAM = 0, // Not needed but it is 0x02FAD
     .garbageDataLocation = 0x0770, //same

     .wRemoveMonFromBox = 0x01D0CB,   // wPokemonWithdrawDepositParameter MONSTER shift
     .wBoxCount = 0x01AD10,           // sBoxCount Shifted
     .wWhichPokemon = 0x01D0C9,       // wCurPartyMon shifted
     .wBoxDataStart = 0x01AD10,       // sBox  probably the same
     .wBoxDataEnd = 0x01B15E,         // sBoxEnd  probably the same
     .wSerialEnemyDataBlock = 0xD29C, // wOTPartyData shifted 
     .wEnemyMonSpecies = 0x01D237, //No idea what this is supposed to be going to assume it is wOTLinkBattleRNData?

     .wSerialEnemyMonsPatchList = 0xC6D0,                // wOTPatchLists same no shift!
     .wSerialOtherGameboyRandomNumberListBlock = 0xD237, // wOTLinkBattleRNData shifted
     .hSerialConnectionStatus = 0xFFCB, // same!

     .transferStringLocation = 0xC4B7, //Shifted
     .textBorderUppLeft = 0xC4B4, // transfer string shifted so yea this shifted too 
     .textBorderWidth = 12,
     .textBorderHeight = 1,
     .padding_2 = 0}};

const u16 gb_rom_values_jpn_size = static_cast<u16>(sizeof(gb_rom_values_jpn) / sizeof(struct GB_ROM));
