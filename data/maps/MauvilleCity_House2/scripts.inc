MauvilleCity_House2_MapScripts::
	.byte 0

MauvilleCity_House2_EventScript_Null::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_ReceivedCoinCase
	msgbox MauvilleCity_House2_Text_BuyHarborMailAtSlateport, MSGBOX_DEFAULT
	checkitem ITEM_HARBOR_MAIL
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_House2_EventScript_AskToTradeForHarborMail
	release
	end

MauvilleCity_House2_EventScript_AskToTradeForHarborMail::
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
	waitmovement 0
	msgbox MauvilleCity_House2_Text_TradeHarborMailForCoinCase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_House2_EventScript_AcceptTrade
	goto_if_eq VAR_RESULT, NO, MauvilleCity_House2_EventScript_DeclineTrade
	end

MauvilleCity_House2_EventScript_AcceptTrade::
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
	removeitem ITEM_HARBOR_MAIL
	giveitem ITEM_COIN_CASE
	setflag FLAG_RECEIVED_COIN_CASE
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
	end

MauvilleCity_House2_EventScript_ReceivedCoinCase::
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_EventScript_DeclineTrade::
	msgbox MauvilleCity_House2_Text_ThatsDisappointing, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_Text_BuyHarborMailAtSlateport:
	.string "If I had a BIKE, it'd be easy to cycle to\n"
	.string "SLATEPORT for some shopping.\p"
	.string "I'd be able to buy HARBOR MAIL at the\n"
	.string "POKéMON MART in SLATEPORT…$"

MauvilleCity_House2_Text_TradeHarborMailForCoinCase:
	.string "Oh! You have HARBOR MAIL?\n"
	.string "Will you trade it for a COIN CASE?$"

MauvilleCity_House2_Text_IllTradeYouCoinCase:
	.string "Oh, I'm so happy!\n"
	.string "Okay, I'll trade you a COIN CASE!$"

MauvilleCity_House2_Text_UseCoinCaseAtGameCorner:
	.string "That COIN CASE can be used\n"
	.string "at the GAME CORNER.$"

MauvilleCity_House2_Text_ThatsDisappointing:
	.string "Oh, that's disappointing.\p"
	.string "A COIN CASE is needed for the\n"
	.string "GAME CORNER.$"

MauvilleCity_House2_EventScript_Woman::
	lock
	faceplayer
	message MauvilleCity_House2_EvoShop_Text_0
	waitmessage
	pokemart MauvilleCity_House2_EvoShop
	msgbox MauvilleCity_House2_EvoShop_Text_1
	release
	end

.align 2
MauvilleCity_House2_EvoShop::
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SPEED
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_AUSPICIOUS_ARMOR
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_PROTECTOR
	.2byte ITEM_CHIPPED_POT
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_SACHET
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_KINGS_ROCK
    .2byte ITEM_METAL_COAT
    .2byte ITEM_RAZOR_CLAW
	.2byte ITEM_ROTOM_CATALOG
	.2byte ITEM_NONE
	release
	end

MauvilleCity_House2_EvoShop_Text_0:
	.string "Some POKéMON evolve\n"
	.string "using specific items.$"

MauvilleCity_House2_EvoShop_Text_1:
	.string "Come again.$"
