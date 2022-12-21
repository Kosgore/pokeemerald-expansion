RustboroCity_BattleMart_MapScripts::
	.byte 0


RustboroCity_BattleMart_Employee::
	lock
	faceplayer
	message RustboroCity_BattleMart_Employee_Text_0
	waitmessage
	pokemart RustboroCity_BattleMart
	msgbox RustboroCity_BattleMart_Employee_Text_1
	return


.align 2
RustboroCity_BattleMart::
    .2byte ITEM_MIRACLE_SEED
    .2byte ITEM_CHARCOAL
    .2byte ITEM_MYSTIC_WATER
    .2byte ITEM_AIR_BALLOON
    .2byte ITEM_ADRENALINE_ORB
    .2byte ITEM_FOCUS_SASH
    .2byte ITEM_WHITE_HERB
    .2byte ITEM_POWER_HERB
    .2byte ITEM_MENTAL_HERB    
    .2byte ITEM_NONE
    release
    end

RustboroCity_BattleMart_Employee_Text_0:
	.string "Looking for something?$"

RustboroCity_BattleMart_Employee_Text_1:
	.string "Come back when you're a little mmmm richer.$"
