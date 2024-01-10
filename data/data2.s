	.section .data

	.incbin "FireEmblem7J.base.gba", 0xC03574, 0xC4C158 - 0xC03574

	.global gCharacterData
gCharacterData: @ 08C4C158
	.incbin "FireEmblem7J.base.gba", 0xC4C158, 0x34 * 0xFD

	.global gClassData
gClassData: @ 08C4F4BC
	.incbin "FireEmblem7J.base.gba", 0xC4F4BC, 0x40 * 0x63

	@ ?
	.incbin "FireEmblem7J.base.gba", 0xC50D7C, 0xC5155C - 0xC50D7C

	.global gItemData
gItemData: @ 08C5155C
	.incbin "FireEmblem7J.base.gba", 0xC5155C, 0x24 * 0x9E

	.incbin "FireEmblem7J.base.gba", 0xC52B94, 0xC52F22 - 0xC52B94

	.global MoveTable_Flying
MoveTable_Flying: @ 08C52F22
	.incbin "FireEmblem7J.base.gba", 0xC52F22, 0xC52FA4 - 0xC52F22

	.global MoveTable_Ballista
MoveTable_Ballista: @ 08C52FA4
	.incbin "FireEmblem7J.base.gba", 0xC52FA4, 0xDB8ED8 - 0xC52FA4

	.global ProcScr_TitleScreen
ProcScr_TitleScreen: @ 0xDB8ED8
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word Title_Init
        @ PROC_CALL
        .short 0x2, 0x0
        .word Title_SetupMainGraphics
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_08014714
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_GOTO
        .short 0xc, 0x1
        .word 0x0
        @ PROC_LABEL
        .short 0xb, 0x0
        .word 0x0
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_080BB210
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_080BB29C
        @ PROC_WHILE
        .short 0x14, 0x0
        .word sub_080AB5E0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_080BB3EC
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_080BB46C
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_080BB510
        @ PROC_LABEL
        .short 0xb, 0x1
        .word 0x0
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word Title_IDLE
        @ PROC_LABEL
        .short 0xb, 0x2
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_08014690
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_080BB5B0
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0

	.incbin "FireEmblem7J.base.gba", 0xDB8F80, 0x1000000 - 0xDB8F80
