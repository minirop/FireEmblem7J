#pragma once

/**
 * messed anim declarations
 */

#include "global.h"
#include "proc.h"
#include "anime.h"

#define EFX_BG_WIDTH 66
#define EFX_TILEMAP_LOC(aMap, aX, aY) (aMap + (aX) + EFX_BG_WIDTH * (aY))

enum ekr_battle_unit_position {
    EKR_POS_L,
    EKR_POS_R
};

extern struct Anim *gAnims[4];

enum gEkrDistanceType_index {
    EKR_DISTANCE_CLOSE,
    EKR_DISTANCE_FAR,
    EKR_DISTANCE_FARFAR,
    EKR_DISTANCE_3,
    EKR_DISTANCE_PROMOTION
};

extern s16 gEkrDistanceType;

struct ProcEkrSubAnimeEmulator {
    PROC_HEADER;

    /* 29 */ u8 type;
    /* 2A */ u8 valid;
    /* 2C */ s16 timer;
    /* 2E */ s16 scr_cur;

    STRUCT_PAD(0x30, 0x32);

    /* 32 */ s16 x1;
    /* 34 */ s16 x2;

    STRUCT_PAD(0x36, 0x3A);

    /* 3A */ s16 y1;
    /* 3C */ s16 y2;

    STRUCT_PAD(0x3E, 0x44);

    /* 44 */ u32 * anim_scr;
    /* 48 */ void * sprite;
    /* 4C */ int oam2Base;
    /* 50 */ int oamBase;
};

extern const void *gpImgSheet[2];
extern int gEkrDebugUnk2;
extern int gAnimC01Blocking;
extern u32 gBanimDoneFlag[];
extern u8 gBanimRoundScripts[];
extern u8 gBanimScr_81DE208[];
extern int *gpBanimModesLeft;
extern int *gpBanimModesRight;
extern u8 gBanimScrLeft[];
extern u8 gBanimScrRight[];
extern int Unk_02017758;
extern int Unk_03004750;
extern int Unk_0203E088[2];
extern s16 Unk_0203DFEC;
extern short gEkrPairHpInitial[2];
extern short gEfxPairHpBufOffset[];
extern u16 gEkrTsaBuffer[0x1000 / 2];
extern u16 gEfxFrameTmap[0x2520 / 2];
extern s16 gEkrSpellAnimIndex[2];
extern u32 gEkrBgPosition;
extern s16 gEkrXPosReal[2];
extern s16 gEkrYPosReal[2];
extern u16 gEkrXPosBase[2];
extern u16 gEkrYPosBase[2];
extern struct Vec2 gEkrBg0QuakeVec;
extern struct Vec2 gEkrBg2QuakeVec;
extern s16 gEkrPairSideVaild[2];

void NewEkrLvlupFan(void);
// ??? EkrLvupFanMain
// ??? sub_0804C8F4
// ??? sub_0804C944
void NewEkrGauge(void);
void EndEkrGauge(void);
void EkrGauge_0804CC28(void);
void EkrGauge_0804CC38(void);
void EkrGauge_0804CC48(void);
void EkrGauge_0804CC58(void);
void EkrGauge_0804CC68(u16 val);
void EkrGauge_0804CC78(s16 x, s16 y);
void EkrGauge_0804CC8C(s16 x, s16 y);
void EkrGauge_SetInitFlag(void);
void EkrGauge_ClrInitFlag(void);
// ??? EnableEkrGauge
// ??? DisableEkrGauge
// ??? sub_0804CCE0
// ??? ekrGaugeMain
// ??? sub_0804D13C
void NewEkrDispUP(void);
void EndEkrDispUP(void);
// ??? EkrDispUP_0804D584
// ??? EkrDispUP_0804D594
// ??? EkrDispUP_0804D5A4
// ??? EkrDispUP_0804D5B4
void EkrDispUP_SetPositionUnsync(u16 x, u16 y);
void EkrDispUP_SetPositionSync(u16 x, u16 y);
void SyncEkrDispUP(void);
void UnsyncEkrDispUP(void);
void AsyncEkrDispUP(void);
void UnAsyncEkrDispUP(void);
// ??? ekrDispUPMain
// ??? sub_0804D738
// ??? sub_0804D894
// ??? EfxPrepareScreenFx
// ??? sub_0804DC18
// ??? EkrEfxStatusClear
int sub_0804DD50(void);
// ??? CheckEfxHpBarExist
// ??? sub_0804DD80
// ??? sub_0804DE4C
// ??? sub_0804DF64
// ??? sub_0804E004
// ??? sub_0804E048
// ??? sub_0804E128
// ??? sub_0804E1E8
// ??? sub_0804E28C
// ??? sub_0804E3E0
// ??? sub_0804E458
// ??? sub_0804E474
// ??? sub_0804E54C
// ??? sub_0804E604
// ??? sub_0804E658
// ??? sub_0804E6AC
// ??? sub_0804E6D0
// ??? sub_0804E7AC
// ??? sub_0804E7D8
// ??? sub_0804E7F4
// ??? sub_0804E81C
// ??? sub_0804E89C
// ??? sub_0804E8CC
// ??? sub_0804E944
// ??? sub_0804E9A8
// ??? sub_0804E9D0
// ??? sub_0804EA10
// ??? sub_0804EA54
// ??? sub_0804EAC4
// ??? sub_0804EAE8
// ??? sub_0804EB48
// ??? sub_0804EBC0
// ??? sub_0804EC74
// ??? sub_0804ED50
// ??? sub_0804ED88
// ??? sub_0804EDB8
// ??? sub_0804EE24
// ??? sub_0804EEB8
ProcPtr NewEfxQuakePure(int, int);
// ??? sub_0804EF58
// ??? NewEfxHitQuakePure
// ??? nullsub_48
void NewEfxQuake(int type);
// ??? sub_0804F0DC
// ??? NewEfxHitQuake
// ??? sub_0804F464
void NewEfxFlashBgWhite(struct Anim * anim, int duartion);
void NewEfxFlashBgRed(struct Anim * anim, int duartion);
void NewEfxFlashBgBlack(struct Anim * anim, int duartion);
void NewEfxFlashBgDirectly(struct Anim * anim, int duartion);
// ??? EfxFlashBgMain
// ??? EfxFlashRestorePalSync
// ??? NewEfxWhiteOUT
// ??? EfxWhiteOutMain1
// ??? EfxWhiteOutMain2
// ??? EfxWhiteOutRestorePalSync
// ??? NewEfxWhiteIN
// ??? EfxWhiteInMain1
// ??? sub_0804FA30
// ??? sub_0804FAC4
// ??? sub_0804FB58
// ??? EndEfxHPBarColorChange
// ??? sub_0804FC5C
// ??? sub_0804FC6C
// ??? sub_0804FC7C
// ??? sub_0804FD74
// ??? sub_0804FDB0
// ??? sub_0804FE1C

