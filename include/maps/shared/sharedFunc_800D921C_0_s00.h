s16 sharedFunc_800D921C_0_s00(s_SubCharacter* chara)
{
    // TODO: Not sure if any of these match sharedData_800DF174_0_s00 in other maps.
#if defined(MAP6_S01)
    extern s_AnimInfo D_800D35A0[];
    extern s_AnimInfo D_800D39A0[];
#elif defined(MAP6_S04)
    extern s_AnimInfo D_800EA718[];
    extern s_AnimInfo D_800EAB38[];
#elif defined(MAP7_S01)
    extern s_AnimInfo D_800DFC78[];
    extern s_AnimInfo D_800DFD98[];
#elif defined(MAP7_S02)
    extern s_AnimInfo D_800E7708[];
    extern s_AnimInfo D_800E7948[];
    extern s_AnimInfo D_800E7B68[];
    extern s_AnimInfo D_800E7EA8[];
    extern s_AnimInfo D_800E7FC8[];
#elif defined(MAP7_S03)
    extern s_AnimInfo D_800EA1E0[];
    extern s_AnimInfo D_800EA5E0[];
    extern s_AnimInfo D_800EA920[];
    extern s_AnimInfo D_800EAA80[];
    extern s_AnimInfo D_800EAC00[];
    extern s_AnimInfo D_800EAC80[];
    extern s_AnimInfo D_800EAF60[];
#endif

    s_AnimInfo* animInfo = NULL;
    switch (chara->model_0.charaId_0)
    {
#if defined(MAP3_S02) || defined(MAP5_S02) || defined(MAP5_S03) || defined(MAP6_S02)
        // `animInfo` left as NULL.
#elif defined(MAP6_S01)
        case Chara_Cybil:
            animInfo = &D_800D35A0[chara->model_0.anim_4.animIdx_0];
            break;

        default:
            animInfo = &D_800D39A0[chara->model_0.anim_4.animIdx_0];
            break;

#elif defined(MAP6_S04)
        case Chara_MonsterCybil:
            animInfo = &D_800EA718[chara->model_0.anim_4.animIdx_0];
            break;

        case Chara_Dahlia:
            animInfo = &D_800EAB38[chara->model_0.anim_4.animIdx_0];
            break;

        case Chara_Alessa:
            animInfo = &sharedData_800D1B6C_3_s02[chara->model_0.anim_4.animIdx_0];
            break;

#elif defined(MAP7_S01)
        case Chara_GhostChildAlessa:
            animInfo = &D_800DFC78[chara->model_0.anim_4.animIdx_0];
            break;

        case Chara_Lisa:
            animInfo = &D_800DFD98[chara->model_0.anim_4.animIdx_0];
            break;

        case Chara_BloodyLisa:
            animInfo = &sharedData_800DFFD8_7_s01[chara->model_0.anim_4.animIdx_0];
            break;

#elif defined(MAP7_S02)
        case Chara_Dahlia:
            animInfo = &D_800E7B68[chara->model_0.anim_4.animIdx_0];
            break;

        case Chara_GhostChildAlessa:
            animInfo = &D_800E7EA8[chara->model_0.anim_4.animIdx_0];
            break;

        case Chara_Kaufmann:
            animInfo = &D_800E7FC8[chara->model_0.anim_4.animIdx_0];
            break;

        case Chara_Lisa:
            animInfo = &D_800E7708[chara->model_0.anim_4.animIdx_0];
            break;

        case Chara_BloodyLisa:
            animInfo = &D_800E7948[chara->model_0.anim_4.animIdx_0];
            break;

#elif defined(MAP7_S03)
        case Chara_Cybil:
        case Chara_EndingCybil:
            animInfo = &D_800EA1E0[arg0->model_0.anim_4.animIdx_0];
            break;

        case Chara_Dahlia:
        case Chara_EndingDahlia:
            animInfo = &D_800EA5E0[arg0->model_0.anim_4.animIdx_0];
            break;

        case Chara_Alessa:
            animInfo = &D_800EA920[arg0->model_0.anim_4.animIdx_0];
            break;

        case Chara_Kaufmann:
        case Chara_EndingKaufmann:
            animInfo = &D_800EAC80[arg0->model_0.anim_4.animIdx_0];
            break;

        case Chara_BloodyLisa:
            animInfo = &D_800EAF60[arg0->model_0.anim_4.animIdx_0];
            break;

        case Chara_Incubator:
            animInfo = &D_800EAC00[arg0->model_0.anim_4.animIdx_0];
            break;

        case Chara_BloodyIncubator:
            animInfo = &D_800EAA80[arg0->model_0.anim_4.animIdx_0];
            break;

#else
        default:
            animInfo = &sharedData_800DF174_0_s00[chara->model_0.anim_4.animIdx_0];
            break;
#endif
    }

    return animInfo->keyframeIdx0_C;
}
