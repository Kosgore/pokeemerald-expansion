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


.align 2
MauvilleCity_BattleMart::
    .2byte ITEM_FLAME_ORB
    .2byte ITEM_TOXIC_ORB
    .2byte ITEM_LIFE_ORB
    .2byte ITEM_WEAKNESS_POLICY
    .2byte ITEM_BLUNDER_POLICY
    .2byte ITEM_ABILITY_CAPSULE
    .2byte ITEM_QUICK_CLAW
    .2byte ITEM_KINGS_ROCK
    .2byte ITEM_METAL_COAT
    .2byte ITEM_RAZOR_CLAW 
    .2byte ITEM_NONE
    release
    end

.align 2
MauvilleCity_BerryMart::
    .2byte ITEM_BABIRI_BERRY
    .2byte ITEM_CHARTI_BERRY
    .2byte ITEM_CHILAN_BERRY
    .2byte ITEM_CHOPLE_BERRY
    .2byte ITEM_COBA_BERRY
    .2byte ITEM_COLBUR_BERRY
    .2byte ITEM_HABAN_BERRY
    .2byte ITEM_COBA_BERRY
    .2byte ITEM_COLBUR_BERRY
    .2byte ITEM_HABAN_BERRY
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

MauvilleCity_BattleMart_Employee_Text_0:
	.string "Looking for something?$"

MauvilleCity_BattleMart_Employee_Text_1:
	.string "Come back when you're a little mmmm richer.$"

MauvilleCity_BattleMart_BerryGirl_Text_0:
	.string "What would you like?$"

MauvilleCity_BattleMart_BerryGirl_Text_1:
	.string "Have a nice day!$"