struct ProcEfxStatusUnit {
    PROC_HEADER;
    /* 29 */ u8 invalid;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ u16 timer;

    STRUCT_PAD(0x2E, 0x32);

    /* 32 */ s16 red;
    /* 34 */ s16 green;
    /* 36 */ s16 blue;

    STRUCT_PAD(0x38, 0x44);

    /* 44 */ u32 frame;
    /* 48 */ const u16 *frame_lut;
    /* 4C */ u32 debuff;
    /* 50 */ u32 debuf_bak;

    STRUCT_PAD(0x54, 0x5C);

    /* 54 */ u8 _pad_54[0x5C - 0x54];
    /* 5C */ struct Anim * anim;
};

extern struct ProcEfxStatusUnit * gpProcEfxStatusUnits[2];

// ??? NewEfxStatusUnit
// ??? EndEfxStatusUnits
// ??? DisableEfxStatusUnits
// ??? EnableEfxStatusUnits
// ??? SetUnitEfxDebuff
// ??? GetUnitEfxDebuff
// ??? EfxStatusUnitFlashing
// ??? EfxStatusUnit_Loop
// ??? sub_080501E4
// ??? NewEfxWeaponIcon
// ??? EndProcEfxWeaponIcon
// ??? DisableEfxWeaponIcon
// ??? EnableEfxWeaponIcon
// ??? sub_080502B0
// ??? sub_08050318
// ??? sub_08050348
// ??? sub_080503A0
// ??? sub_080503B8
// ??? sub_080503D4
// ??? sub_08050438
// ??? sub_08050478
// ??? sub_080504F8
// ??? sub_08050530
// ??? sub_08050548
// ??? sub_08050560
// ??? sub_0805057C
// ??? sub_08050604
// ??? sub_08050654
// ??? sub_080506E0
// ??? sub_0805073C
// ??? SpellFx_Begin
// ??? SpellFx_Finish
// ??? SpellFx_ClearBG1Position
void SpellFx_ClearBG1(void);
void SpellFx_SetSomeColorEffect(void);
void SpellFx_ClearColorEffects(void);
void StartBattleAnimHitEffectsDefault(struct Anim * anim, int type);
// ??? sub_0805092C
void StartBattleAnimHitEffects(struct Anim * anim, int type);
void StartBattleAnimResireHitEffects(struct Anim * anim, int type);
void StartBattleAnimStatusChgHitEffects(struct Anim * anim, int type);
struct Anim * EfxCreateFrontAnim(struct Anim * anim, const AnimScr * scr1, const AnimScr * scr2, const AnimScr * scr3, const AnimScr * scr4);
struct Anim * EfxCreateBackAnim(struct Anim * anim, const AnimScr * scr1, const AnimScr *scr2, const AnimScr * scr3, const AnimScr * scr4);
void SpellFx_WriteBgMap(struct Anim * anim, const u16 * src1, const u16 * src2);
// ??? sub_08050D38
void SpellFx_RegisterObjGfx(const void * img, u32 size);
void SpellFx_RegisterObjPal(const u16 * pal, u32 size);
void SpellFx_RegisterBgGfx(const void * img, u32 size);
void SpellFx_RegisterBgPal(const u16 * pal, u32 size);
// ??? sub_08050E2C
// ??? sub_08050E58
// ??? sub_08050E88
s16 EfxAdvanceFrameLut(s16 *ptime, s16 *pcount, const s16 lut[]);
// ??? sub_08050F48
int EfxGetCamMovDuration(void);
// ??? sub_08050F74
void EfxTmFill(u32 val);
void SetEkrFrontAnimPostion(int pos, s16 x, s16 y);
int sub_08050FE4(void);
void sub_08050FF0(int);
void NewEfxspdquake(struct Anim * anim);
// ??? sub_08051020
// ??? sub_080510F4
bool SetupBanim(void);
void BeginAnimsOnBattleAnimations(void);
// ??? EkrBattleEndRountine
// ??? sub_08051214
// ??? sub_08051288
// ??? sub_0805129C
// ??? sub_080513B0
// ??? sub_080514B8
// ??? sub_08051558
// ??? sub_080515A0
// ??? sub_080515DC
// ??? sub_08051630
// ??? sub_08051690
// ??? sub_080516A8
// ??? sub_08051720
// ??? sub_08051774
// ??? sub_080517D0
// ??? sub_08051830
// ??? sub_080518BC
// ??? sub_0805194C
// ??? sub_08051A38
// ??? sub_08051A50
// ??? sub_08051E28
// ??? NewEkrUnitKakudai
// ??? UnitKakudai1
// ??? UnitKakudai2
// ??? sub_0805226C
// ??? NewEkrWindowAppear
// ??? CheckEkrWindowAppearUnexist
// ??? sub_080522DC
// ??? NewEkrNamewinAppear
// ??? sub_080523AC
// ??? sub_080523C0
// ??? sub_080523E0
// ??? sub_0805245C
// ??? sub_080524A4
// ??? sub_080524B8
// ??? PrepareBattleGraphicsMaybe
// ??? sub_08053040
// ??? sub_0805313C
// ??? sub_08053218
// ??? sub_080532F0
// ??? sub_08053438
// ??? ParseBattleHitToBanimCmd
// ??? CheckBattleHasHit
// ??? sub_08053A14
u16 * FilterBattleAnimCharacterPalette(s16 index, u16 item);
int GetAllegienceId(u32 arg);
void EkrPrepareBanimfx(struct Anim * anim, u16 index);
s16 GetBattleAnimRoundType(int index);
s16 GetBattleAnimRoundTypeFlags(int);
s16 GetEfxHp(int index);
// ??? GetEfxHpModMaybe
// ??? IsItemDisplayedInBattle
// ??? IsWeaponLegency
// ??? EkrCheckAttackRound
// ??? SetBattleScriptted
// ??? SetBattleUnscriptted
// ??? CheckBattleScriptted
void BattleAIS_ExecCommands(void);
void AnimScrAdvance(struct Anim * anim);
void NewEkrChienCHR(struct Anim * anim);
// ??? EkrChienCHRMain
void RegisterAISSheetGraphics(struct Anim * anim);
// ??? sub_08054798
int GetBanimPalette(int banim_id, int pos);
void UpdateBanimFrame(void);
void InitMainAnims(void);
void InitBattleAnimFrame(int round_type_left, int round_type_right);
void InitLeftAnim(int);
void InitRightAnim(int);
void SwitchAISFrameDataFromBARoundType(struct Anim * anim, int);
int GetAISLayerId(struct Anim * anim);
int GetAnimPosition(struct Anim * anim);
int CheckRoundMiss(s16 type);
int CheckRound1(s16 type);
int CheckRound2(s16 type);
int CheckRoundCrit(struct Anim * anim);
struct Anim * GetAnimAnotherSide(struct Anim * anim);
s16 GetAnimRoundType(struct Anim * anim);
s16 GetAnimNextRoundType(struct Anim * anim);
s16 GetAnimRoundTypeAnotherSide(struct Anim * anim);
s16 GetAnimNextRoundTypeAnotherSide(struct Anim * anim);
void SetAnimStateHidden(int pos);
void SetAnimStateUnHidden(int pos);
// ??? sub_080550B4
// ??? sub_08055250
// ??? sub_08055274
// ??? sub_080552D8
// ??? sub_08055474
// ??? sub_080555E8
// ??? sub_080555F8
// ??? sub_08055614
// ??? sub_08055624
// ??? sub_08055644
// ??? sub_08055658
// ??? sub_08055670
// ??? sub_08055690

