// Fill out your copyright notice in the Description page of Project Settings.


#include "DataStoringFuncLib.h"

bool UDataStoringFuncLib::LoadTxt(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameSourceDir() + FileNameA));
}
bool UDataStoringFuncLib::SaveText(FString FileNameB, FString SaveTextB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameSourceDir() + FileNameB));
}

void UDataStoringFuncLib::GlueAddOnToTheSourceString(FString& SourceString, FString AddOn)
{
	SourceString.Append(AddOn);
}

bool UDataStoringFuncLib::DeleteCSVFile(FString FileName)
{
	FString FilePath=FPaths::ProjectDir();
	GlueAddOnToTheSourceString(FilePath,"Source/");
	GlueAddOnToTheSourceString(FilePath,FileName);
	if(!FilePath.IsEmpty())
	{
		if(FPaths::ValidatePath(FilePath)&&FPaths::FileExists(FilePath))
		{
			IFileManager& FileManager=IFileManager::Get();
			FileManager.Delete(*FilePath);
			return true;
		}
	}
	return false;
}
