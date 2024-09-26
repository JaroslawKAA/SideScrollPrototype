// Fill out your copyright notice in the Description page of Project Settings.


#include "EnumUtility.h"

int UEnumUtility::GetEnumCount(const UEnum* EnumPrt)
{
    return EnumPrt->NumEnums();
}

int UEnumUtility::GetLastEnumIndex(const UEnum* EnumPrt)
{
    return  EnumPrt->NumEnums() - 1;
}

CPPE_AttackReaction UEnumUtility::CastIntToAttackReactionEnum(int enumValue)
{
    return CastIntToEnum<CPPE_AttackReaction>(enumValue);
}

UEnum* UEnumUtility::GetAttackReactionEnum()
{
    return FindObject<UEnum>(ANY_PACKAGE, TEXT("CPPE_AttackReaction"), true);
}