/* ekrmainmini */
struct BanimUnkStructComm {
    /* 00 */ s16 unk00; // terrain L
    /* 02 */ s16 unk02; // pal ID L
    /* 04 */ s16 unk04; // chr L
    /* 06 */ s16 unk06; // terrain R
    /* 08 */ s16 unk08; // pal ID R
    /* 0A */ s16 unk0A; // chr R
    /* 0C */ s16 unk0C;
    /* 0E */ s16 unk0E;
    /* 10 */ u16 unk10;
    /* 14 */ ProcPtr proc14; // sub emulator proc a
    /* 18 */ ProcPtr proc18; // sub emulator proc b
    /* 1C */ void * unk1C;
    /* 20 */ void * unk20;
    /* 24 */ void * unk24;
};

struct AnimBuffer {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 genericPalId;
    /* 02 */ u16 xPos;
    /* 04 */ u16 yPos;
    /* 06 */ s16 animId;
    /* 08 */ s16 charPalId;
    /* 0A */ u16 roundType;
    /* 0C */ u16 state2;
    /* 0E */ u16 oam2Tile;
    /* 10 */ u16 oam2Pal;
    /* 14 */ struct Anim * anim1;
    /* 18 */ struct Anim * anim2;
    /* 1C */ void * pImgSheetBuf;
    /* 20 */ void * unk_20; // pal
    /* 24 */ void * unk_24; // rtlOam
    /* 28 */ void * unk_28; // frameData
    /* 2C */ const void * unk_2C; // sheetPointer
    /* 30 */ void * unk_30; // magicEffects
    /* 34 */ void * unk_34; // ProcPtr; Procs_ekrUnitMainMini
};

extern struct BanimUnkStructComm EkrMainMiniConf_0201FAD0;

