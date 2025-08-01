#include "game.h"
#include "inline_no_dmpsx.h"

#include <libapi.h>
#include <strings.h>

#include "bodyprog/bodyprog.h"
#include "bodyprog/math.h"
#include "bodyprog/player_logic.h"
#include "main/rng.h"

extern s_800C4168 D_800C4168;

void func_80054FC0(s32* arg0, s32* arg1, u8 idx) // 0x80054FC0
{
    s32 var;

    var = D_800AD4A0[idx] - *arg0;
    if (var == 0)
    {
        return;
    }

    if (*arg1 >= var)
    {
        *arg0 += var;
        *arg1 -= var;
        return;
    }

    *arg0 += *arg1;
    *arg1  = 0;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055028); // 0x80055028

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800550D0); // 0x800550D0

void func_80055330(u8 arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) // 0x80055330
{
    D_800C4168.field_0          = arg0;
    D_800C4168.field_20         = arg1;
    D_800C4168.field_3          = arg2;
    D_800C4168.field_28.field_0 = arg3 >> 5;
    D_800C4168.field_30         = arg3;
    D_800C4168.field_2E         = arg3;
    D_800C4168.field_2C         = arg3;
    D_800C4168.field_28.field_1 = arg4 >> 5;
    D_800C4168.field_8          = arg6;
    D_800C4168.field_28.field_2 = arg5 >> 5;
    D_800C4168.field_36         = arg4;
    D_800C4168.field_34         = arg4;
    D_800C4168.field_32         = arg4;
    D_800C4168.field_3C         = arg5;
    D_800C4168.field_3A         = arg5;
    D_800C4168.field_38         = arg5;
    D_800C4168.field_24         = (arg3 * arg1) >> 17;
    D_800C4168.field_25         = (arg4 * arg1) >> 17;
    D_800C4168.field_26         = (arg5 * arg1) >> 17;
}

void func_800553C4(u8 arg0, u8 arg1, u8 arg2, u8 arg3) // 0x800553C4
{
    D_800C4168.field_1  = arg0;
    D_800C4168.field_1C = arg1;
    D_800C4168.field_1D = arg2;
    D_800C4168.field_1E = arg3;
}

void func_800553E0(u32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6) // 0x800553E0
{
    D_800C416A = arg0;

    if (arg0 != 0)
    {
        func_80040E7C(arg1, arg2, arg3, arg4, arg5, arg6);
    }
}

void func_80055434(VECTOR3* vec) // 0x80055434
{
    *vec = D_800C4168.field_60;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005545C); // 0x8005545C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055490); // 0x80055490

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800554C4); // 0x800554C4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055648); // 0x80055648

s32 func_800557DC() // 0x800557DC
{
    MATRIX mat;

    func_80049C2C(&mat, D_800C4168.field_60.vx, D_800C4168.field_60.vy, D_800C4168.field_60.vz);
    return mat.t[2] * 16;
}

void func_80055814(s32 arg0) // 0x80055814
{
    s32 temp;

    temp       = func_800559A8(arg0);
    D_800C4180 = FP_FLOAT_TO(1.0f, Q12_SHIFT) - temp;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055840); // 0x80055840

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800559A8); // 0x800559A8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055A50); // 0x80055A50

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055A90); // 0x80055A90

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055B74); // 0x80055B74

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055C3C); // 0x80055C3C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055D78); // 0x80055D78

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055E90); // 0x80055E90

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055ECC); // 0x80055ECC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80055F08); // 0x80055F08

void func_800560FC(s_800BE9FC* arg0) // 0x800560FC
{
    s32 i;

    if (arg0->field_2 != 1)
    {
        arg0->field_2 = 1;

        arg0->field_4  += (u32)arg0;
        arg0->field_C  += (u32)arg0;
        arg0->field_10 += (u32)arg0;

        for (i = 0; i < arg0->field_8; i++)
        {
            if (arg0->field_0 == 48)
            {
                func_800561A4(&arg0->field_C[i * 16], arg0);
            }
        }
    }
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800561A4); // 0x800561A4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056244); // 0x80056244

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056348); // 0x80056348

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800563E8); // 0x800563E8

void func_80056464(s_800BE9FC* arg0, s32 fileIdx, s32* arg2, s32 arg3) // 0x80056464
{
    char  sp10[8];
    char  sp18[16];
    char* sp10Ptr;
    char* sp18Ptr;

    // Probably a `memset`.
    *(int*)sp10 = *(int*)(sp10 + 4) = 0;

    Fs_GetFileName(sp18, fileIdx);

    sp10Ptr = sp10;
    sp18Ptr = sp18;

    while (sp10Ptr < sp18 && *sp18Ptr != '.')
    {
        *sp10Ptr++ = *sp18Ptr++;
    }

    func_80056558(arg0, sp10, arg2, arg3);
}

void func_80056504(s_800BE9FC* arg0, s8* arg1, s32* arg2, s32 arg3) // 0x80056504
{
    s8 sp10[8];

    func_80056D64(&sp10, arg1);
    func_80056558(arg0, &sp10, arg2, arg3);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056558); // 0x80056558

void func_8005660C(s_func_8005660C_0* arg0, s_func_8005660C_1* arg1, s32 arg2) // 0x8005660C
{
    s32 coeff;

    coeff = 4;
    switch (arg1->field_0)
    {
        default:
        case 0:
            break;

        case 1:
            coeff = 2;
            break;

        case 2:
            coeff = 1;
            break;
    }

    arg0->field_14 = arg1->field_2 * coeff;
    arg0->field_15 = arg1->field_3;

    arg0->field_E  = ((arg1->field_0 & 0x3) << 7) | ((arg2 & 0x3) << 5) | (arg1->field_1 & (1 << 4)) | (arg1->field_1 & 0xF);
    arg0->field_10 = (arg1->field_6 << 6) | ((arg1->field_4 >> 4) & 0x3F);
}

void func_800566B4(s_func_800566B4* arg0, s_FsImageDesc* image, s8 unused, s32 startIdx, s32 arg4) // 0x800566B4
{
    char                 filename[16];
    s_func_800566B4_sub* var_s0;
    s_FsImageDesc*       imagePtr;
    s32                  i;

    // Loop could be using `&image[i]`/`&arg0->field_4[i]` instead? Wasn't able to make that match though.
    imagePtr = image;
    var_s0   = arg0->field_4;

    for (i = 0; i < arg0->field_3; i++, var_s0++, imagePtr++)
    {
        func_8005B3BC(filename, var_s0);
        Fs_QueueStartReadTim(Fs_FindNextFile(filename, 0, startIdx), FS_BUFFER_9, imagePtr);
        func_8005660C(var_s0, imagePtr, arg4);
    }
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056774); // 0x80056774

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056888); // 0x80056888

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056954); // 0x80056954

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056A88); // 0x80056A88

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056BF8); // 0x80056BF8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056C80); // 0x80056C80

void func_80056C8C(s_Bone* bone, s_800BE9FC* arg1, s32 arg2)
{
    u8* field_C;
    
    field_C       = arg1->field_C;
    bone->field_C = arg2;

    if (arg1->field_0 == '0') // Maybe `s_800BE9FC`'s `field_0` is `char*`? But its used as `s32` somewhere.
    {
        bone->field_8 = field_C + (arg2 * 16);
    }
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056CB4); // 0x80056CB4

