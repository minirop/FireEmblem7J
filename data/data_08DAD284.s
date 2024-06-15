	.section .data

	.global gUnk_08DAD284
gUnk_08DAD284:	@ 0x08DAD284
	.incbin "FireEmblem7J.base.gba", 0xDAD284, 0xDAD294 - 0xDAD284

	.global gpSramExtraData
gpSramExtraData:	@ 0x08DAD294
	.incbin "FireEmblem7J.base.gba", 0xDAD294, 0xDAD298 - 0xDAD294

	.global gExtraMapInfo
gExtraMapInfo:	@ 0x08DAD298
	.word 0x0203F000

	.global gUnk_08DAD29C
gUnk_08DAD29C:	@ 0x08DAD29C
	.incbin "FireEmblem7J.base.gba", 0xDAD29C, 0xDAD33C - 0xDAD29C

	.global gUnk_08DAD33C
gUnk_08DAD33C:	@ 0x08DAD33C
	.incbin "FireEmblem7J.base.gba", 0xDAD33C, 0xDAD354 - 0xDAD33C

	.global gUnk_08DAD354
gUnk_08DAD354:	@ 0x08DAD354
	.incbin "FireEmblem7J.base.gba", 0xDAD354, 0xDAD384 - 0xDAD354

	.global gUnk_08DAD384
gUnk_08DAD384:	@ 0x08DAD384
	.incbin "FireEmblem7J.base.gba", 0xDAD384, 0xDAD3A4 - 0xDAD384

	.global ProcScr_SaveMenu
ProcScr_SaveMenu:	@ 0x08DAD3A4
	@ PROC_19
	.short 0x19, 0x0
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x0
	.word 0x0
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word SaveMenu_Init
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word ProcSaveMenu_InitScreen
	@ PROC_CALL
	.short 0x2, 0x0
	.word SaveMenu_LoadExtraMenuGraphics
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL_ARG
	.short 0x18, 0x8
	.word NewFadeIn
	@ PROC_WHILE
	.short 0x14, 0x0
	.word FadeInExists
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_WHILE
	.short 0x14, 0x0
	.word MusicProc4Exists
	@ PROC_CALL
	.short 0x2, 0x0
	.word SaveMenu_080A465C
	@ PROC_LABEL
	.short 0xb, 0x2
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word Loop6C_savemenu
	@ PROC_GOTO
	.short 0xc, 0xf
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x1
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A5868
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A5920
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A9578
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A5980
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A5868
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A58C4
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A5A40
	@ PROC_LABEL
	.short 0xb, 0x5
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A5A60
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A4B10
	@ PROC_GOTO
	.short 0xc, 0xf
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x7
	.word 0x0
	@ PROC_SLEEP
	.short 0xe, 0x5
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A4D64
	@ PROC_GOTO
	.short 0xc, 0x5
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x6
	.word 0x0
	@ PROC_SLEEP
	.short 0xe, 0x1
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A4D70
	@ PROC_SLEEP
	.short 0xe, 0x1
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A4D80
	@ PROC_GOTO
	.short 0xc, 0x5
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x3
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A5058
	@ PROC_GOTO
	.short 0xc, 0x5
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x4
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A5A94
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A50A0
	@ PROC_GOTO
	.short 0xc, 0x2
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x8
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A50F0
	@ PROC_LABEL
	.short 0xb, 0x9
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A5138
	@ PROC_LABEL
	.short 0xb, 0xc
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A517C
	@ PROC_LABEL
	.short 0xb, 0xd
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A51CC
	@ PROC_LABEL
	.short 0xb, 0xa
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A5218
	@ PROC_LABEL
	.short 0xb, 0xb
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A5A80
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A54C8
	@ PROC_LABEL
	.short 0xb, 0xe
	.word 0x0
	@ PROC_CALL_ARG
	.short 0x18, 0x8
	.word NewFadeOut
	@ PROC_WHILE
	.short 0x14, 0x0
	.word FadeOutExists
	@ PROC_WHILE
	.short 0x14, 0x0
	.word sub_8003F04
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A57BC
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word SaveMenu_Init
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word ProcSaveMenu_InitScreen
	@ PROC_CALL
	.short 0x2, 0x0
	.word SaveMenu_LoadExtraMenuGraphics
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL_ARG
	.short 0x18, 0x8
	.word NewFadeIn
	@ PROC_WHILE
	.short 0x14, 0x0
	.word FadeInExists
	@ PROC_WHILE
	.short 0x14, 0x0
	.word sub_8003F04
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A5838
	@ PROC_LABEL
	.short 0xb, 0x15
	.word 0x0
	@ PROC_BLOCK
	.short 0x10, 0x0
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x12
	.word 0x0
	@ PROC_CALL_ARG
	.short 0x18, 0x4
	.word NewFadeOut
	@ PROC_WHILE
	.short 0x14, 0x0
	.word FadeOutExists
	@ PROC_GOTO
	.short 0xc, 0xf
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x11
	.word 0x0
	@ PROC_CALL_ARG
	.short 0x18, 0x8
	.word NewFadeOut
	@ PROC_WHILE
	.short 0x14, 0x0
	.word FadeOutExists
	@ PROC_LABEL
	.short 0xb, 0xf
	.word 0x0
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word SaveMenu_Finish
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_END
	.short 0x0, 0x0
	.word 0x0

	.global gUnk_08DAD674
