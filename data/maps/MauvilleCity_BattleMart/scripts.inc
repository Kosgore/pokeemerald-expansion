MauvilleCity_BattleMart_MapScripts::
	.byte 0


MauvilleCity_BattleMart_Employee::
	lock
	faceplayer
	message MauvilleCity_BattleMart_Employee_Text_0
	waitmessage
	pokemart MauvilleCity_BattleMart
	msgbox MauvilleCity_BattleMart_Employee_Text_1
	release
	end

MauvilleCity_BattleMart_BerryGirl::
	lock
	faceplayer
	message MauvilleCity_BattleMart_BerryGirl_Text_0
	waitmessage
	pokemart MauvilleCity_BerryMart
	msgbox MauvilleCity_BattleMart_BerryGirl_Text_1
	release
	end

MauvilleCity_BattleMart_Chud::
	lock
	faceplayer
	message MauvilleCity_BattleMart_Chud_Text_0
	waitmessage
	pokemart MauvilleCity_GemMart
	msgbox MauvilleCity_BattleMart_Chud_Text_1
	release
	end

MauvilleCity_BattleMart_TMDealer::
	lock
	faceplayer
	message MauvilleCity_BattleMart_TMDealer_Text_0
	waitmessage
	pokemart MauvilleCity_TMMart
	msgbox MauvilleCity_BattleMart_TMDealer_Text_1
	release
	end

.align 2
MauvilleCity_BattleMart::
    .2byte ITEM_CHOICE_BAND
    .2byte ITEM_CHOICE_SPECS
    .2byte ITEM_CHOICE_SCARF
	.2byte ITEM_ASSAULT_VEST
    .2byte ITEM_FLAME_ORB
    .2byte ITEM_TOXIC_ORB
    .2byte ITEM_LIFE_ORB
    .2byte ITEM_EVIOLITE
    .2byte ITEM_WEAKNESS_POLICY
    .2byte ITEM_BLUNDER_POLICY    
    .2byte ITEM_ROCKY_HELMET    
    .2byte ITEM_LEFTOVERS
    .2byte ITEM_BLACK_SLUDGE
    .2byte ITEM_CLEAR_AMULET
    .2byte ITEM_COVERT_CLOAK
    .2byte ITEM_QUICK_CLAW
    .2byte ITEM_HEART_SCALE
    .2byte ITEM_ABILITY_CAPSULE
    .2byte ITEM_ABILITY_PATCH 
    .2byte ITEM_NONE
    release
    end

.align 2
MauvilleCity_BerryMart::
    .2byte ITEM_BABIRI_BERRY
    .2byte ITEM_CHARTI_BERRY
    .2byte ITEM_CHILAN_BERRY
    .2byte ITEM_CHOPLE_BERRY
    .2byte ITEM_HABAN_BERRY
    .2byte ITEM_COBA_BERRY
    .2byte ITEM_COLBUR_BERRY
    .2byte ITEM_KASIB_BERRY
    .2byte ITEM_KEBIA_BERRY
    .2byte ITEM_OCCA_BERRY
    .2byte ITEM_PASSHO_BERRY
    .2byte ITEM_PAYAPA_BERRY
    .2byte ITEM_RINDO_BERRY
    .2byte ITEM_ROSELI_BERRY
    .2byte ITEM_SHUCA_BERRY
    .2byte ITEM_TANGA_BERRY
    .2byte ITEM_WACAN_BERRY
    .2byte ITEM_YACHE_BERRY 
    .2byte ITEM_NONE
    release
    end

.align 2
MauvilleCity_GemMart::
    .2byte ITEM_NORMAL_GEM
    .2byte ITEM_FIRE_GEM
    .2byte ITEM_WATER_GEM
    .2byte ITEM_ELECTRIC_GEM
    .2byte ITEM_GRASS_GEM
    .2byte ITEM_ICE_GEM
    .2byte ITEM_FIGHTING_GEM
    .2byte ITEM_POISON_GEM
    .2byte ITEM_GROUND_GEM
    .2byte ITEM_FLYING_GEM
    .2byte ITEM_PSYCHIC_GEM
    .2byte ITEM_BUG_GEM
    .2byte ITEM_ROCK_GEM
    .2byte ITEM_GHOST_GEM
    .2byte ITEM_DRAGON_GEM
    .2byte ITEM_DARK_GEM
    .2byte ITEM_STEEL_GEM
    .2byte ITEM_FAIRY_GEM
    .2byte ITEM_NONE
    release
    end

.align 2
MauvilleCity_TMMart::
    .2byte ITEM_TM55
    .2byte ITEM_TM_PROTECT
    .2byte ITEM_TM_FLAMETHROWER
    .2byte ITEM_TM53
    .2byte ITEM_TM98
    .2byte ITEM_TM54
    .2byte ITEM_TM_THUNDERBOLT
    .2byte ITEM_TM86
    .2byte ITEM_TM52
    .2byte ITEM_TM51
    .2byte ITEM_TM_BRICK_BREAK
    .2byte ITEM_TM_SLUDGE_BOMB
    .2byte ITEM_TM84
    .2byte ITEM_TM_AERIAL_ACE
    .2byte ITEM_TM_PSYCHIC
    .2byte ITEM_TM96
    .2byte ITEM_TM76
    .2byte ITEM_TM_SHADOW_BALL
    .2byte ITEM_TM99    
    .2byte ITEM_TM95
    .2byte ITEM_TM80
    .2byte ITEM_TM79
    .2byte ITEM_NONE
    release
    end

MauvilleCity_BattleMart_Employee_Text_0:
	.string "Looking for something?$"

MauvilleCity_BattleMart_Employee_Text_1:
	.string "Come back when you're a little mmmm richer.$"

MauvilleCity_BattleMart_BerryGirl_Text_0:
	.string "What would you like?$"

MauvilleCity_BattleMart_BerryGirl_Text_1:
	.string "Have a nice day!$"

MauvilleCity_BattleMart_Chud_Text_0:
	.string "Looking for gems?$"

MauvilleCity_BattleMart_Chud_Text_1:
	.string "You probably only want coal...$"

MauvilleCity_BattleMart_TMDealer_Text_0:
	.string "Check out these moves!$"

MauvilleCity_BattleMart_TMDealer_Text_1:
	.string "Seeya!$"