// ??? sub_080556A4
// ??? sub_080556B0
// ??? sub_080556D8
// ??? sub_080556FC
void sub_08055718(struct BanimUnkStructComm * conf); // FE8U: void sub_805AA68(struct BanimUnkStructComm * buf)
// ??? sub_08055AC4
// ??? sub_08055AF0
// ??? sub_08055B08
// ??? sub_08055C50
// ??? sub_08055CCC
// ??? GetBattleAnimArenaFlag
// ??? sub_08055CE4
// ??? sub_08055D2C
// ??? sub_08055D44
// ??? sub_08055D58
// ??? sub_08055D7C
// ??? sub_08055D94
// ??? sub_08055DA8
// ??? sub_08055E30
// ??? sub_08055EA4
// ??? sub_08055F08
// ??? sub_08055F1C
// ??? sub_08055F34
// ??? sub_08055F60
// ??? sub_08055FC4
// ??? sub_08055FF0
// ??? sub_08056024
// ??? sub_08056038
void StartSpellAnimation(struct Anim * anim);
// ??? nullsub_49
// ??? NewefxRestRST
// ??? sub_080560E8
// ??? efxRestRSTMain
// ??? NewEfxTwobaiRST
// ??? EfxTwobaiRSTMain
// ??? NewDummvRST
// ??? sub_08056228
// ??? DummvRSTMain
// ??? NewEfxRestWIN
// ??? EfxRestWINMain
// ??? sub_080563C8
// ??? sub_080563F0
// ??? sub_08056418
// ??? sub_08056454
// ??? sub_08056490
// ??? sub_080564B8
// ??? sub_080565FC
// ??? sub_0805660C
// ??? sub_08056618
// ??? NewEfxALPHA
// ??? sub_08056738
// ??? sub_0805683C
// ??? sub_0805689C
// ??? sub_080569B8
// ??? sub_080569FC
// ??? sub_08056BC8
// ??? sub_08056BEC
// ??? sub_08056C40
// ??? sub_08056C78
// ??? sub_08056D14
// ??? sub_08056DB8
// ??? sub_08056E10
// ??? sub_08056E38
// ??? sub_08056EBC
// ??? sub_08056EFC
// ??? sub_08056F40
// ??? sub_08056F50
// ??? sub_08056F98
// ??? sub_08056FD0
// ??? sub_08057088
// ??? sub_080570F0
// ??? sub_08057120
// ??? sub_0805717C
// ??? sub_080571D8
// ??? sub_08057234
// ??? sub_08057290
// ??? sub_080572EC
// ??? sub_08057348
// ??? sub_080573A4
// ??? sub_08057400
// ??? sub_0805745C
// ??? sub_080574B8
// ??? sub_08057514
// ??? sub_080575BC
// ??? sub_08057634
// ??? sub_08057664
// ??? sub_0805769C
// ??? sub_080577AC
// ??? sub_0805780C
// ??? sub_08057888
// ??? sub_080578F0
// ??? sub_08057924
// ??? sub_0805795C
// ??? sub_08057A6C
// ??? sub_08057ABC
// ??? sub_08057B7C
// ??? sub_08057BF4
// ??? sub_08057C24
// ??? sub_08057C60
// ??? sub_08057CFC
// ??? sub_08057DBC
// ??? sub_08057DF0
// ??? sub_08057E34
// ??? sub_08057EFC
// ??? sub_08057F38
// ??? sub_08057F84
// ??? sub_08057FC0
// ??? sub_0805807C
// ??? sub_080580EC
// ??? sub_08058120
// ??? sub_08058158
// ??? sub_08058208
// ??? sub_080582B8
// ??? sub_08058318
// ??? sub_0805836C
// ??? sub_080583A0
// ??? sub_080583DC
// ??? sub_0805843C
// ??? sub_08058478
// ??? sub_080584F8
// ??? sub_0805856C
// ??? sub_08058584
// ??? sub_080585BC
// ??? sub_08058648
// ??? sub_08058698
// ??? sub_080586F0
// ??? sub_0805872C
// ??? sub_08058778
// ??? sub_080587F8
// ??? sub_0805882C
// ??? sub_08058868
// ??? sub_08058908
// ??? sub_0805898C
// ??? sub_08058A10
// ??? sub_08058A4C
// ??? sub_08058A98
// ??? sub_08058AF8
// ??? sub_08058B28
// ??? sub_08058B6C
// ??? sub_08058BB0
// ??? sub_08058CB8
// ??? sub_08058D18
// ??? sub_08058D70
// ??? sub_08058DFC
// ??? sub_08058E44
// ??? sub_08058EC8
// ??? sub_08058F2C
// ??? sub_08058FC4
// ??? sub_08058FF8
// ??? sub_0805903C
// ??? sub_08059084
// ??? sub_08059108
// ??? sub_08059138
// ??? sub_08059174
// ??? sub_080592AC
// ??? sub_08059330
// ??? sub_08059394
// ??? sub_08059418
// ??? sub_0805947C
// ??? sub_080594E0
// ??? sub_08059510
// ??? sub_0805955C
// ??? sub_08059588
// ??? sub_080596E0
// ??? sub_0805979C
// ??? sub_080597D8
// ??? sub_08059898
// ??? sub_080598EC
// ??? sub_08059948
// ??? sub_0805996C
// ??? sub_080599B0
// ??? sub_080599D4
// ??? sub_080599F8
// ??? sub_08059A2C
// ??? sub_08059A90
// ??? sub_08059B08
// ??? sub_08059B4C
// ??? sub_08059BAC
// ??? nullsub_50
// ??? sub_08059BF4
// ??? sub_08059C30
// ??? sub_08059D20
// ??? sub_08059DD0
// ??? sub_08059E80
// ??? sub_08059EE4
// ??? sub_08059F28
// ??? sub_08059F74
// ??? sub_08059F8C
// ??? sub_08059FC8
// ??? sub_0805A004
// ??? sub_0805A040
// ??? sub_0805A06C
// ??? sub_0805A090
// ??? sub_0805A0CC
// ??? sub_0805A210
// ??? sub_0805A29C
// ??? sub_0805A33C
// ??? sub_0805A3C0
// ??? sub_0805A45C
// ??? sub_0805A4C8
// ??? sub_0805A530
// ??? sub_0805A594
// ??? sub_0805A5C4
// ??? sub_0805A60C
// ??? sub_0805A648
// ??? sub_0805A700
// ??? sub_0805A780
// ??? sub_0805A838
// ??? sub_0805A87C
// ??? sub_0805A8B8
// ??? sub_0805A9E8
// ??? sub_0805AA38
// ??? sub_0805AAB4
// ??? sub_0805AAE8
// ??? sub_0805AB54
// ??? sub_0805ABC0
// ??? sub_0805ABD8
// ??? sub_0805AC14
// ??? sub_0805AE14
// ??? sub_0805AE68
// ??? sub_0805AEE0
// ??? sub_0805AF28
// ??? sub_0805AF74
// ??? sub_0805AFC8
// ??? sub_0805B04C
// ??? sub_0805B09C
// ??? sub_0805B110
// ??? sub_0805B210
// ??? sub_0805B264
// ??? sub_0805B2C0
// ??? sub_0805B32C
// ??? sub_0805B384
// ??? sub_0805B404
// ??? sub_0805B52C
// ??? sub_0805B5D8
// ??? sub_0805B610
// ??? sub_0805B678
// ??? sub_0805B6B4
// ??? sub_0805B7A4
// ??? sub_0805B828
// ??? sub_0805B8AC
// ??? sub_0805B930
// ??? sub_0805B9D4
// ??? sub_0805BA48
// ??? sub_0805BA78
// ??? sub_0805BAB4
// ??? sub_0805BC20
// ??? sub_0805BCB8
// ??? sub_0805BD1C
// ??? sub_0805BD74
// ??? sub_0805BE48
// ??? sub_0805BE90
// ??? sub_0805BEDC
// ??? sub_0805BF2C
// ??? sub_0805BF80
// ??? sub_0805C064
// ??? sub_0805C0DC
// ??? sub_0805C18C
// ??? sub_0805C230
// ??? sub_0805C260
// ??? sub_0805C2B4
// ??? sub_0805C35C
// ??? nullsub_51
// ??? sub_0805C3D8
// ??? sub_0805C414
// ??? sub_0805C5B4
// ??? sub_0805C624
// ??? sub_0805C6A8
// ??? sub_0805C700
// ??? sub_0805C77C
// ??? sub_0805C7F8
// ??? sub_0805C810
// ??? sub_0805C86C
// ??? sub_0805C8C8
// ??? sub_0805C924
// ??? sub_0805C96C
// ??? sub_0805C9CC
// ??? sub_0805CA20
// ??? sub_0805CA38
// ??? sub_0805CA74
// ??? sub_0805CC58
// ??? sub_0805CCE8
// ??? sub_0805CD04
// ??? sub_0805CD34
// ??? sub_0805CD7C
// ??? sub_0805CD8C
// ??? sub_0805CDCC
// ??? sub_0805CE2C
// ??? sub_0805CE60
// ??? sub_0805CEF0
// ??? sub_0805CF78
// ??? sub_0805D044
// ??? sub_0805D08C
// ??? sub_0805D0D8
// ??? sub_0805D158
// ??? sub_0805D1D8
// ??? sub_0805D200
// ??? sub_0805D328
// ??? sub_0805D350
// ??? sub_0805D4CC
// ??? sub_0805D4F4
// ??? sub_0805D670
// ??? sub_0805D698
// ??? sub_0805D824
// ??? sub_0805D8E0
// ??? sub_0805D994
// ??? sub_0805DA04
// ??? sub_0805DA74
// ??? sub_0805DAE4
// ??? sub_0805DB2C
// ??? sub_0805DB68
// ??? sub_0805DB84
// ??? sub_0805DC18
// ??? sub_0805DC78
// ??? sub_0805DCDC
// ??? sub_0805DD10
// ??? sub_0805DD44
// ??? sub_0805DD78
// ??? sub_0805DDC0
// ??? sub_0805DE8C
// ??? sub_0805DEC0
// ??? sub_0805DEF0
// ??? sub_0805DF20
// ??? sub_0805DFF4
// ??? sub_0805E044
// ??? sub_0805E0C4
// ??? sub_0805E110
// ??? sub_0805E158
// ??? sub_0805E23C
// ??? sub_0805E31C
// ??? sub_0805E368
// ??? sub_0805E3B0
// ??? sub_0805E3EC
// ??? sub_0805E510
// ??? sub_0805E564
// ??? sub_0805E5C8
// ??? sub_0805E640
// ??? sub_0805E650
// ??? sub_0805E68C
// ??? sub_0805E794
// ??? sub_0805E820
// ??? sub_0805E878
// ??? sub_0805E8D0
// ??? sub_0805E8E8
// ??? sub_0805E924
// ??? sub_0805EA24
// ??? sub_0805EAB0
// ??? sub_0805EB08
// ??? sub_0805EB60
// ??? sub_0805EBA4
// ??? sub_0805EBB4
// ??? sub_0805EBD8
// ??? sub_0805EBF8
// ??? sub_0805EC08
// ??? sub_0805EC44
// ??? sub_0805ED64
// ??? sub_0805EDB8
// ??? sub_0805EE1C
// ??? sub_0805EE74
// ??? sub_0805EE84
// ??? sub_0805EEC0
// ??? sub_0805EFA0
// ??? sub_0805F0C0
// ??? sub_0805F124
// ??? sub_0805F150
// ??? sub_0805F1B4
// ??? sub_0805F1C4
// ??? sub_0805F21C
// ??? sub_0805F234
// ??? sub_0805F270
// ??? sub_0805F2AC
// ??? sub_0805F2E8
// ??? sub_0805F324
// ??? sub_0805F360
// ??? sub_0805F39C
// ??? sub_0805F3D8
// ??? sub_0805F414
// ??? sub_0805F450
// ??? sub_0805F48C
// ??? sub_0805F4C8
// ??? sub_0805F594
// ??? sub_0805F5F0
// ??? sub_0805F648
// ??? sub_0805F6A0
// ??? sub_0805F6E0
// ??? sub_0805F6F8
// ??? sub_0805F734
// ??? sub_0805F808
// ??? sub_0805F860
// ??? sub_0805F8C4
// ??? sub_0805F950
// ??? sub_0805F9E4
// ??? sub_0805FA28
// ??? sub_0805FA70
// ??? sub_0805FAB8
// ??? sub_0805FB64
// ??? sub_0805FBBC
// ??? sub_0805FBE8
// ??? sub_0805FC24
// ??? sub_0805FE20
// ??? sub_0805FE7C
// ??? sub_0805FED4
// ??? sub_0805FEF4
// ??? sub_0805FFB0
// ??? sub_0805FFD0
// ??? sub_08060014
// ??? sub_08060108
// ??? sub_08060124
// ??? sub_08060150
// ??? sub_08060198
// ??? sub_080601A8
// ??? sub_080601E8
// ??? sub_0806026C
// ??? sub_080602D0
// ??? sub_0806030C
// ??? sub_0806037C
// ??? sub_08060414
// ??? sub_08060494
// ??? sub_0806052C
// ??? sub_0806055C
// ??? sub_080605A4
// ??? sub_080605E0
// ??? sub_08060730
// ??? sub_0806079C
// ??? sub_080607B8
// ??? sub_0806084C
// ??? sub_08060898
// ??? sub_080608B8
// ??? sub_080608FC
// ??? sub_0806090C
// ??? sub_08060948
// ??? sub_0806096C
// ??? sub_08060A1C
// ??? sub_08060A3C
// ??? sub_08060A80
// ??? sub_08060B64
// ??? sub_08060B80
// ??? sub_08060BA0
// ??? sub_08060BE4
// ??? sub_08060C2C
// ??? sub_08060D10
// ??? sub_08060D2C
// ??? sub_08060D4C
// ??? sub_08060D90
// ??? sub_08060DD8
// ??? sub_08060E44
// ??? sub_08060E70
// ??? sub_08060EAC
// ??? sub_08061094
// ??? sub_08061128
// ??? sub_080611CC
// ??? sub_08061274
// ??? sub_08061290
// ??? sub_080612D4
// ??? sub_0806137C
// ??? sub_08061398
// ??? sub_080613B8
// ??? sub_08061400
// ??? sub_08061448
// ??? sub_080614B0
// ??? sub_080614E4
// ??? sub_08061558
// ??? sub_08061570
// ??? sub_0806158C
// ??? sub_080615A8
// ??? sub_080615C4
// ??? sub_08061600
// ??? sub_08061758
// ??? sub_080617EC
// ??? sub_08061880
// ??? sub_08061914
// ??? sub_0806196C
// ??? sub_08061A50
// ??? sub_08061A6C
// ??? sub_08061A8C
// ??? sub_08061AD4
// ??? sub_08061B1C
// ??? sub_08061B7C
// ??? sub_08061BE0
// ??? sub_08061C1C
// ??? sub_08061D84
// ??? sub_08061DE8
// ??? sub_08061E40
// ??? sub_08061EE8
// ??? sub_08061F04
// ??? sub_08061F48
// ??? sub_08061FC4
// ??? sub_08062028
// ??? sub_0806205C
// ??? sub_08062094
// ??? sub_080620FC
// ??? sub_0806221C
// ??? sub_08062350
// ??? sub_0806238C
// ??? sub_0806250C
// ??? sub_08062558
// ??? sub_080625D0
// ??? sub_08062640
// ??? sub_08062658
// ??? sub_080626BC
// ??? sub_080626D4
// ??? sub_080626F0
// ??? sub_08062748
// ??? sub_080627C4
// ??? sub_08062824
// ??? sub_080628F0
// ??? sub_08062940
// ??? sub_080629CC
// ??? sub_08062A2C
// ??? sub_08062A3C
// ??? sub_08062A9C
// ??? sub_08062AAC
// ??? sub_08062AE8
// ??? sub_08062B24
// ??? sub_08062B60
// ??? sub_08062B9C
// ??? sub_08062C68
// ??? sub_08062C9C
// ??? sub_08062CC8
// ??? sub_08062D38
void NewEfxPierceCritical(struct Anim * anim);
// ??? sub_08062D88
// ??? sub_08062DB8
// ??? sub_08062E08
// ??? sub_08062E30
// ??? sub_08062E60
void NewEfxNormalEffect(struct Anim * anim);
// ??? sub_08062EBC
// ??? sub_08062EFC
// ??? sub_08062F88
void NewEfxYushaSpinShield(struct Anim * anim, int type);
// ??? sub_08063008
// ??? sub_08063014
// ??? sub_08063094
// ??? sub_080630FC
// ??? sub_08063124
// ??? sub_08063188
void NewEfxHurtmutEff00(struct Anim * anim);
// ??? sub_080631F4
// ??? sub_08063200
// ??? sub_08063244
// ??? sub_08063290
// ??? sub_080632DC
// ??? sub_08063300
// ??? sub_08063344
// ??? sub_08063390
// ??? sub_080633DC
void NewEfxMagfcast(struct Anim * anim, int);
// ??? sub_08063460
// ??? sub_0806347C
// ??? sub_0806355C
void NewEfxSunakemuri(struct Anim * anim, int);
// ??? sub_080635E4
// ??? sub_080635F0
// ??? sub_080637D4
void NewEfxLokmsuna(struct Anim * anim);
// ??? sub_08063830
// ??? sub_0806383C
// ??? sub_080638C0
void NewEfxKingPika(struct Anim * anim);
// ??? sub_0806390C
void NewEfxFlashFX(struct Anim * anim);
// ??? sub_08063998
// ??? sub_080639F8
// ??? sub_08063A6C
// ??? sub_08063ABC
// ??? sub_08063B30
void NewEfxSpecalEffect(struct Anim *anim);
// ??? sub_08063C14
// ??? sub_08063C20
// ??? sub_08063C40
// ??? sub_08063CB0
// ??? sub_08063CFC
// ??? sub_08063D24
// ??? sub_08063D44
// ??? sub_08063DC8
// ??? sub_08063DE8
// ??? sub_08063E2C
// ??? sub_08063E4C
// ??? sub_08063E94
// ??? sub_08063F30
void NewEfxMantBatabata(struct Anim *anim);
// ??? sub_08064140
// ??? sub_0806416C
void NewEfxChillEffect(struct Anim *anim);
// ??? sub_080641D0
// ??? sub_08064214
// ??? sub_0806426C
// ??? sub_080642C4
// ??? sub_080642F4
void NewEfxChillAnime(struct Anim * anim, int);
// ??? sub_080643DC
void sub_08064458(struct Anim * anim);
// ??? sub_08064478
// ??? sub_0806452C
// ??? sub_080645D4
// ??? sub_08064644
// ??? sub_0806466C
// ??? sub_080646EC
// ??? sub_08064724
// ??? sub_08064764
// ??? sub_08064788
// ??? sub_080647C8
// ??? sub_080647DC
// ??? sub_080647F8
// ??? sub_08064814
// ??? sub_08064820
// ??? sub_0806482C
// ??? sub_08064834
// ??? sub_0806488C
// ??? sub_080648BC
// ??? sub_08064910
// ??? sub_0806497C
// ??? sub_080649AC
// ??? sub_080649D4
// ??? sub_08064A04
// ??? sub_08064A2C
// ??? nullsub_52
// ??? sub_08064A54
// ??? sub_08064A74
// ??? sub_08064A94
// ??? sub_08064AD0
// ??? sub_08064AF4
// ??? sub_08064B40
// ??? sub_08064BC0
// ??? sub_08064BE4
// ??? sub_08064C04
// ??? sub_08064C2C
// ??? sub_08064C88
// ??? sub_08064D0C
// ??? sub_08064D40
// ??? sub_08064D80
// ??? sub_08064DFC
// ??? sub_08064E20
// ??? sub_08064E3C
// ??? sub_08064EB0
// ??? sub_08064F04
// ??? sub_08064F50
// ??? sub_08064F84
// ??? sub_08064FC4
// ??? sub_08064FF4
// ??? sub_08065010
// ??? sub_08065094
// ??? sub_080650F8
// ??? sub_08065120
// ??? sub_08065140
// ??? sub_08065158
// ??? sub_080651B0