gUnk_08DAD674:	@ 0x08DAD674
	.incbin "FireEmblem7J.base.gba", 0xDAD674, 0xDAD784 - 0xDAD674

	.global gUnk_08DAD784
gUnk_08DAD784:	@ 0x08DAD784
	.incbin "FireEmblem7J.base.gba", 0xDAD784, 0xDAD844 - 0xDAD784

	.global gUnk_08DAD844
gUnk_08DAD844:	@ 0x08DAD844
	.incbin "FireEmblem7J.base.gba", 0xDAD844, 0xDAD848 - 0xDAD844

	.global gUnk_08DAD848
gUnk_08DAD848:	@ 0x08DAD848
	.incbin "FireEmblem7J.base.gba", 0xDAD848, 0xDAD8A8 - 0xDAD848

	.global gUnk_08DAD8A8
gUnk_08DAD8A8:	@ 0x08DAD8A8
	.incbin "FireEmblem7J.base.gba", 0xDAD8A8, 0xDAD8C2 - 0xDAD8A8

	.global gUnk_08DAD8C2
gUnk_08DAD8C2:	@ 0x08DAD8C2
	.incbin "FireEmblem7J.base.gba", 0xDAD8C2, 0xDAD8FC - 0xDAD8C2

	.global gUnk_08DAD8FC
gUnk_08DAD8FC:	@ 0x08DAD8FC
	.incbin "FireEmblem7J.base.gba", 0xDAD8FC, 0xDAD904 - 0xDAD8FC

	.global gUnk_08DAD904
gUnk_08DAD904:	@ 0x08DAD904
	.incbin "FireEmblem7J.base.gba", 0xDAD904, 0xDAD90C - 0xDAD904

	.global gUnk_08DAD90C
gUnk_08DAD90C:	@ 0x08DAD90C
	.incbin "FireEmblem7J.base.gba", 0xDAD90C, 0xDAD9D6 - 0xDAD90C

	.global gUnk_08DAD9D6
gUnk_08DAD9D6:	@ 0x08DAD9D6
	.incbin "FireEmblem7J.base.gba", 0xDAD9D6, 0xDAD9E4 - 0xDAD9D6

	.global gUnk_08DAD9E4
gUnk_08DAD9E4:	@ 0x08DAD9E4
	.incbin "FireEmblem7J.base.gba", 0xDAD9E4, 0xDADA10 - 0xDAD9E4

	.global gUnk_08DADA10
gUnk_08DADA10:	@ 0x08DADA10
	.incbin "FireEmblem7J.base.gba", 0xDADA10, 0xDADA3C - 0xDADA10

	.global ProcScr_SaveDraw
ProcScr_SaveDraw:	@ 0x08DADA3C
	@ PROC_19
	.short 0x19, 0x0
	.word 0x0
	@ PROC_MARK
	.short 0xf, 0xc
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word SaveDraw_Init
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word SaveDraw_Loop
	@ PROC_END
	.short 0x0, 0x0
	.word 0x0

	.global ProcScr_SpinRotation
ProcScr_SpinRotation:	@ 0x08DADA64
	@ PROC_19
	.short 0x19, 0x0
	.word 0x0
	@ PROC_MARK
	.short 0xf, 0xd
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word SpinRotation_Init
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word SpinRotation_Loop
	@ PROC_END
	.short 0x0, 0x0
	.word 0x0

	.global ProcScr_SaveDrawCursor
ProcScr_SaveDrawCursor:	@ 0x08DADA8C
	@ PROC_19
	.short 0x19, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word SaveDrawCursor_Init
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word SaveDrawCursor_Loop
	@ PROC_END
	.short 0x0, 0x0
	.word 0x0

	.global gUnk_08DADAAC
gUnk_08DADAAC:	@ 0x08DADAAC
	.incbin "FireEmblem7J.base.gba", 0xDADAAC, 0xDADAC8 - 0xDADAAC

	.global gUnk_08DADAC8
