void sharedFunc_800CF290_3_s00(s_SubCharacter* chara, s32 arg1, GsCOORDINATE2* coord)
{
    if (chara->properties_E4.player.properties_E4[3] == 0)
    {
        s_AnimInfo* animInfo = &sharedData_800DF174_0_s00[chara->model_0.anim_4.animIdx_0];
        animInfo->funcPtr_0(chara, arg1, coord, animInfo);
    }
}
