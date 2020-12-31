#include "PlotTabFile.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool FPlotTabFile::Load(const FString& InPath, int32 InHeaderLine) {
	FString Path = FPaths::ProjectContentDir() / TEXT("Settings") / InPath;
	FString FileData;
	TArray<FString> Lines;
	int32 Count;

	Keys.Empty();
	Contents.Empty();

	if (!FFileHelper::LoadFileToString(FileData, *Path)) {
		GLog->Logf(ELogVerbosity::Warning, TEXT("FTabFile::Load failed due to file '%s' NOT exists."), *Path);
		return false;
	}

	Count = FileData.ParseIntoArrayLines(Lines);
	if (Count <= InHeaderLine) {
		GLog->Logf(ELogVerbosity::Warning, TEXT("FTabFile::Load(%s) failed due to missing header line"), *Path);
		return false;
	}

	/// Parse Header first.
	{
		TArray<FString> Headers;
		int32 Columns = Lines[InHeaderLine].ParseIntoArray(Headers, TEXT("\t"), false);
		for (int32 Index = 0; Index < Columns; ++Index) {
			FString Header = Headers[Index];
			if (Header.IsEmpty()) continue;
			if (Keys.Contains(Header)) {
				GLog->Logf(ELogVerbosity::Warning, TEXT("FTabFile::Load dumplicated key '%s' in file '%s' !!!"), *Header, *Path);
			} else {
				Keys.Add(Header, Index);
			}
		}
	}

	/// Parse Content.
	for (int32 Index = InHeaderLine + 1; Index < Count; ++Index) {
		if (Lines[Index].IsEmpty()) continue;
		TArray<FString> Data;
		Lines[Index].ParseIntoArray(Data, TEXT("\t"), false);
		Contents.Add(Data);
	}

	return true;
}

#define MAKESURE_EXISTS if (InIdx >= Num() || !Keys.Contains(InKey) || Keys[InKey] >= Contents[InIdx].Num()) return InDefault;\
	FString Data = Contents[InIdx][Keys[InKey]]

bool FPlotTabFile::GetBool(int32 InIdx, const FString& InKey, bool InDefault) {
	MAKESURE_EXISTS;
	return Data.ToBool();
}

int32 FPlotTabFile::GetInt(int32 InIdx, const FString& InKey, int32 InDefault) {
	MAKESURE_EXISTS;
	return FCString::Atoi(*Data);
}

uint32 FPlotTabFile::GetUInt(int32 InIdx, const FString& InKey, uint32 InDefault) {
	MAKESURE_EXISTS;
	return (uint32)FCString::Atoi(*Data);
}

int64 FPlotTabFile::GetInt64(int32 InIdx, const FString& InKey, int64 InDefault) {
	MAKESURE_EXISTS;
	return FCString::Atoi64(*Data);
}

uint64 FPlotTabFile::GetUInt64(int32 InIdx, const FString& InKey, uint64 InDefault) {
	MAKESURE_EXISTS;
	return (uint64)FCString::Atoi64(*Data);
}

float FPlotTabFile::GetFloat(int32 InIdx, const FString& InKey, float InDefault) {
	MAKESURE_EXISTS;
	return FCString::Atof(*Data);
}

FString FPlotTabFile::GetString(int32 InIdx, const FString& InKey, const FString& InDefault) {
	MAKESURE_EXISTS;
	return Data;
}

FVector FPlotTabFile::GetVector(int32 InIdx, const FString& InKey, const FVector& InDefault) {
	MAKESURE_EXISTS;

	TArray<FString> Elems;
	FVector OutValue;
	int Count = Data.ParseIntoArray(Elems, TEXT(","), false);
	if (Count > 0) OutValue.X = FCString::Atof(*Elems[0]);
	if (Count > 1) OutValue.Y = FCString::Atof(*Elems[1]);
	if (Count > 2) OutValue.Z = FCString::Atof(*Elems[2]);

	return OutValue;
}

FVector2D FPlotTabFile::GetVector2D(int32 InIdx, const FString& InKey, const FVector2D& InDefault) {
	MAKESURE_EXISTS;

	TArray<FString> Elems;
	FVector2D OutValue;
	int Count = Data.ParseIntoArray(Elems, TEXT(","), false);
	if (Count > 0) OutValue.X = FCString::Atof(*Elems[0]);
	if (Count > 1) OutValue.Y = FCString::Atof(*Elems[1]);

	return OutValue;
}

FRotator FPlotTabFile::GetRotator(int32 InIdx, const FString& InKey, const FRotator& InDefault) {
	MAKESURE_EXISTS;

	TArray<FString> Elems;
	FRotator OutValue;
	int Count = Data.ParseIntoArray(Elems, TEXT(","), false);
	if (Count > 0) OutValue.Roll = FCString::Atof(*Elems[0]);
	if (Count > 1) OutValue.Pitch = FCString::Atof(*Elems[1]);
	if (Count > 2) OutValue.Yaw = FCString::Atof(*Elems[2]);

	return OutValue;
}

TArray<int32> FPlotTabFile::GetArrayInt(int32 InIdx, const FString& InKey, TArray<int32> InDefault)
{
	MAKESURE_EXISTS;
	TArray<FString> Elems;
	TArray<int> OutValue;
	Data = Data.Replace(TEXT("["), TEXT(""));
	Data = Data.Replace(TEXT("]"), TEXT(""));
	int Count = Data.ParseIntoArray(Elems, TEXT(","), false);
	for (auto& Str : Elems)
	{
		OutValue.Add(FCString::Atoi(*Str));
	}
	return OutValue;
}

TArray<float> FPlotTabFile::GetArrayFloat(int32 InIdx, const FString& InKey, TArray<float> InDefault)
{
	MAKESURE_EXISTS;
	TArray<FString> Elems;
	TArray<float> OutValue;
	Data = Data.Replace(TEXT("["), TEXT(""));
	Data = Data.Replace(TEXT("]"), TEXT(""));
	int Count = Data.ParseIntoArray(Elems, TEXT(","), false);
	for (auto& Str : Elems)
	{
		OutValue.Add(FCString::Atof(*Str));
	}
	return OutValue;
}