NewBirchLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchLab_EventScript_BallDefault
	.byte 0


NewBirchLab_EventScript_BallDefault::
	setvar VAR_NEWBIRCHLAB_SET_SELECTION, 0
	return


NewBirchLab_EventScript_Birch::
	lock
	faceplayer
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_ONE, NewBirchLab_EventScript_Birch_4
NewBirchLab_EventScript_Birch_3:
	msgbox NewBirchLab_EventScript_Birch_Text_2
NewBirchLab_EventScript_Birch_1:
	waitmessage
	release
	end

NewBirchLab_EventScript_Birch_2:
	msgbox NewBirchLab_EventScript_Birch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Birch_9
	msgbox NewBirchLab_EventScript_Birch_Text_1
	goto NewBirchLab_EventScript_Birch_1

NewBirchLab_EventScript_Birch_4:
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_TWO, NewBirchLab_EventScript_Birch_6
	goto NewBirchLab_EventScript_Birch_3

NewBirchLab_EventScript_Birch_6:
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_THREE, NewBirchLab_EventScript_Birch_2
	goto NewBirchLab_EventScript_Birch_3

NewBirchLab_EventScript_Birch_9:
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 2
	goto_if_ne NewBirchLab_EventScript_Birch_13
	setvar VAR_NEWBIRCHLAB_SET_SELECTION, 0
NewBirchLab_EventScript_Birch_12:
	msgbox NewBirchLab_EventScript_Birch_Text_1
	goto NewBirchLab_EventScript_Birch_1

NewBirchLab_EventScript_Birch_13:
	addvar VAR_NEWBIRCHLAB_SET_SELECTION, 1
	goto NewBirchLab_EventScript_Birch_12


NewBirchLab_EventScript_PokeballOne::
	lockall
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_ONE, NewBirchLab_EventScript_PokeballOne_4
NewBirchLab_EventScript_PokeballOne_3:
	applymovement 4, BirchLookLeft
	msgbox NewBirchLab_EventScript_PokeballOne_Text_0
	waitmessage
	applymovement 4, BirchLookDown
NewBirchLab_EventScript_PokeballOne_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballOne_2:
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 0
	goto_if_eq NewBirchLab_EventScript_PokeballOne_9
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 1
	goto_if_eq NewBirchLab_EventScript_PokeballOne_10
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 2
	goto_if_eq NewBirchLab_EventScript_PokeballOne_11
	goto NewBirchLab_EventScript_PokeballOne_1

NewBirchLab_EventScript_PokeballOne_4:
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_TWO, NewBirchLab_EventScript_PokeballOne_6
	goto NewBirchLab_EventScript_PokeballOne_3

NewBirchLab_EventScript_PokeballOne_6:
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_THREE, NewBirchLab_EventScript_PokeballOne_2
	goto NewBirchLab_EventScript_PokeballOne_3

NewBirchLab_EventScript_PokeballOne_9:
	call NewBirchLab_EventScript_Wurmple
	goto NewBirchLab_EventScript_PokeballOne_1

NewBirchLab_EventScript_PokeballOne_10:
	call NewBirchLab_EventScript_Spinarak
	goto NewBirchLab_EventScript_PokeballOne_1

NewBirchLab_EventScript_PokeballOne_11:
	call NewBirchLab_EventScript_Rattata
	goto NewBirchLab_EventScript_PokeballOne_1


NewBirchLab_EventScript_PokeballTwo::
	lockall
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_ONE, NewBirchLab_EventScript_PokeballTwo_4
NewBirchLab_EventScript_PokeballTwo_3:
	applymovement 4, BirchLookLeft
	msgbox NewBirchLab_EventScript_PokeballOne_Text_0
	waitmessage
	applymovement 4, BirchLookDown
NewBirchLab_EventScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballTwo_2:
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 0
	goto_if_eq NewBirchLab_EventScript_PokeballTwo_9
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 1
	goto_if_eq NewBirchLab_EventScript_PokeballTwo_10
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 2
	goto_if_eq NewBirchLab_EventScript_PokeballTwo_11
	goto NewBirchLab_EventScript_PokeballTwo_1

NewBirchLab_EventScript_PokeballTwo_4:
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_TWO, NewBirchLab_EventScript_PokeballTwo_6
	goto NewBirchLab_EventScript_PokeballTwo_3

NewBirchLab_EventScript_PokeballTwo_6:
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_THREE, NewBirchLab_EventScript_PokeballTwo_2
	goto NewBirchLab_EventScript_PokeballTwo_3

