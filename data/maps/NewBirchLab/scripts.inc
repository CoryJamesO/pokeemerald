NewBirchLab_MapScripts::
	.byte 0


NewBirchLab_EventScript_PokeballWurmple::
	lockall
	showmonpic SPECIES_WURMPLE, 10, 3
	msgbox NewBirchLab_EventScript_PokeballWurmple_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_PokeballWurmple_2
	hidemonpic
	msgbox NewBirchLab_NotChosen
NewBirchLab_EventScript_PokeballWurmple_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballWurmple_2:
	givemon SPECIES_WURMPLE, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_PokeballWurmple_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_PokeballWurmple_6
	hidemonpic
	msgbox NewBirchLab_EventScript_PokeballWurmple_Text_2
	goto NewBirchLab_EventScript_PokeballWurmple_1

NewBirchLab_EventScript_PokeballWurmple_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_PokeballWurmple_Text_1
	removeobject 1
	setflag FLAG_NEWBIRCHLAB_HIDE_WURMPLE_BALL
	setflag FLAG_NEWBIRCHLAB_RECEIVED_POKEMON
	call NicknamePartyMon
	goto NewBirchLab_EventScript_PokeballWurmple_1

NewBirchLab_EventScript_PokeballWurmple_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_PokeballWurmple_Text_1
	removeobject 1
	setflag FLAG_NEWBIRCHLAB_HIDE_WURMPLE_BALL
	setflag FLAG_NEWBIRCHLAB_RECEIVED_POKEMON
	call NicknameBoxMon
	goto NewBirchLab_EventScript_PokeballWurmple_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchLab_EventScript_PokeballWurmple_Text_0:
	.string "Do you want to choose Wurmple?$"

NewBirchLab_EventScript_PokeballWurmple_Text_1:
	.string "Received Wurmple!$"

NewBirchLab_EventScript_PokeballWurmple_Text_2:
	.string "No more room!$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC!$"

NewBirchLab_NotChosen::
	.string "You did not choose the Wurmple.$"