gUnk_08DADAC8:	@ 0x08DADAC8
	.incbin "FireEmblem7J.base.gba", 0xDADAC8, 0xDADAE8 - 0xDADAC8

	.global gUnk_08DADAE8
gUnk_08DADAE8:	@ 0x08DADAE8
	.incbin "FireEmblem7J.base.gba", 0xDADAE8, 0xDADD34 - 0xDADAE8

	.global gUnk_08DADD34
gUnk_08DADD34:	@ 0x08DADD34
	.incbin "FireEmblem7J.base.gba", 0xDADD34, 0xDADD50 - 0xDADD34

	.global gUnk_08DADD50
gUnk_08DADD50:	@ 0x08DADD50
	.incbin "FireEmblem7J.base.gba", 0xDADD50, 0xDADD78 - 0xDADD50

	.global gUnk_08DADD78
gUnk_08DADD78:	@ 0x08DADD78
	.incbin "FireEmblem7J.base.gba", 0xDADD78, 0xDADD84 - 0xDADD78

	.global gUnk_08DADD84
gUnk_08DADD84:	@ 0x08DADD84
	.incbin "FireEmblem7J.base.gba", 0xDADD84, 0xDADD90 - 0xDADD84

	.global gUnk_08DADD90
gUnk_08DADD90:	@ 0x08DADD90
	.incbin "FireEmblem7J.base.gba", 0xDADD90, 0xDADDB0 - 0xDADD90

	.global gUnk_08DADDB0
gUnk_08DADDB0:	@ 0x08DADDB0
	.incbin "FireEmblem7J.base.gba", 0xDADDB0, 0xDADDC0 - 0xDADDB0

	.global gUnk_08DADDC0
gUnk_08DADDC0:	@ 0x08DADDC0
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A7584
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A79C8
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A7A60
	@ PROC_LABEL
	.short 0xb, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A75C4
	@ PROC_CALL_ARG
	.short 0x18, 0x4
	.word NewFadeIn
	@ PROC_WHILE
	.short 0x14, 0x0
	.word FadeInExists
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A76FC
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A773C
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A7778
	@ PROC_LABEL
	.short 0xb, 0x1
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A77AC
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A77E8
	@ PROC_LABEL
	.short 0xb, 0x2
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A76C8
	@ PROC_REPEAT
	.short 0x3, 0x0
	.word sub_80A7834
	@ PROC_LABEL
	.short 0xb, 0x4
	.word 0x0
	@ PROC_CALL_ARG
	.short 0x18, 0x8
	.word NewFadeOut
	@ PROC_WHILE
	.short 0x14, 0x0
	.word FadeOutExists
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A781C
	@ PROC_CALL
	.short 0x2, 0x0
	.word StartTacticianNameSelect
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A75C4
	@ PROC_CALL_ARG
	.short 0x18, 0x8
	.word NewFadeIn
	@ PROC_WHILE
	.short 0x14, 0x0
	.word FadeInExists
	@ PROC_GOTO
	.short 0xc, 0x2
	.word 0x0
	@ PROC_LABEL
	.short 0xb, 0x3
	.word 0x0
	@ PROC_CALL_ARG
	.short 0x18, 0x4
	.word NewFadeOut
	@ PROC_WHILE
	.short 0x14, 0x0
	.word FadeOutExists
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A781C
	@ PROC_LABEL
	.short 0xb, 0x5
	.word 0x0
	@ PROC_YIELD
	.short 0xe, 0x0
	.word 0x0
	@ PROC_CALL
	.short 0x2, 0x0
	.word sub_80A79B8
	@ PROC_SLEEP
	.short 0xe, 0xa
	.word 0x0
	@ PROC_END
	.short 0x0, 0x0
	.word 0x0

	.global gUnk_08DADF00
gUnk_08DADF00:	@ 0x08DADF00
	.incbin "FireEmblem7J.base.gba", 0xDADF00, 0xDADF10 - 0xDADF00

	.global gUnk_08DADF10
gUnk_08DADF10:	@ 0x08DADF10
	.incbin "FireEmblem7J.base.gba", 0xDADF10, 0xDADF40 - 0xDADF10

	.global gUnk_08DADF40
gUnk_08DADF40:	@ 0x08DADF40
	.incbin "FireEmblem7J.base.gba", 0xDADF40, 0xDADF48 - 0xDADF40

	.global gUnk_08DADF48
gUnk_08DADF48:	@ 0x08DADF48
	.incbin "FireEmblem7J.base.gba", 0xDADF48, 0xDADF68 - 0xDADF48

	.global gUnk_08DADF68