void func_80056D64(s8* prevStr, s8* newStr) // 0x80056D64
{
    *(s32*)&prevStr[4] = 0;
    *(s32*)&prevStr[0] = 0;
    strncpy(prevStr, newStr, 8);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80056D8C); // 0x80056D8C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057090); // 0x80057090

// TODO: .rodata migration and odd code.
#ifdef NON_MATCHING
s32 func_800571D0(u32 arg0) // 0x800571D0
{
    switch (arg0)
    {
        case 0:
        default:
            return 2;

        case 1:
            return 0;

        case 2:
            return 4;

        case 3:
            return 33;

        case 4:
            return 66;

        case 5:
            return 99;
    }
}
#else
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800571D0); // 0x800571D0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057200); // 0x80057200

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057208); // 0x80057208

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057210); // 0x80057210

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057218); // 0x80057218

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057220); // 0x80057220
#endif

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057228); // 0x80057228

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057344); // 0x80057344

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800574D4); // 0x800574D4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005759C); // 0x8005759C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057658); // 0x80057658

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057A3C); // 0x80057A3C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80057B7C); // 0x80057B7C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005801C); // 0x8005801C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80059D50); // 0x80059D50

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80059E34); // 0x80059E34

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005A21C); // 0x8005A21C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005A42C); // 0x8005A42C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005A478); // 0x8005A478

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005A838); // 0x8005A838

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005A900); // 0x8005A900

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005AA08); // 0x8005AA08

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005AC50); // 0x8005AC50

// Related to enviroment textures.
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005B1A0); // 0x8005B1A0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005B1FC); // 0x8005B1FC

void func_8005B370(s_func_8005B370* arg0) // 0x8005B370
{
    arg0->field_14 = 0;
}

// https://decomp.me/scratch/ptoP0
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005B378); // 0x8005B378

void func_8005B3A4(s_func_8005B3A4* arg0) // 0x8005B3A4
{
    arg0->field_C  = 0;
    arg0->field_8  = 0;
    arg0->field_14 = 0;
    arg0->field_10 = NO_VALUE;
}

void func_8005B3BC(char* filename, s_func_800566B4_sub* arg1) // 0x8005B3BC
{
    char sp10[12];

    // Some inline `memcpy`/`bcopy`/`strncpy`? those use `lwl`/`lwr`/`swl`/`swr` instead though
    // Example: casting `filename`/`arg1` to `u32*` and using `memcpy` does generate `lw`/`sw`,
    // but not in same order as this, guess it's some custom inline/macro instead.
    *(u32*)&sp10[0] = *(u32*)&arg1->unk_0[0];
    *(u32*)&sp10[4] = *(u32*)&arg1->unk_0[4];
    *(u32*)&sp10[8] = 0;

    strcat(sp10, D_80028544); // Copies `TIM` to end of `sp10` string.

    *(u32*)&filename[0] = *(u32*)&sp10[0];
    *(u32*)&filename[4] = *(u32*)&sp10[4];
    *(u32*)&filename[8] = *(u32*)&sp10[8];
}

void func_8005B424(VECTOR3* arg0, VECTOR3* arg1) // 0x8005B424
{
    arg0->vz = 0;
    arg0->vy = 0;
    arg0->vx = 0;
    
    if (arg1 == NULL)
    {
        return;
    }

    *((s_func_8005B424*)arg0) = *((s_func_8005B424*)arg1);
}

void func_8005B46C(s32* arg0) // 0x8005B46C
{
    *arg0 = 0;
}

void func_8005B474(s32* arg0, u32 arg1, s32 idx) // 0x8005B474
{
    u32  temp_a2;
    u32  var_a1;
    u32* ptr;

    var_a1  = arg1;
    temp_a2 = var_a1 + (idx * 24);
    ptr     = arg0 + 1;

    for (; var_a1 < temp_a2; ptr++)
    {
        *ptr    = var_a1;
        var_a1 += 24;
        *arg0  += 1;
    }
}

// INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005B4BC); // 0x8005B4BC

s_800C1450_0_4* func_8005B4BC(char* arg0, s_800C1450* arg1) // 0x8005B4BC
{
    s_800C1450_0_4* v1;
    char            sp_10[8];
    s32             i;

    func_80056D64(sp_10, arg0);

    for (i = 0; i < arg1->field_0.count_0; ++i)
    {
        v1 = arg1->field_0.entries_4[i];
        // "gotta go fast" style string comparison
        // this means s_800C1450_0_4::field_8 is also likely a char[8]
        if (v1->field_10 != -1 && *(u32*)&sp_10[0] == v1->field_8 && *(u32*)&sp_10[4] == v1->field_C)
        {
            return v1;
        }
    }

    return NULL;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005B55C); // 0x8005B55C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005B62C); // 0x8005B62C

void func_8005BF0C(s16 unused, s16 x, s16 y) // 0x8005BF0C
{
    Gfx_DebugStringPosition(x, y);
}

s16 func_8005BF38(s16 arg0) // 0x8005BF38
{
    s16 res;
    s16 temp;

    temp = arg0 & 0xFFF;
    res  = temp;

    if (temp > 0x800)
    {
        res = temp | 0xF000;
    }

    return res;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005BF58); // 0x8005BF58

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005C1CC); // 0x8005C1CC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005C478); // 0x8005C478

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005C7B0); // 0x8005C7B0

s32 func_8005C7D0(s_SubCharacter* chara, s32 moveSpeed) // 0x8005C7D0
{
    s32             i = 0;
    s_SubCharacter* npc;
    s_SubCharacter* player;

    if (chara == &g_SysWork.player_4C)
    {
        return NPC_COUNT_MAX;
    }

    npc    = &g_SysWork.npcs_1A0;
    player = chara;
    for (i = 0; i < NPC_COUNT_MAX; i++, npc++)
    {
        if (player == npc)
        {
            return i;
        }
    }

    return NO_VALUE;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005C814); // 0x8005C814

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005C944); // 0x8005C944

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005CB20); // 0x8005CB20

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005CD38); // 0x8005CD38

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005D50C); // 0x8005D50C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005D86C); // 0x8005D86C

s32 func_8005D974() // 0x8005D974
{
    s32 val = func_8005D86C();

    if (val > 0x4000)
    {
        val = 0x4000;
    }
    else if (val < 0)
    {
        val = 0;
    }

    return val;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005D9B8); // 0x8005D9B8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005DC1C); // 0x8005DC1C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005DC3C); // 0x8005DC3C

void func_8005DD44(s32 arg0, VECTOR3* arg1, s32 arg2, s8 arg3) // 0x8005DD44
{
    s32 var_a2;
    s32 var_s1;

    if (g_GameWork.config_0.optSoundType_1E != 0)
    {
        var_s1 = 0;
    }
    else
    {
        var_s1 = func_80040A64(arg1);
    }

    if (arg2 >= 0x100)
    {
        arg2 = 0xFF;
    }
    else if (arg2 < 0)
    {
        arg2 = 0;
    }

    var_a2 = func_8005D9B8(arg1, arg2);
    if (var_a2 >= 0x100)
    {
        var_a2 = 0xFF;
    }

    func_80046620(arg0 & 0xFFFF, var_s1, ~var_a2 & 0xFF, arg3);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005DE0C); // 0x8005DE0C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005E0DC); // 0x8005E0DC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005E414); // 0x8005E414

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005E650); // 0x8005E650

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005E70C); // 0x8005E70C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005E7E0); // 0x8005E7E0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005E89C); // 0x8005E89C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005F55C); // 0x8005F55C