/* banim_ekrdragon.h */

/* efxutils */
void sub_08067128(u16 * tm, u16 width, u16 height, int pal, int chr);
void FillBGRect(u16 * tm, u16 width, u16 height, int pal, int chr);
void sub_080671E0(u16 * tm, u16 width, u16 height, int pal, int chr);
void EfxTmModifyPal(u16 * tm, u16 width, u16 height);
void EfxTmCpyBG(const void * ptr1, void * ptr2, u16 width, u16 height, int pal, int chr);
void EfxTmCpyBgHFlip(const u16 * tsa, u16 * tm, u16 width, u16 height, int pal, int chr);
void EfxTmCpyExt(const u16 * src, s16 src_width, u16 * dst, s16 dst_width, u16 width, u16 hight, int pal, int chr);
void EfxTmCpyExtHFlip(const u16 * src, s16 src_width, u16 * dst, s16 dst_width, u16 width, u16 hight, int pal, int chr);
void sub_0806748C(u16 * tm, int arg1, int arg2);
void EkrModifyBarfx(u16 * tm, int arg);
bool EkrPalModifyUnused(u16 * pal_start, u16 * pal_end, u16 * dst, u16 amount, u16 start, u16 end);
void EfxPalBlackInOut(u16 * pal_buf, int line, int length, int ref);
void EfxPalWhiteInOut(u16 * pal_buf, int line, int length, int ref);
void EfxPalFlashingInOut(u16 * pal_buf, int line, int length, int r0, int g0, int b0);
void EfxPalModifyPetrifyEffect(u16 * pal_buf, int line, int length);
void EfxSplitColor(u16 * pal, u8 * dst, u32 length);
void EfxSplitColorPetrify(u16 * src, u8 * dst, u32 length);
void sub_08067998(s8 * src1, s8 * src2, u16 * pal, u32 length, int ref);
void EfxDecodeSplitedPalette(u16 * dst, s8 * src1, s8 * src2, s16 * src3, u32 length, int ref, int unk);
void EfxChapterMapFadeOUT(int speed);
int sub_08067AD4(int a);
struct ProcEkrSubAnimeEmulator * NewEkrsubAnimeEmulator(int x, int y, u32 * anim_scr, int type, int oam2Base, int oamBase, ProcPtr parent);
void EkrsubAnimeEmulatorMain(struct ProcEkrSubAnimeEmulator * proc);
int GetAnimSpriteRotScaleX(u32 header);
int GetAnimSpriteRotScaleY(u32 header);
void BanimUpdateSpriteRotScale(void * src, struct AnimSpriteData * out, s16 x, s16 y, int unused);

