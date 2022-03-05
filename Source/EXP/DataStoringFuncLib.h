// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataStoringFuncLib.generated.h"

/**
 * 
 */
UCLASS()
class EXP_API UDataStoringFuncLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "File", meta = (Keywords = "LoadText"))
		static bool LoadTxt(FString FileNameA, FString& SaveTextA);
	UFUNCTION(BlueprintCallable, Category = "File", meta = (Keywords = "SaveText"))
		static bool SaveText(FString FileName, FString SaveTextB);
	UFUNCTION(BlueprintCallable,Category="StringAction",meta=(Keywords="AppendAndChangeTheString"))
	static void GlueAddOnToTheSourceString(UPARAM(ref) FString& SourceString,FString AddOn);
	UFUNCTION(BlueprintCallable,Category="StringAction",meta=(Keywords="DeleteFile"))
	static bool DeleteCSVFile(FString FileName);
	
};