s32 func_8005F680(s_func_800699F8* arg0) // 0x8005F680
{
    s32 var_a0;
    s8 temp_v1;

    temp_v1 = arg0->field_8;
    var_a0 = 0;
    if ((temp_v1 == 0) || (temp_v1 == 0xC) || (temp_v1 == 7))
    {
        var_a0 = 1;
    }
    return var_a0;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8005F6B0); // 0x8005F6B0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80060044); // 0x80060044

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800611C0); // 0x800611C0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800622B8); // 0x800622B8

void func_800625F4(VECTOR3* arg0, s16 arg1, s32 arg2, s32 arg3) // 0x800625F4
{
    s32 idx;
    s8  var;

    var = func_8005F55C(arg2);

    idx = func_8005E7E0(4);
    if (idx == NO_VALUE)
    {
        return;
    }

    g_MapOverlayHeader.field_4C[idx].field_0  = arg0->vx;
    g_MapOverlayHeader.field_4C[idx].field_8  = arg0->vy;
    g_MapOverlayHeader.field_4C[idx].field_4  = arg0->vz;
    g_MapOverlayHeader.field_4C[idx].field_E  = arg1;
    g_MapOverlayHeader.field_4C[idx].field_D  = var;
    g_MapOverlayHeader.field_4C[idx].field_B  = TEST_RNG(2);
    g_MapOverlayHeader.field_4C[idx].field_C  = 6;
    g_MapOverlayHeader.field_4C[idx].field_10 = arg3 * 0x5000;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80062708); // 0x80062708

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006342C); // 0x8006342C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80063A50); // 0x80063A50

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80064334); // 0x80064334

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80064F04); // 0x80064F04

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80064FC0); // 0x80064FC0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800652F4); // 0x800652F4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80065B94); // 0x80065B94

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80066184); // 0x80066184

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80066D90); // 0x80066D90

void func_80066E40() // 0x80066E40
{
    DrawSync(0);
    StoreImage(&D_80028A20, FS_BUFFER_3);
    DrawSync(0);
}

void func_80066E7C() // 0x80066E7C
{
    LoadImage(&D_80028A20, FS_BUFFER_3);
    DrawSync(0);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", GameState_MapScreen_Update); // 0x80066EB0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80067914); // 0x80067914

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80068CC0); // 0x80068CC0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80068E0C); // 0x80068E0C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800692A4); // 0x800692A4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800697EC); // 0x800697EC

u16 func_80069810() // 0x80069810
{
    return D_800C4478.field_0;
}

void func_80069820(u16 arg0) // 0x80069820
{
    D_800C4478.field_0 = arg0;
}

void func_8006982C(u16 arg0) // 0x8006982C
{
    D_800C4478.field_0 |= arg0;
}

void func_80069844(s32 arg0) // 0x80069844
{
    D_800C4478.field_0 = (D_800C4478.field_0 & ~arg0) | (1 << 0);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80069860); // 0x80069860

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006993C); // 0x8006993C

void func_80069994(s_func_800699E4* arg0) // 0x80069994
{
    s32* ptr;

    arg0->field_30++;

    if (arg0->field_30 > 252)
    {
        arg0->field_30 = 0;

        // TODO: Is this memset/bzero?
        for (ptr = &arg0->field_34[0]; ptr < &arg0->field_34[256]; ptr++)
        {
            *ptr = 0;
        }
    }
}

void func_800699E4(s_func_800699E4* arg0) // 0x800699E4
{
    arg0->field_30++;
}

void func_800699F8(s_func_800699F8* result, s32 posX, s32 posZ) // 0x800699F8
{
    s_func_8006AB50 sp10;
    VECTOR3         sp28;
    s_func_8006CC44 sp38;
    u8              spD0_unused[40]; // Might be part of `s_func_8006CC44`.

    s32 temp_v0;

    sp28.vx = 0;
    sp28.vy = 0;
    sp28.vz = 0;

    temp_v0 = func_800426E4(posX, posZ);
    if (!temp_v0)
    {
        result->chara_grnd_0 = FP_METER(8.0f);
        result->field_6      = 0;
        result->field_4      = 0;
        result->field_8      = 0;
        return;
    }

    sp10.position_0.vx = posX;
    sp10.position_0.vy = 0;
    sp10.position_0.vz = posZ;
    sp10.rotation_C.vx = 0;
    sp10.rotation_C.vy = 0;
    sp10.rotation_C.vz = 0;
    func_8006AB50(&sp38, &sp28, &sp10, 0);

    sp38.field_0_8  = 0;
    sp38.field_0_9  = 0;
    sp38.field_0_10 = 1;
    func_8006AD44(&sp38, temp_v0);

    if (sp38.field_90 == 1)
    {
        result->field_8      = 0;
        result->chara_grnd_0 = FP_METER(8.0f);
    }
    else
    {
        result->field_8      = sp38.field_94;
        result->chara_grnd_0 = func_8006CC44(sp38.field_4.positionX_18, sp38.field_4.positionZ_1C, &sp38) * 16;
    }

    result->field_4 = sp38.field_88;
    result->field_6 = sp38.field_8C;
}

s32 func_80069B24(s32 arg0, void* arg1, void* arg2) // 0x80069B24
{
    s32 var0; 
    s32 var1;

    var0 = SetSp(0x1F8003D8);
    var1 = func_80069BA8(arg0, arg1, arg2, func_80069FFC(arg0, arg1, arg2));
    SetSp(var0);
    return var1; 
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80069BA8); // 0x80069BA8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80069DF0); // 0x80069DF0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80069FFC); // 0x80069FFC

void func_8006A178(s_func_8006A178* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) // 0x8006A178
{
    arg0->field_0  = arg1;
    arg0->field_4  = arg2;
    arg0->field_8  = arg3;
    arg0->field_12 = 0;
    arg0->field_10 = 0;
    arg0->field_14 = 0;
    arg0->field_18 = 0xFFFF0000;
    arg0->field_C  = arg4;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006A1A4); // 0x8006A1A4

s32 func_8006A3B4(s32 arg0, s32 arg1, s32 arg2) // 0x8006A3B4
{
    s32 var0;
    s32 var1;

    var0 = SetSp(0x1F8003D8);
    var1 = func_8006A42C(arg0, arg1, arg2);
    SetSp(var0);

    if (var1 == NO_VALUE)
    {
        var1 = 1;
    }

    return var1;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006A42C); // 0x8006A42C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006A4A8); // 0x8006A4A8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006A940); // 0x8006A940