NewBirchLab_EventScript_PokeballTwo_9:
	call NewBirchLab_EventScript_Lotad
	goto NewBirchLab_EventScript_PokeballTwo_1

NewBirchLab_EventScript_PokeballTwo_10:
	call NewBirchLab_EventScript_Hoothoot
	goto NewBirchLab_EventScript_PokeballTwo_1

NewBirchLab_EventScript_PokeballTwo_11:
	call NewBirchLab_EventScript_Caterpie
	goto NewBirchLab_EventScript_PokeballTwo_1


NewBirchLab_EventScript_PokeballThree::
	lockall
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_ONE, NewBirchLab_EventScript_PokeballThree_4
NewBirchLab_EventScript_PokeballThree_3:
	applymovement 4, BirchLookLeft
	msgbox NewBirchLab_EventScript_PokeballOne_Text_0
	waitmessage
	applymovement 4, BirchLookDown
NewBirchLab_EventScript_PokeballThree_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballThree_2:
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 0
	goto_if_eq NewBirchLab_EventScript_PokeballThree_9
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 1
	goto_if_eq NewBirchLab_EventScript_PokeballThree_10
	compare VAR_NEWBIRCHLAB_SET_SELECTION, 2
	goto_if_eq NewBirchLab_EventScript_PokeballThree_11
	goto NewBirchLab_EventScript_PokeballThree_1

NewBirchLab_EventScript_PokeballThree_4:
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_TWO, NewBirchLab_EventScript_PokeballThree_6
	goto NewBirchLab_EventScript_PokeballThree_3

NewBirchLab_EventScript_PokeballThree_6:
	goto_if_unset FLAG_NEWBIRCHLAB_PICKED_BALL_THREE, NewBirchLab_EventScript_PokeballThree_2
	goto NewBirchLab_EventScript_PokeballThree_3

NewBirchLab_EventScript_PokeballThree_9:
	call NewBirchLab_EventScript_Seedot
	goto NewBirchLab_EventScript_PokeballThree_1

NewBirchLab_EventScript_PokeballThree_10:
	call NewBirchLab_EventScript_Natu
	goto NewBirchLab_EventScript_PokeballThree_1

NewBirchLab_EventScript_PokeballThree_11:
	call NewBirchLab_EventScript_Magikarp
	goto NewBirchLab_EventScript_PokeballThree_1


NewBirchLab_EventScript_Wurmple::
	showmonpic SPECIES_WURMPLE, 10, 3
	msgbox NewBirchLab_EventScript_Wurmple_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Wurmple_2
	hidemonpic
	msgbox NewBirchLab_BallNotChosen
NewBirchLab_EventScript_Wurmple_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Wurmple_2:
	givemon SPECIES_WURMPLE, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Wurmple_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Wurmple_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Wurmple_Text_2
	goto NewBirchLab_EventScript_Wurmple_1

NewBirchLab_EventScript_Wurmple_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Wurmple_Text_1
	removeobject 1
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_ONE
	setvar VAR_STARTER_MON, 0
	call NicknamePartyMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Wurmple_1

NewBirchLab_EventScript_Wurmple_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Wurmple_Text_1
	removeobject 1
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_ONE
	setvar VAR_STARTER_MON, 0
	call NicknameBoxMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Wurmple_1


NewBirchLab_EventScript_Spinarak::
	showmonpic SPECIES_SPINARAK, 10, 3
	msgbox NewBirchLab_EventScript_Spinarak_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Spinarak_2
	hidemonpic
	msgbox NewBirchLab_BallNotChosen
NewBirchLab_EventScript_Spinarak_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Spinarak_2:
	givemon SPECIES_SPINARAK, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Spinarak_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Spinarak_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Wurmple_Text_2
	goto NewBirchLab_EventScript_Spinarak_1

NewBirchLab_EventScript_Spinarak_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Spinarak_Text_1
	removeobject 1
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_ONE
	setvar VAR_STARTER_MON, 0
	call NicknamePartyMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Spinarak_1

NewBirchLab_EventScript_Spinarak_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Spinarak_Text_1
	removeobject 1
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_ONE
	setvar VAR_STARTER_MON, 0
	call NicknameBoxMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Spinarak_1


NewBirchLab_EventScript_Rattata::
	showmonpic SPECIES_RATTATA, 10, 3
	msgbox NewBirchLab_EventScript_Rattata_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Rattata_2
	hidemonpic
	msgbox NewBirchLab_BallNotChosen
