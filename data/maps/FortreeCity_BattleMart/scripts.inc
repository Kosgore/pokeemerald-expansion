FortreeCity_BattleMart_MapScripts::
	.byte 0


FortreeCity_BattleMart_Employee::
	lock
	faceplayer
	message FortreeCity_BattleMart_Employee_Text_0
	waitmessage
	pokemart FortreeCity_BattleMart
	msgbox FortreeCity_BattleMart_Employee_Text_1
	release
	end


.align 2
FortreeCity_BattleMart::
    .2byte ITEM_CHOICE_BAND
    .2byte ITEM_CHOICE_SPECS
    .2byte ITEM_CHOICE_SCARF
    .2byte ITEM_ABILITY_PATCH
    .2byte ITEM_HEART_SCALE
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

FortreeCity_BattleMart_Employee_Text_0:
	.string "Looking for something?$"

FortreeCity_BattleMart_Employee_Text_1:
	.string "Come back when you're a little mmmm richer.$"