void func_8006AB50(s_func_8006CC44* arg0, VECTOR3* vec, s_func_8006AB50* arg2, s32 arg3) // 0x8006AB50
{
    arg0->field_0_0       = 0;
    arg0->field_2         = D_800C4478.field_0;
    arg0->field_4.field_4 = arg3;

    func_8006ABC0(&arg0->field_4, vec, arg2);

    arg0->field_7C = 0x1E00;
    arg0->field_34 = 0;
    arg0->field_44 = 0;
    arg0->field_4A = 0;
    arg0->field_4C = 0;
    arg0->field_7A = 0;
    arg0->field_74 = 0;
    arg0->field_8C = 0;
    arg0->field_88 = 0;
    arg0->field_90 = 1;
    arg0->field_94 = 0;
}

void func_8006ABC0(s_func_8006ABC0* result, VECTOR3* vec, s_func_8006AB50* arg2) // 0x8006ABC0
{
    s16 angleXz;

    result->field_C.vx = FP_FROM(vec->vx, Q4_SHIFT);
    result->field_C.vy = FP_FROM(vec->vy, Q4_SHIFT);
    result->field_C.vz = FP_FROM(vec->vz, Q4_SHIFT);

    result->field_8 = SquareRoot0(SQUARE(result->field_C.vx) + SQUARE(result->field_C.vz));

    if (result->field_8 != 0)
    {
        result->directionX_14 = FP_METER(result->field_C.vx) / result->field_8;
        result->directionZ_16 = FP_METER(result->field_C.vz) / result->field_8;
        angleXz               = ratan2(result->field_C.vz, result->field_C.vx);
        result->directionX_14 = shRcos(angleXz);
        result->directionZ_16 = shRsin(angleXz);
    }
    else
    {
        result->directionX_14 = FP_METER(1.0f);
        result->directionZ_16 = 0;
    }

    result->field_28     = FP_FROM(arg2->rotation_C.vz, Q4_SHIFT);
    result->positionX_18 = FP_FROM(arg2->position_0.vx, Q4_SHIFT);
    result->positionZ_1C = FP_FROM(arg2->position_0.vz, Q4_SHIFT);
    result->field_20     = result->positionX_18 + result->field_C.vx;
    result->field_24     = result->positionZ_1C + result->field_C.vz;
    result->field_2A     = FP_FROM(arg2->rotation_C.vy + arg2->position_0.vy, Q4_SHIFT);
    result->field_2C     = FP_FROM(arg2->rotation_C.vx + arg2->position_0.vy, Q4_SHIFT);
    result->field_0      = arg2->field_12;
}

void func_8006AD44(s_func_8006CC44* arg0, s_func_800699E4* arg1) // 0x8006AD44
{
    s32  temp_s4;
    s32* var_s0;
    s32  temp_s5;
    s32  var_s1;
    s32  var_s2;

    if ((arg1->field_8_8 == 0 && arg1->field_8_16 == 0 && arg1->field_8_24 == 0) || !func_8006AEAC())
    {
        return;
    }

    if (arg0->field_0_0 == 0)
    {
        func_80069994(arg1);
    }

    temp_s5 = arg0->field_A0;
    temp_s4 = (arg0->field_A0 + arg0->field_A2) - 1;

    for (var_s2 = arg0->field_A1; var_s2 < (arg0->field_A1 + arg0->field_A3); var_s2++)
    {
        var_s0 = &arg1->field_20[(var_s2 * arg1->field_1E) + temp_s5];

        for (var_s1 = temp_s5; var_s1 <= temp_s4; var_s1++, var_s0++)
        {
            func_8006B1C8(arg0, arg1, var_s0);
        }
    }

    if (arg0->field_0_0 == 0)
    {
        func_800699E4(arg1);
    }

    if (arg0->field_0_10)
    {
        func_8006C838(arg0, arg1);
        if (arg0->field_A4 != 0)
        {
            func_8006CA18(arg0, arg1, arg0->field_A4);
        }
    }
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006AEAC); // 0x8006AEAC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006B004); // 0x8006B004

void func_8006B1C8(s_func_8006CC44* arg0, s_func_800699E4* arg1, s_func_8006B1C8* arg2) // 0x8006B1C8
{
    s32 var;
    s32 i;
    u8  idx;

    for (i = arg2->field_0; i < arg2->field_4; i++)
    {
        idx = arg1->field_28[i];

        if (arg1->field_30 >= arg1->field_34[idx])
        {
            arg1->field_34[idx] = arg1->field_30 + 1;
            var                 = arg1->field_8_16;

            if (idx < var)
            {
                if (func_8006B318(arg0, arg1, idx) != 0)
                {
                    if (arg0->field_0_10)
                    {
                        func_8006B6E8(arg0, arg2);
                    }

                    if (arg0->field_0_8 || arg0->field_0_9)
                    {
                        if (arg0->field_D9 == 0xFF)
                        {
                            func_8006B9C8(arg0);
                        }

                        if (arg0->field_D8 == 0xFF)
                        {
                            func_8006B8F8(arg0->unk_CC); // TODO: `unk_CC` is struct? 56 bytes?
                            func_8006B9C8(arg0);
                        }
                    }
                }
            }
            else if (func_8006C3D4(arg0, arg1, idx) != 0)
            {
                func_8006C45C(arg0);
            }
        }
    }
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006B318); // 0x8006B318

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006B6E8); // 0x8006B6E8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006B7E0); // 0x8006B7E0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006B8F8); // 0x8006B8F8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006B9C8); // 0x8006B9C8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006BB50); // 0x8006BB50

s32 func_8006BC34(s_func_8006BC34* arg0)
{
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v1;
    u16 temp_a1;
    u16 var_v0;

    temp_v1 = arg0->field_EC;
    if (temp_v1 < 0)
    {
        var_v0 = arg0->field_E0;
    }
    else
    {
        temp_a2 = arg0->field_D6;
        if (temp_a2 < temp_v1)
        {
            var_v0 = arg0->field_E6;
        }
        else
        {
            temp_a3 = arg0->field_E0;
            temp_v0 = arg0->field_E6;
            temp_a1 = arg0->field_E0;
            
            if (temp_a3 == temp_v0)
            {
                var_v0 = temp_a1;
            }
            else
            {
                var_v0 = temp_a1 + ((s32)((temp_v0 - temp_a3) * temp_v1) / temp_a2);
            }
        }
    }
    
    return arg0->field_30 - (s16)var_v0;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006BCC4); // 0x8006BCC4

void func_8006BDDC(s_func_8006BDDC* arg0, s16 arg1, s16 arg2) // 0x8006BDDC
{
    if (arg0->field_0 == 0)
    {
        arg0->field_0 = 1;
        arg0->field_2 = arg1;
        arg0->field_4 = arg2;
        return;
    }

    arg0->field_0++;
    Vw_ClampAngleRange(&arg0->field_2, &arg0->field_4, arg1, arg2);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006BE40); // 0x8006BE40

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006BF88); // 0x8006BF88

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006C0C8); // 0x8006C0C8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006C1B8); // 0x8006C1B8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006C248); // 0x8006C248

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006C3D4); // 0x8006C3D4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006C45C); // 0x8006C45C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006C794); // 0x8006C794