NewBirchLab_EventScript_Rattata_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Rattata_2:
	givemon SPECIES_RATTATA, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Rattata_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Rattata_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Wurmple_Text_2
	goto NewBirchLab_EventScript_Rattata_1

NewBirchLab_EventScript_Rattata_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Rattata_Text_1
	removeobject 1
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_ONE
	setvar VAR_STARTER_MON, 0
	call NicknamePartyMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Rattata_1

NewBirchLab_EventScript_Rattata_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Rattata_Text_1
	removeobject 1
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_ONE
	setvar VAR_STARTER_MON, 0
	call NicknameBoxMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Rattata_1


NewBirchLab_EventScript_Lotad::
	showmonpic SPECIES_LOTAD, 10, 3
	msgbox NewBirchLab_EventScript_Lotad_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Lotad_2
	hidemonpic
	msgbox NewBirchLab_BallNotChosen
NewBirchLab_EventScript_Lotad_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Lotad_2:
	givemon SPECIES_LOTAD, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Lotad_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Lotad_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Wurmple_Text_2
	goto NewBirchLab_EventScript_Lotad_1

NewBirchLab_EventScript_Lotad_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Lotad_Text_1
	removeobject 2
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_TWO
	setvar VAR_STARTER_MON, 1
	call NicknamePartyMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Lotad_1

NewBirchLab_EventScript_Lotad_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Lotad_Text_1
	removeobject 2
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_TWO
	setvar VAR_STARTER_MON, 1
	call NicknameBoxMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Lotad_1


NewBirchLab_EventScript_Hoothoot::
	showmonpic SPECIES_HOOTHOOT, 10, 3
	msgbox NewBirchLab_EventScript_Hoothoot_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Hoothoot_2
	hidemonpic
	msgbox NewBirchLab_BallNotChosen
NewBirchLab_EventScript_Hoothoot_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Hoothoot_2:
	givemon SPECIES_HOOTHOOT, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Hoothoot_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Hoothoot_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Wurmple_Text_2
	goto NewBirchLab_EventScript_Hoothoot_1

NewBirchLab_EventScript_Hoothoot_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Hoothoot_Text_1
	removeobject 2
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_TWO
	setvar VAR_STARTER_MON, 1
	call NicknamePartyMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Hoothoot_1

NewBirchLab_EventScript_Hoothoot_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Hoothoot_Text_1
	removeobject 2
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_TWO
	setvar VAR_STARTER_MON, 1
	call NicknameBoxMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Hoothoot_1


NewBirchLab_EventScript_Caterpie::
	showmonpic SPECIES_CATERPIE, 10, 3
	msgbox NewBirchLab_EventScript_Caterpie_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Caterpie_2
	hidemonpic
	msgbox NewBirchLab_BallNotChosen
NewBirchLab_EventScript_Caterpie_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Caterpie_2:
	givemon SPECIES_CATERPIE, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Caterpie_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Caterpie_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Wurmple_Text_2
	goto NewBirchLab_EventScript_Caterpie_1

NewBirchLab_EventScript_Caterpie_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Caterpie_Text_1
	removeobject 2
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_TWO
	setvar VAR_STARTER_MON, 1
	call NicknamePartyMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Caterpie_1

NewBirchLab_EventScript_Caterpie_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Caterpie_Text_1
	removeobject 2
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_TWO
	setvar VAR_STARTER_MON, 1
	call NicknameBoxMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Caterpie_1


NewBirchLab_EventScript_Seedot::
	showmonpic SPECIES_SEEDOT, 10, 3
	msgbox NewBirchLab_EventScript_Seedot_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Seedot_2
	hidemonpic
	msgbox NewBirchLab_BallNotChosen
NewBirchLab_EventScript_Seedot_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Seedot_2:
	givemon SPECIES_SEEDOT, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Seedot_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Seedot_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Wurmple_Text_2
	goto NewBirchLab_EventScript_Seedot_1

NewBirchLab_EventScript_Seedot_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Seedot_Text_1
	removeobject 3
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_THREE
	setvar VAR_STARTER_MON, 2
	call NicknamePartyMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Seedot_1

NewBirchLab_EventScript_Seedot_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Seedot_Text_1
	removeobject 3
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_THREE
	setvar VAR_STARTER_MON, 2
	call NicknameBoxMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Seedot_1