/* efxsound */
struct ProcEfxSoundSE {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);

    /* 2C */ s16 timer;

    STRUCT_PAD(0x2E, 0x44);

    /* 44 */ int volume;
    /* 48 */ int index;
};

void EfxPlaySE(int songid, int volume);
void Loop6C_efxSoundSE(struct ProcEfxSoundSE * proc);
// ??? DoM4aSongNumStop
// ??? EfxOverrideBgm
// ??? StopBGM1
// ??? UnregisterEfxSoundSeExist
// ??? RegisterEfxSoundSeExist
// ??? CheckEfxSoundSeExist
// ??? M4aPlayWithPostionCtrl
void EfxPlaySEwithCmdCtrl(struct Anim * anim, int);
// ??? GetEfxSoundType1FromTerrain
// ??? IsAnimSoundInPositionMaybe
// ??? GetEfxSoundType2FromBaseCon
s16 sub_080684B0(struct Anim * anim);
// ??? EfxPlayHittedSFX
// ??? EfxPlayCriticalHittedSFX
// ??? EfxCheckRetaliation
// ??? GetEfxHpChangeType
// ??? EkrPlayMainBGM
// ??? EkrRestoreBGM
// ??? GetBanimBossBGM
// ??? GetProperAnimSoundLocation
void PlaySFX(int, int, int, int);
// ??? PlaySfxAutomatically