void func_8006C838(s_func_8006CC44* arg0, s_func_800699E4* arg1) // 0x8006C838
{
    s32                 var_a0;
    s_func_800699E4_10* temp_a1;
    s_func_800699E4_18* temp_a0;
    s_func_8006CC44_A8* var_t1;

    if (!arg0->field_A4)
    {
        return;
    }

    if (arg0->field_C8 != 0xFF)
    {
        if (arg0->field_CA < arg0->field_7C)
        {
            temp_a0        = &arg1->ptr_18[arg0->field_C8 - arg1->field_8_16];
            arg0->field_7C = arg0->field_CA;
            arg0->field_80 = arg0->field_98 + arg1->field_0;
            arg0->field_84 = arg0->field_9A + arg1->field_4;
            arg0->field_88 = 0;
            arg0->field_8C = 0;
            arg0->field_90 = temp_a0->field_0_5;
            arg0->field_94 = temp_a0->field_0_0;
        }
    }

    for (var_t1 = &arg0->field_A8[0]; var_t1 < &arg0->field_A8[4]; var_t1++)
    {
        if (var_t1->field_1 != 0xFF)
        {
            temp_a1 = &arg1->ptr_10[var_t1->field_1];

            var_a0 = temp_a1->field_2;

            if (temp_a1->field_8 != 0)
            {
                var_a0 += FP_FROM(temp_a1->field_8 * (arg0->field_98 - temp_a1->field_0), Q12_SHIFT);
            }

            if (temp_a1->field_A != 0)
            {
                var_a0 += FP_FROM(temp_a1->field_A * (arg0->field_9A - temp_a1->field_4), Q12_SHIFT);
            }

            if (var_a0 < arg0->field_7C)
            {
                arg0->field_7C = var_a0;
                arg0->field_80 = arg0->field_98 + arg1->field_0;
                arg0->field_84 = arg0->field_9A + arg1->field_4;
                arg0->field_88 = temp_a1->field_8;
                arg0->field_8C = temp_a1->field_A;
                arg0->field_90 = temp_a1->field_6_5;
                arg0->field_94 = temp_a1->field_6_0;
            }
        }
    }
}

void func_8006CA18(s_func_8006CC44* arg0, s_func_800699E4* arg1, s_func_8006CA18* arg2) // 0x8006CA18
{
    s32                 startIdx;
    s32                 endIdx;
    s32                 var_a2;
    s_func_800699E4_10* ptr;
    u8*                 var_t1;

    startIdx = arg2->field_2;
    endIdx   = arg2->field_6;

    if (startIdx == endIdx)
    {
        return;
    }

    for (var_t1 = &arg1->field_2C[startIdx]; var_t1 < &arg1->field_2C[endIdx]; var_t1++)
    {
        ptr = &arg1->ptr_10[*var_t1];

        if (((arg0->field_2 >> ptr->field_6_11) & (1 << 0)) && ptr->field_6_5 != 1)
        {
            var_a2 = ptr->field_2;

            if (ptr->field_8 != 0)
            {
                var_a2 += FP_FROM(ptr->field_8 * (arg0->field_98 - ptr->field_0), Q12_SHIFT);
            }

            if (ptr->field_A != 0)
            {
                var_a2 += FP_FROM(ptr->field_A * (arg0->field_9A - ptr->field_4), Q12_SHIFT);
            }

            if (var_a2 < arg0->field_7C)
            {
                arg0->field_7C = var_a2;
                arg0->field_80 = arg0->field_98 + arg1->field_0;
                arg0->field_84 = arg0->field_9A + arg1->field_4;
                arg0->field_88 = ptr->field_8;
                arg0->field_8C = ptr->field_A;
                arg0->field_90 = ptr->field_6_5;
                arg0->field_94 = ptr->field_6_0;
            }
        }
    }
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006CB90); // 0x8006CB90

s32 func_8006CC44(s32 arg0, s32 arg1, s_func_8006CC44* arg2) // 0x8006CC44
{
    if (arg2->field_94 != 12)
    {
        return FP_MULTIPLY(arg2->field_88, arg0 - arg2->field_80, Q12_SHIFT) +
               FP_MULTIPLY(arg2->field_8C, arg1 - arg2->field_84, Q12_SHIFT) +
               arg2->field_7C;
    }

    return FP_FLOAT_TO(0.5f, Q12_SHIFT);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006CC9C); // 0x8006CC9C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006CF18); // 0x8006CF18

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006D01C); // 0x8006D01C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006D2B4); // 0x8006D2B4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006D600); // 0x8006D600

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006D774); // 0x8006D774

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006D7EC); // 0x8006D7EC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006D90C); // 0x8006D90C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006DA08); // 0x8006DA08

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006DAE4); // 0x8006DAE4

static inline void func_8006DB3C_Inline(s8* arg0, VECTOR3* arg1, s32 arg2, u16* p)
{
    func_8006DAE4(arg0, arg1, arg2, (short)*p);
}

s32 func_8006DB3C(s_func_800700F8_2* arg0, VECTOR3* arg1, VECTOR3* arg2, s_func_800700F8* arg3) // 0x8006DB3C
{
    s32 sp28;
    s32 temp_s0;
    s32 temp_v0;
    s32 scratchAddr;

    temp_v0       = func_8006A1A4(&sp28, arg3, 1);
    arg0->field_0 = 0;

    if (func_8006DCE0((s32)PSX_SCRATCH, 1, 0, arg1, arg2, 0, 0, temp_v0, sp28) != 0)
    {
        temp_s0       = SetSp((s32)PSX_SCRATCH_ADDR(984));
        scratchAddr   = (s32)PSX_SCRATCH;
        arg0->field_0 = func_8006DEB0(arg0, scratchAddr);

        SetSp(temp_s0);
    }

    if (arg0->field_0 == 0)
    {
        func_8006DB3C_Inline(arg0, arg1, arg2, &((u8*)scratchAddr)[92]);
    }

    return arg0->field_0;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006DC18); // 0x8006DC18

s32 func_8006DCE0(s_func_8006DCE0* arg0, s32 arg1, s16 arg2, VECTOR3* pos0, VECTOR3* pos1, s32 arg5, s32 arg6, s32 arg7, s32 arg8)
{
    if (pos1->vx == 0 && pos1->vz == 0)
    {
        return 0;
    }

    arg0->field_0  = arg1;
    arg0->field_4  = D_800C4478.field_0; // Struct could begin some point earlier.
    arg0->field_6  = arg2;
    arg0->field_8  = 0x7FFF;
    arg0->field_20 = 0;

    arg0->field_2C.vx = FP_FROM(pos0->vx, Q4_SHIFT);
    arg0->field_2C.vy = FP_FROM(pos0->vy, Q4_SHIFT);
    arg0->field_2C.vz = FP_FROM(pos0->vz, Q4_SHIFT);

    arg0->field_50.vx = FP_FROM(pos1->vx, Q4_SHIFT);
    arg0->field_50.vy = FP_FROM(pos1->vy, Q4_SHIFT);
    arg0->field_50.vz = FP_FROM(pos1->vz, Q4_SHIFT);

    arg0->field_3C = arg0->field_2C.vx + arg0->field_50.vx;

    arg0->field_4C = FP_FROM(arg5, Q4_SHIFT);
    arg0->field_4E = FP_FROM(arg6, Q4_SHIFT);

    arg0->field_40 = arg0->field_2C.vy + arg0->field_50.vy;
    arg0->field_44 = arg0->field_2C.vz + arg0->field_50.vz;

    arg0->field_5C = SquareRoot0(SQUARE(arg0->field_50.vx) + SQUARE(arg0->field_50.vz));
    if (arg0->field_5C == 0)
    {
        return 0;
    }

    arg0->field_58 = (arg0->field_50.vx << Q12_SHIFT) / arg0->field_5C;
    arg0->field_5A = (arg0->field_50.vz << Q12_SHIFT) / arg0->field_5C;

    if (arg0->field_50.vy < 0)
    {
        arg0->field_5E = arg0->field_2C.vy + arg0->field_4E;
        arg0->field_60 = arg0->field_40 + arg0->field_4E;
    }
    else
    {
        arg0->field_60 = arg0->field_2C.vy + arg0->field_4E;
        arg0->field_5E = arg0->field_40 + arg0->field_4E;
    }

    arg0->field_64 = arg7;
    arg0->field_68 = arg8;

    return 1;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006DEB0); // 0x8006DEB0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006E0AC); // 0x8006E0AC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006E150); // 0x8006E150

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006E490); // 0x8006E490

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006E53C); // 0x8006E53C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006E78C); // 0x8006E78C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006EB8C); // 0x8006EB8C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006EE0C); // 0x8006EE0C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006EEB8); // 0x8006EEB8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006F250); // 0x8006F250