NewBirchLab_EventScript_Natu::
	showmonpic SPECIES_NATU, 10, 3
	msgbox NewBirchLab_EventScript_Natu_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Natu_2
	hidemonpic
	msgbox NewBirchLab_BallNotChosen
NewBirchLab_EventScript_Natu_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Natu_2:
	givemon SPECIES_NATU, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Natu_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Natu_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Wurmple_Text_2
	goto NewBirchLab_EventScript_Natu_1

NewBirchLab_EventScript_Natu_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Natu_Text_1
	removeobject 3
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_THREE
	setvar VAR_STARTER_MON, 2
	call NicknamePartyMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Natu_1

NewBirchLab_EventScript_Natu_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Natu_Text_1
	removeobject 3
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_THREE
	setvar VAR_STARTER_MON, 2
	call NicknameBoxMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Natu_1


NewBirchLab_EventScript_Magikarp::
	showmonpic SPECIES_MAGIKARP, 10, 3
	msgbox NewBirchLab_EventScript_Magikarp_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Magikarp_2
	hidemonpic
	msgbox NewBirchLab_BallNotChosen
NewBirchLab_EventScript_Magikarp_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Magikarp_2:
	givemon SPECIES_MAGIKARP, 5, ITEM_NUGGET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Magikarp_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Magikarp_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Wurmple_Text_2
	goto NewBirchLab_EventScript_Magikarp_1

NewBirchLab_EventScript_Magikarp_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Magikarp_Text_1
	removeobject 3
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_THREE
	setvar VAR_STARTER_MON, 2
	call NicknamePartyMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Magikarp_1

NewBirchLab_EventScript_Magikarp_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Magikarp_Text_1
	removeobject 3
	setflag FLAG_NEWBIRCHLAB_PICKED_BALL_THREE
	setvar VAR_STARTER_MON, 2
	call NicknameBoxMon
	setflag FLAG_SYS_POKEMON_GET
	goto NewBirchLab_EventScript_Magikarp_1


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


BirchLookDown:
	face_down
	step_end

BirchLookLeft:
	face_left
	step_end

NewBirchLab_EventScript_Birch_Text_0:
	.string "Wanna see some others?$"

NewBirchLab_EventScript_Birch_Text_1:
	.string "Just pick something and go.$"

NewBirchLab_EventScript_Birch_Text_2:
	.string "Have a good time then.$"

NewBirchLab_EventScript_PokeballOne_Text_0:
	.string "Hey, don't take more than your share,\n"
	.string "you little rat!$"

NewBirchLab_EventScript_Wurmple_Text_0:
	.string "Do you want to choose Wurmple?$"

NewBirchLab_EventScript_Wurmple_Text_1:
	.string "Received Wurmple!$"

NewBirchLab_EventScript_Wurmple_Text_2:
	.string "No more room!$"

NewBirchLab_EventScript_Spinarak_Text_0:
	.string "Do you want to choose Spinarak?$"

NewBirchLab_EventScript_Spinarak_Text_1:
	.string "Received Spinarak!$"

NewBirchLab_EventScript_Rattata_Text_0:
	.string "Do you want to choose Rattata?$"

NewBirchLab_EventScript_Rattata_Text_1:
	.string "Received Rattata!$"

NewBirchLab_EventScript_Lotad_Text_0:
	.string "Do you want to choose Lotad?$"

NewBirchLab_EventScript_Lotad_Text_1:
	.string "Received Lotad!$"

NewBirchLab_EventScript_Hoothoot_Text_0:
	.string "Do you want to choose Hoothoot?$"

NewBirchLab_EventScript_Hoothoot_Text_1:
	.string "Received Hoothoot!$"

NewBirchLab_EventScript_Caterpie_Text_0:
	.string "Do you want to choose Caterpie?$"

NewBirchLab_EventScript_Caterpie_Text_1:
	.string "Received Caterpie!$"

NewBirchLab_EventScript_Seedot_Text_0:
	.string "Do you want to choose Seedot?$"

NewBirchLab_EventScript_Seedot_Text_1:
	.string "Received Seedot!$"

NewBirchLab_EventScript_Natu_Text_0:
	.string "Do you want to choose Natu?$"

NewBirchLab_EventScript_Natu_Text_1:
	.string "Received Natu!$"

NewBirchLab_EventScript_Magikarp_Text_0:
	.string "Do you want to choose Magikarp?$"

NewBirchLab_EventScript_Magikarp_Text_1:
	.string "Received Magikarp!$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC!$"

NewBirchLab_BallNotChosen::
	.string "You did not choose the Pokemon.$"
