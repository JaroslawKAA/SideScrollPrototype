// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EnumUtility.generated.h"

UENUM(Blueprintable, BlueprintType)
enum CPPE_AttackReaction
{
    MoveBack UMETA(Value1),
    Defend,
    MaxValue UMETA(Hidden),
};

/**
 * 
 */
UCLASS()
class SIDESCROLLPROTOTYPE_API UEnumUtility : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Enum Utility")
    static int GetEnumCount(const UEnum* EnumPrt);

    UFUNCTION(BlueprintCallable, Category = "Enum Utility")
    static int GetLastEnumIndex(const UEnum* EnumPrt);

    UFUNCTION(BlueprintCallable, Category = "Enum Utility")
    static CPPE_AttackReaction CastIntToAttackReactionEnum(int32 enumValue);

    UFUNCTION(BlueprintCallable, Category = "Enum Utility")
    static UEnum* GetAttackReactionEnum();

    template <typename T>
    static T CastIntToEnum(int32 EnumValue)
    {
        // Ensure T is an enum type
        static_assert(TIsEnum<T>::Value, "T must be an enum type.");

        // Ensure that EnumValue is valid for the enum type
        if (EnumValue < 0 || EnumValue >= static_cast<int32>(T::MaxValue))
        {
            // Return first value of enum if can't to cast
            return CastIntToEnum<T>(0);
        }

        return static_cast<T>(EnumValue);
    }
};