void func_8006F338(s_func_8006F338* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) // 0x8006F338
{
    s32 temp_a1;
    s32 field_4;

    temp_a1 = arg1 + arg3;

    arg0->field_0  = arg1;
    arg0->field_4  = arg2;
    arg0->field_10 = arg3;
    arg0->field_8  = arg1 + arg3;
    arg0->field_28 = 0x1000;
    arg0->field_2C = 0xFFFF0000;
    arg0->field_14 = arg4;

    arg0->field_C = arg2 + arg4;
    if (temp_a1 >= arg0->field_0)
    {
        arg0->field_18 = arg0->field_0;
        arg0->field_1C = arg0->field_8;
    }
    else
    {
        arg0->field_18 = arg1 + arg3;
        arg0->field_1C = arg0->field_0;
    }

    field_4 = arg0->field_4;
    if (arg0->field_C >= arg0->field_4)
    {
        arg0->field_20 = field_4;
        arg0->field_24 = arg0->field_C;
        return;
    }
    else
    {
        arg0->field_20 = arg0->field_C;
        arg0->field_24 = arg0->field_4;
    }
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006F3C4); // 0x8006F3C4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006F620); // 0x8006F620

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006F8FC); // 0x8006F8FC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006F99C); // 0x8006F99C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006FAFC); // 0x8006FAFC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8006FD90); // 0x8006FD90

void func_80070030(s_SubCharacter* chara, s32 x, s32 y, s32 z)
{
    s_func_800700F8_2 temp;
    VECTOR3           posDelta;

    posDelta.vx = x - chara->position_18.vx;
    posDelta.vy = y - chara->position_18.vy;
    posDelta.vz = z - chara->position_18.vz;
    func_8006DB3C(&temp, &chara->position_18, &posDelta, chara);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80070084); // 0x80070084

s32 func_800700F8(s_func_800700F8* arg0, s_func_800700F8* arg1) // 0x800700F8
{
    s_func_800700F8_2 sp10;
    VECTOR3           vec0;
    VECTOR3           vec1;

    vec0 = arg0->field_18;

    vec1.vx = arg1->field_18.vx - arg0->field_18.vx;
    vec1.vy = -FP_METER(0.1f);
    vec1.vz = arg1->field_18.vz - arg0->field_18.vz;

    return func_8006DB3C(&sp10, &vec0, &vec1, arg0) && sp10.field_10 == 0;
}

s32 func_80070184(s_SubCharacter* chara, s32 arg1, s16 rotY) // 0x80070184
{
    s32 iVar0;
    s32 varX;
    s32 iVar1;
    s32 varY;
    s32 varZ;

    iVar0 = shRsin(rotY);
    varX  = chara->position_18.vx + FP_MULTIPLY(arg1, iVar0, Q12_SHIFT);
    iVar1 = shRcos(rotY);

    varY = chara->position_18.vy;
    varZ = chara->position_18.vz + FP_MULTIPLY(arg1, iVar1, Q12_SHIFT);

    // The calls to this often have a return, so assumed it just passes return of `func_80070084`.
    return func_80070084(chara, varX, varY, varZ);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80070208); // 0x80070208

void func_8007029C(VECTOR3* arg0, s32 arg1, s16 angle) // 0x8007029C
{
    s8 vars[28];
    VECTOR3 vec;

    vec.vx = FP_MULTIPLY(arg1, shRsin(angle), Q12_SHIFT);
    vec.vy = 0;
    vec.vz = FP_MULTIPLY(arg1, shRcos(angle), Q12_SHIFT);

    func_8006DB3C(&vars, arg0 + 2, &vec, arg0);
}

s32 func_80070320() // 0x80070320
{
    s32 i;

    for (i = 0; i < 4; i++)
    {
        if (g_SysWork.field_2354[i] != NO_VALUE)
        {
            return 1;
        }
    }

    return 0;
}

s32 func_80070360(s_SubCharacter* chara, s32 someDist, s16 arg2) // 0x80070360
{
    s32 vx;
    s32 vz;
    s32 var_a1;
    s32 result;

    var_a1 = someDist;
    if (var_a1 == 0)
    {
        vx = g_SysWork.player_4C.chara_0.position_18.vx - chara->position_18.vx;
        vx = FP_FROM(vx, 6);

        vz = g_SysWork.player_4C.chara_0.position_18.vz - chara->position_18.vz;
        vz = FP_FROM(vz, 6);

        var_a1 = SquareRoot0(SQUARE(vx) + SQUARE(vz));
        var_a1 = FP_TO(var_a1, 6);
    }

    result = FP_MULTIPLY(arg2, g_SysWork.player_4C.chara_0.properties_E4.player.field_10C, Q12_SHIFT) - FP_FROM(var_a1, Q8_SHIFT);
    if (result < 0)
    {
        result = 0;
    }
    return result;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80070400); // 0x80070400

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800705E4); // 0x800705E4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800706E4); // 0x800706E4

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80070B84); // 0x80070B84

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80070CF0); // 0x80070CF0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80070DF0); // 0x80070DF0

void func_800711C4(s32 arg0, s32 arg1) // 0x800711C4
{
    if (g_SysWork.player_4C.extra_128.field_20 == 25 || D_800C4580 == 0 || D_800C4582 == 0)
    {
        return;
    }

    if (D_800C4584 != 0)
    {
        g_SysWork.player_4C.extra_128.field_24 = arg1 + 10;
    }
    else
    {
        g_SysWork.player_4C.extra_128.field_24 = arg1 + 9;
    }
}

void func_80071224(s32 arg0, s32 arg1) // 0x80071224
{
    if (g_SysWork.player_4C.extra_128.field_20 == 25 || D_800C4580 == 0 || D_800C4582 == 0)
    {
        return;
    }

    if (D_800C4586 != 0)
    {
        g_SysWork.player_4C.extra_128.field_24 = arg1 + 9;
    }
    else
    {
        g_SysWork.player_4C.extra_128.field_24 = arg1 + 10;
    }
}