gUnk_08DADF68:	@ 0x08DADF68
	.incbin "FireEmblem7J.base.gba", 0xDADF68, 0xDADF98 - 0xDADF68

	.global gUnk_08DADF98
gUnk_08DADF98:	@ 0x08DADF98
	.incbin "FireEmblem7J.base.gba", 0xDADF98, 0xDADFC8 - 0xDADF98

	.global gUnk_08DADFC8
gUnk_08DADFC8:	@ 0x08DADFC8
	.incbin "FireEmblem7J.base.gba", 0xDADFC8, 0xDADFF8 - 0xDADFC8

	.global gUnk_08DADFF8
gUnk_08DADFF8:	@ 0x08DADFF8
	.incbin "FireEmblem7J.base.gba", 0xDADFF8, 0xDAE004 - 0xDADFF8

	.global gUnk_08DAE004
gUnk_08DAE004:	@ 0x08DAE004
	.incbin "FireEmblem7J.base.gba", 0xDAE004, 0xDAE010 - 0xDAE004

	.global gUnk_08DAE010
gUnk_08DAE010:	@ 0x08DAE010
	.incbin "FireEmblem7J.base.gba", 0xDAE010, 0xDAE01C - 0xDAE010

	.global gUnk_08DAE01C
gUnk_08DAE01C:	@ 0x08DAE01C
	.incbin "FireEmblem7J.base.gba", 0xDAE01C, 0xDAE028 - 0xDAE01C

	.global gUnk_08DAE028
gUnk_08DAE028:	@ 0x08DAE028
	.incbin "FireEmblem7J.base.gba", 0xDAE028, 0xDAE042 - 0xDAE028

	.global gUnk_08DAE042
gUnk_08DAE042:	@ 0x08DAE042
	.incbin "FireEmblem7J.base.gba", 0xDAE042, 0xDAE068 - 0xDAE042

	.global gUnk_08DAE068
gUnk_08DAE068:	@ 0x08DAE068
	.incbin "FireEmblem7J.base.gba", 0xDAE068, 0xDAE088 - 0xDAE068

	.global gUnk_08DAE088
gUnk_08DAE088:	@ 0x08DAE088
	.incbin "FireEmblem7J.base.gba", 0xDAE088, 0xDAE090 - 0xDAE088

	.global gUnk_08DAE090
gUnk_08DAE090:	@ 0x08DAE090
	.incbin "FireEmblem7J.base.gba", 0xDAE090, 0xDAE0AC - 0xDAE090

	.global gUnk_08DAE0AC
gUnk_08DAE0AC:	@ 0x08DAE0AC
	.incbin "FireEmblem7J.base.gba", 0xDAE0AC, 0xDAE0DC - 0xDAE0AC

	.global gUnk_08DAE0DC
gUnk_08DAE0DC:	@ 0x08DAE0DC
	.incbin "FireEmblem7J.base.gba", 0xDAE0DC, 0xDAE0FC - 0xDAE0DC

	.global gUnk_08DAE0FC
gUnk_08DAE0FC:	@ 0x08DAE0FC
	.incbin "FireEmblem7J.base.gba", 0xDAE0FC, 0xDAE11C - 0xDAE0FC

	.global gUnk_08DAE11C
gUnk_08DAE11C:	@ 0x08DAE11C
	.incbin "FireEmblem7J.base.gba", 0xDAE11C, 0xDAE1D4 - 0xDAE11C

	.global gUnk_08DAE1D4
gUnk_08DAE1D4:	@ 0x08DAE1D4
	.incbin "FireEmblem7J.base.gba", 0xDAE1D4, 0xDAE1DC - 0xDAE1D4

	.global gUnk_08DAE1DC
gUnk_08DAE1DC:	@ 0x08DAE1DC
	.incbin "FireEmblem7J.base.gba", 0xDAE1DC, 0xDAE1E4 - 0xDAE1DC

	.global gUnk_08DAE1E4
gUnk_08DAE1E4:	@ 0x08DAE1E4
	.incbin "FireEmblem7J.base.gba", 0xDAE1E4, 0xDAE214 - 0xDAE1E4

	.global gUnk_08DAE214
gUnk_08DAE214:	@ 0x08DAE214
	.incbin "FireEmblem7J.base.gba", 0xDAE214, 0xDAE222 - 0xDAE214

	.global gUnk_08DAE222
gUnk_08DAE222:	@ 0x08DAE222
	.incbin "FireEmblem7J.base.gba", 0xDAE222, 0xDAE22C - 0xDAE222

	.global gUnk_08DAE22C
gUnk_08DAE22C:	@ 0x08DAE22C
	.incbin "FireEmblem7J.base.gba", 0xDAE22C, 0xDAE24C - 0xDAE22C