/* ekrclasschg */
// ??? sub_08068A0C
// ??? sub_08068A24
// ??? sub_08068A38
// ??? sub_08068A68
// ??? sub_08068D24
// ??? sub_08068D2C
// ??? sub_08068D70
// ??? sub_08068DB4
// ??? sub_08068E24
// ??? sub_08068E40
// ??? sub_08068EA8
// ??? sub_08068EC4
// ??? sub_08068F28
// ??? sub_08068F74
// ??? sub_08068F8C
// ??? sub_080690A0
// ??? sub_080690F8
// ??? sub_08069118
// ??? nullsub_57
// ??? sub_08069180
// ??? sub_080691B8
// ??? sub_0806925C
// ??? sub_080692A0
// ??? CheckEkrLvupDone
// ??? EndEkrLevelUp
// ??? sub_08069314
// ??? sub_080696A0
// ??? sub_080696F8
// ??? sub_08069730
// ??? NewEkrLevelup
// ??? sub_080697C4
// ??? sub_08069830
// ??? sub_08069A84
// ??? sub_08069BB4
// ??? sub_08069BE4
// ??? sub_08069C28
// ??? sub_08069D50
// ??? sub_08069D7C
// ??? sub_08069DDC
// ??? sub_08069E64
// ??? sub_08069EB8
// ??? sub_08069F38
// ??? sub_08069F68
// ??? sub_0806A05C
// ??? sub_0806A08C
// ??? sub_0806A098
// ??? sub_0806A160
// ??? sub_0806A298
// ??? sub_0806A2D4
// ??? sub_0806A2EC
// ??? nullsub_58
// ??? sub_0806A364
// ??? sub_0806A370
// ??? nullsub_59
// ??? sub_0806A38C
// ??? sub_0806A414
// ??? sub_0806A4E0
// ??? sub_0806A4EC
// ??? sub_0806A4F8
// ??? sub_0806A584
// ??? sub_0806A5C0
// ??? sub_0806A610
// ??? sub_0806A658
// ??? sub_0806A6B0
// ??? sub_0806A6FC
// ??? sub_0806A740
// ??? sub_0806A7A0
// ??? sub_0806A7AC
// ??? sub_0806A7E0
// ??? sub_0806A844
// ??? sub_0806A880
// ??? sub_0806A888
// ??? sub_0806A8D8
// ??? sub_0806A93C
// ??? sub_0806A958
// ??? sub_0806A9C0
// ??? sub_0806AAA0
// ??? sub_0806ABB4
// ??? sub_0806AC24
// ??? sub_0806AC5C
// ??? sub_0806AC84
// ??? nullsub_10
// ??? sub_0806AC9C
// ??? sub_0806ACC0
// ??? sub_0806AEC4
// ??? sub_0806AEFC
// ??? sub_0806AFB4
// ??? sub_0806B040
// ??? sub_0806B088
// ??? sub_0806B134
// ??? sub_0806B15C
// ??? sub_0806B194
// ??? sub_0806B264
// ??? sub_0806B3E8
// ??? sub_0806B440
// ??? sub_0806B550
// ??? sub_0806B598
// ??? sub_0806B5C0
// ??? sub_0806B5F8
// ??? sub_0806B778
// ??? sub_0806B798
// ??? sub_0806B7DC
// ??? sub_0806B800
// ??? CheckEkrPopupDone
// ??? EndEkrPopup
// ??? EfxPlaySound5AVol100
// ??? sub_0806B88C
// ??? MakeBattlePopupTileMapFromTSA
// ??? DrawBattlePopup
// ??? NewEkrPopup
// ??? EkrPopup_Delay
// ??? EkrPopup_DrawWRankUp
// ??? ekrPopup_WaitWRankUp
// ??? ekrPopup_DrawWRankUp2
// ??? sub_0806BDE0
// ??? sub_0806BE18
// ??? sub_0806BE40
// ??? sub_0806BE78
// ??? sub_0806BEA0
// ??? sub_0806BEDC
// ??? nullsub_60
// ??? sub_0806BF10
// ??? sub_0806BF3C
// ??? sub_0806BF78
// ??? sub_0806BF94
// ??? sub_0806BFB8