void func_80071284(s32 arg0) // 0x80071284
{
    if (g_GameWork.config_0.optExtraRetreatTurn_2A != 0)
    {
        if (D_800C4586 != 0)
        {
            D_800C454C = ((arg0 * g_DeltaTime0) * D_800C4586) >> 6; // Divide by `0x40 / 64`?
        }
        else if (D_800C4584 != 0)
        {
            D_800C454C = ((-arg0 * g_DeltaTime0) * D_800C4584) >> 6;
        }
    }
    else if (g_SysWork.player_4C.extra_128.field_24 == 4 || g_SysWork.player_4C.extra_128.field_24 == 24)
    {
        if (D_800C4586 != 0)
        {
            D_800C454C = ((-arg0 * g_DeltaTime0) * D_800C4586) >> 6;
        }
        else if (D_800C4584 != 0)
        {
            D_800C454C = ((arg0 * g_DeltaTime0) * D_800C4584) >> 6;
        }
    }
    else
    {
        if (D_800C4586 != 0)
        {
            D_800C454C = ((arg0 * g_DeltaTime0) * D_800C4586) >> 6;
        }
        else if (D_800C4584 != 0)
        {
            D_800C454C = ((-arg0 * g_DeltaTime0) * D_800C4584) >> 6;
        }
    }
}

void func_800713B4(s_SubCharacter* chara, s32 arg1) // 0x800713B4
{
    if (g_SysWork.player_4C.extra_128.field_24 != arg1)
    {
        chara->model_0.stateStep_3                   = 0;
        chara->model_0.state_2                       = 0;
        chara->properties_E4.player.properties_E4[5] = 0;
        chara->properties_E4.player.properties_E4[1] = 0;
        g_SysWork.field_235A                         = 0;
    }
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800713E8); // 0x800713E8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80071620); // 0x80071620

void Player_Logic_Update(s_SubCharacter* chara, void* arg1, GsCOORDINATE2* coord) // 0x800717D0
{
    // Called by `GameState_InGame_Update`, might be player update function.
    // - `chara` always `&g_SysWork.player_4C.chara_0`.
    // - `arg1`  always `0x8010A600`/`FS_BUFFER_0` (holds anim related data?).
    // - `coord` always `&g_SysWork.playerBoneCoords_890`.

    s_MainCharacterExtra* extra = &g_SysWork.player_4C.extra_128;

    if (g_DeltaTime0 != 0)
    {
        func_8007C800(chara, extra);

        if (g_Player_Walk2RunTransition != 0)
        {
            D_800C455C = 0;
            D_800C4558 = 0;
            D_800C45C0 = 0;
            D_800C45BE = 0;
            D_800C45BC = 0;
            D_800C457E = 0;
            D_800C4604 = 0;
            D_800C45F0 = 0;
            D_800C45E8 = 0;
            D_800C4582 = 0;
            D_800C45AE = 0;
            D_800C4586 = 0;
            D_800C4580 = 0;
            D_800C45AC = 0;
            D_800C4584 = 0;
        }

        if (!g_Player_EnableControl)
        {
            func_80071CE8(chara, extra, coord);
        }
        else
        {
            g_MapOverlayHeader.func_B8(chara, extra, coord);
        }

        if (!g_Player_EnableControl)
        {
            func_8007C0D8(chara, extra, coord);
        }
        else
        {
            g_MapOverlayHeader.func_BC(chara, extra, coord);
        }

        func_80071968(chara, extra, arg1, coord);
        func_8007D090(chara, extra, coord);
    }

    D_800C45B0.vx = 0;
    D_800C45B0.vz = 0;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80071968); // 0x80071968

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80071CE8); // 0x80071CE8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80073FC0); // 0x80073FC0

void func_80074254(s32 arg0, s32 arg1) // 0x80074254
{
    s32 var0;

    if (func_80075504() != 0)
    {
        return;
    }

    var0 = (D_800C45C9 == 10) ? 1333 : 1314;

    switch (g_SysWork.player_4C.extra_128.field_20)
    {
        case 0:
            func_80071620(55, arg0, 551, 1320);
            break;

        case 14:
            if (func_80071620(23, arg0, 173, var0) != 0)
            {
                func_8008944C();
            }
            break;

        case 17:
            if (func_80071620(39, arg0, 340, var0) != 0)
            {
                func_8008944C();
            }
            break;

        case 18:
            if (func_80071620(43, arg0, 369, var0) != 0)
            {
                func_8008944C();
            }
            break;

        default:
            break;
    }

    func_800771BC(arg0, arg1);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80074350); // 0x80074350

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80075504); // 0x80075504

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800771BC); // 0x800771BC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80077BB8); // 0x80077BB8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80077D00); // 0x80077D00

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007B924); // 0x8007B924

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007C0D8); // 0x8007C0D8

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007C800); // 0x8007C800

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007D090); // 0x8007D090

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007D6E0); // 0x8007D6E0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007D6F0); // 0x8007D6F0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007D970); // 0x8007D970

// TODO: Can this work without needing inlined func?
static inline Savegame_PlayerReset(s_ShSavegame* save)
{
    save->playerHealth_240      = FP_FLOAT_TO(100.0f, Q12_SHIFT);
    save->field_A0              = 0;
    save->equippedWeapon_AA     = 0;
    save->field_238             = 0;
    save->gameplayTimer_250     = 0;
    save->runDistance_254       = 0;
    save->walkDistance_258      = 0;
    save->pickedUpItemCount_23C = 0;
    save->clearGameCount_24A    = 0;
    save->add290Hours_25C_1     = 0;
}

void Game_SavegameResetPlayer() // 0x8007E530
{
    s_ShSavegame* save = g_SavegamePtr;
    s32           i;

    g_SavegamePtr->inventoryItemSpaces_AB = 8;

    for (i = 0; i < INVENTORY_ITEM_COUNT_MAX; i++)
    {
        save->items_0[i].id_0    = 0xFF;
        save->items_0[i].count_1 = 0;
    }

    Savegame_PlayerReset(g_SavegamePtr);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007E5AC); // 0x8007E5AC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007E860); // 0x8007E860

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007E8C0); // 0x8007E8C0

// Player func.
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007E9C4); // 0x8007E9C4

void GameFs_PlayerMapAnimLoad(s32 mapIdx) // 0x8007EB64
{
    #define BASE_FILE_IDX FILE_ANIM_HB_M0S00_ANM

    if (g_GameWork.mapAnimIdx_5B1 != mapIdx ||
        mapIdx == (FILE_ANIM_HB_M6S04_ANM - BASE_FILE_IDX) ||
        mapIdx == (FILE_ANIM_HB_M7S01_ANM - BASE_FILE_IDX) ||
        mapIdx == (FILE_ANIM_HB_M7S02_ANM - BASE_FILE_IDX))
    {
        g_GameWork.mapAnimIdx_5B1 = mapIdx;
        Fs_QueueStartRead(BASE_FILE_IDX + mapIdx, FS_BUFFER_4);
    }
}

// Used when exiting the inventory screen.
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007EBBC); // 0x8007EBBC

// Requires jump table.
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007F14C); // 0x8007F14C

void func_8007F1CC() // 0x8007F1CC
{
    D_800C455C = 0;
    D_800C4558 = 0;
    D_800C45C0 = 0;
    D_800C45BE = 0;
    D_800C45BC = 0;
    D_800C457E = 0;
    D_800C4604 = 0;
    D_800C45F0 = 0;
    D_800C45E8 = 0;
    D_800C4582 = 0;
    D_800C45AE = 0;
    D_800C4586 = 0;
    D_800C4580 = 0;
    D_800C45AC = 0;
    D_800C4584 = 0;
    g_Player_Walk2RunTransition = 0;
}

void func_8007F250(u8* ptr, s8 arg1) // 0x8007F250
{
    *ptr = D_800C4561;
    D_800C4562 = arg1;
}

s32 func_8007F26C() // 0x8007F26C
{
    if (g_SysWork.player_4C.extra_128.field_20 == 25 ||
        g_SysWork.player_4C.extra_128.field_1C == 5 ||
        g_SysWork.player_4C.extra_128.field_1C == 6)
    {
        return 1;
    }

    return 0;
}

s32 func_8007F2AC() // 0x8007F2AC
{
    if (g_SysWork.player_4C.chara_0.health_B0     <= 0 ||
        g_SysWork.playerCombatInfo_38.isAiming_13 != 0 ||
        g_SysWork.player_4C.extra_128.field_1C    == 5 ||
        g_SysWork.player_4C.extra_128.field_1C    == 6 ||
        (g_SysWork.player_4C.extra_128.field_1C - 7) < 44u) // TODO: Probably not how OG condition looked.
    {
        return 1;
    }

    return 0;
}

s16 Player_AnimGetSomething() // 0x8007F308
{
    return g_MaybePlayerAnims[g_SysWork.player_4C.chara_0.model_0.anim_4.animIdx_0].field_C;
}

// Large function. Something to do with player control.
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007F32C); // 0x8007F32C

// Medium function. Player-related.
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007F95C); // 0x8007F95C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007FB34); // 0x8007FB34

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007FB94); // 0x8007FB94

// Similar to above.
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007FC48); // 0x8007FC48

s32 func_8007FD2C() // 0x8007FD2C
{
    return g_SysWork.player_4C.chara_0.properties_E4.player.properties_E4[PlayerProperty_Unk8];
}

s32 func_8007FD3C() // 0x8007FD3C
{
    return g_SysWork.player_4C.chara_0.properties_E4.player.field_114;
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007FD4C); // 0x8007FD4C

// Large function.
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8007FDE0); // 0x8007FDE0

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800802CC); // 0x800802CC

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8008037C); // 0x8008037C

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_800803FC); // 0x800803FC

void func_80080458() // 0x80080458
{
    g_Controller1->btnsClicked_10 |= ControllerFlag_Select;
}

s32 func_80080478(VECTOR3* pos0, VECTOR3* pos1) // 0x80080478
{
    s32 x0;
    s32 x1;
    s32 y1;
    s32 y0;
    s32 z0;
    s32 z1;
    s32 xDelta;
    s32 zDelta;
    u16 atan2Delta;
    s32 unk;

    x0 = pos0->vx;
    x1 = pos1->vx;
    y0 = pos0->vy;
    y1 = pos1->vy;
    z0 = pos0->vz;
    z1 = pos1->vz;

    xDelta = x1 - x0;
    zDelta = z1 - z0;
    atan2Delta = ratan2(xDelta, zDelta);

    unk = func_8008A058(func_80080540(xDelta, 0, zDelta));
    return (ratan2(unk, y1 - y0) << 16) | atan2Delta;
}

s32 func_80080514() // 0x80080514
{
    s32 rand16;

    rand16 = Rng_Rand16();
    return (((rand16 * 2) ^ rand16) >> 3) & 0xFFF;
}

// TODO: Try decomping by hand. -- Sezz
INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_80080540); // 0x80080540

s32 PreservedSignSubtract(s32 value, s32 subtractor) // 0x80080594
{
    s32 signBit;
    s32 absDiff;

    signBit = value >> 31;  
    absDiff = ((value ^ signBit) - signBit) - subtractor;  
    return ((absDiff & ~(absDiff >> 31)) ^ signBit) - signBit; 
}

void func_800805BC(VECTOR3* arg0, SVECTOR* arg1, GsCOORDINATE2* arg2, s32 arg3) // 0x800805BC
{
    MATRIX mat;
    VECTOR vec;

    Vw_CoordHierarchyMatrixCompute(arg2, &mat);
    gte_SetRotMatrix(&mat);
    gte_SetTransMatrix(&mat);

    while (arg3 > 0)
    {
        gte_ldv0(arg1);
        gte_rt();
        gte_stlvnl(&vec);

        arg0->vx = vec.vx * 16;
        arg0->vy = vec.vy * 16;
        arg0->vz = vec.vz * 16;

        arg3--;
        arg1++;
        arg0++;
    }
}

u32 func_800806AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) // 0x800806AC
{
    u32 res;

    res = arg0 != 0;
    if (res == 0)
    {
        return res;
    }

    res = ~arg0 == 0;
    if (res != 0)
    {
        return res;
    }

    func_800699F8(&D_800C4620, arg1, arg3);

    res = arg2 < D_800C4620.field_0;
    if (res != 0)
    {
        res = ~D_800C4620.field_8 != 0;
        if (res != 0)
        {
            res = (arg0 & (1 << D_800C4620.field_8));
            return res > 0u; 
        }
    }

    return res;
}

void func_8008074C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) // 0x8008074C
{
    func_800806AC(arg0, arg1, 1 << 31, arg3);
}

INCLUDE_ASM("asm/bodyprog/nonmatchings/bodyprog_80054FC0", func_8008076C); // 0x8008076C

s32 func_80080884() // 0x80080884
{
    func_8008076C();
    return D_800AFC7C;
}

s32 func_800808AC() // 0x800808AC
{
    func_8008076C();
    return D_800AFC90;
}

s32 Math_MulFixed(s32 val0, s32 val1, s32 shift) // 0x800808D4
{
    u32 lo;

    // Use inline asm to fetch high/low parts of mult.
    // Only method found to allow C to keep same insn/reg order so far.
    __asm__ volatile(
        "mult %0, %1\n" // Multiply `val0` and `val1`.
        "mfhi %0\n"     // Move high result back into `val0`?
        "mflo %2\n"     // Move low result to lo.
        : "=r"(val0), "=r"(val1), "=r"(lo)
        : "0"(val0), "1"(val1));

#if 0
    // Equivalent C version of above (non-matching).
    s64 res = (s64)val0 * (s64)val1;
    val0    = (u32)(res >> 32);
    lo      = (u32)res;
#endif

    return (val0 << (32 - shift)) | (lo >> shift);
}

s32 Math_GetMagnitudeShift(s32 mag) // 0x800808F8
{
    #define THRESHOLD_0 (1 << 14)
    #define THRESHOLD_1 ((1 << 18) - 1)
    #define THRESHOLD_2 ((1 << 22) - 1)

    s32 qShift;

    if (mag < THRESHOLD_0)
    {
        return 0;
    }

    if (mag > THRESHOLD_1)
    {
        if (mag > THRESHOLD_2)
        {
            return Q12_SHIFT;
        }

        qShift = Q8_SHIFT;
        return qShift;
    }

    qShift = Q4_SHIFT;
    return qShift;
}
