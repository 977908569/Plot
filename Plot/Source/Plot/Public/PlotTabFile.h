#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"

#pragma region LoadFile
/**
 * Helper class to read tab-delimitted CSV file.
 */
class FPlotTabFile {
public:
	class FIterator {
	public:
		FIterator(FPlotTabFile* InOwner, int32 InStartIndex) : File(InOwner), MaxIndex(InOwner->Num()), CurIndex(InStartIndex) {}

		FORCEINLINE operator bool() const { return CurIndex < MaxIndex; }
		FORCEINLINE void operator++() { CurIndex++; }

		FORCEINLINE bool GetBool(const FString& InKey, bool InDefault = false) { return File->GetBool(CurIndex, InKey, InDefault); }
		FORCEINLINE int32 GetInt(const FString& InKey, int32 InDefault = 0) { return File->GetInt(CurIndex, InKey, InDefault); }
		FORCEINLINE uint32 GetUInt(const FString& InKey, uint32 InDefault = 0) { return File->GetUInt(CurIndex, InKey, InDefault); }
		FORCEINLINE int64 GetInt64(const FString& InKey, int64 InDefault = 0) { return File->GetInt64(CurIndex, InKey, InDefault); }
		FORCEINLINE uint64 GetUInt64(const FString& InKey, uint64 InDefault = 0) { return File->GetUInt64(CurIndex, InKey, InDefault); }
		FORCEINLINE float GetFloat(const FString& InKey, float InDefault = 0) { return File->GetFloat(CurIndex, InKey, InDefault); }
		FORCEINLINE FString GetString(const FString& InKey, const FString& InDefault = TEXT("")) { return File->GetString(CurIndex, InKey, InDefault); }
		FORCEINLINE FVector GetVector(const FString& InKey, const FVector& InDefault = FVector::ZeroVector) { return File->GetVector(CurIndex, InKey, InDefault); }
		FORCEINLINE FVector2D GetVector2D(const FString& InKey, const FVector2D& InDefault = FVector2D::ZeroVector) { return File->GetVector2D(CurIndex, InKey, InDefault); }
		FORCEINLINE FRotator GetRotator(const FString& InKey, const FRotator& InDefault = FRotator::ZeroRotator) { return File->GetRotator(CurIndex, InKey, InDefault); }
		FORCEINLINE TArray<int32> GetArrayInt(const FString& InKey) { TArray<int32> InDefault; return File->GetArrayInt(CurIndex, InKey, InDefault); }
		FORCEINLINE TArray<float> GetArrayFloat(const FString& InKey) { TArray<float> InDefault; return File->GetArrayFloat(CurIndex, InKey, InDefault); }
	private:
		FPlotTabFile* File;
		int32 MaxIndex;
		int32 CurIndex;
	};

public:
	FPlotTabFile() {}

	/**
	 * Load from file.
	 *
	 * \param InPath File path relative to /Game/Settings
	 * \param InHeaderLine Header line number. Start with 0.
	 * \returns Is there any errors when loading file.
	 */
	bool Load(const FString& InPath, int32 InHeaderLine);

	/**
	 * Get number of valid records.
	 */
	FORCEINLINE int32 Num() const { return Contents.Num(); }

	/**
	 * Get an iterator for this file.
	 *
	 * \param InStartIndex Index of records to start reading.
	 * \returns Iterator for reading this file.
	 */
	FORCEINLINE FIterator Iterator(int32 InStartIndex = 0) { return FIterator(this, InStartIndex); }

public:
	bool GetBool(int32 InIdx, const FString& InKey, bool InDefault);
	int32 GetInt(int32 InIdx, const FString& InKey, int32 InDefault);
	uint32 GetUInt(int32 InIdx, const FString& InKey, uint32 InDefault);
	int64 GetInt64(int32 InIdx, const FString& InKey, int64 InDefault);
	uint64 GetUInt64(int32 InIdx, const FString& InKey, uint64 InDefault);
	float GetFloat(int32 InIdx, const FString& InKey, float InDefault);
	FString GetString(int32 InIdx, const FString& InKey, const FString& InDefault);
	FVector GetVector(int32 InIdx, const FString& InKey, const FVector& InDefault);
	FVector2D GetVector2D(int32 InIdx, const FString& InKey, const FVector2D& InDefault);
	FRotator GetRotator(int32 InIdx, const FString& InKey, const FRotator& InDefault);
	TArray<int32> GetArrayInt(int32 InIdx, const FString& InKey, TArray<int32> InDefault);
	TArray<float> GetArrayFloat(int32 InIdx, const FString& InKey, TArray<float> InDefault);
private:
	FString Name;
	TMap<FString, int32> Keys;
	TArray<TArray<FString>> Contents;
};

#pragma endregion 

#pragma region Table 

/**
 * 加载配置资源,并且根据相应的ID获取到配置资源
 * 配置资源必须重载 operator==
 */
template <typename T, typename KeyT>
class FDataTableLoader
{
private:
	const FString m_strPath;
	UDataTable* m_lpDataTableAsset;
	static FDataTableLoader* ms_lpSingleton;

public:
	FDataTableLoader(const FString& InPath) : m_strPath(InPath), m_lpDataTableAsset(nullptr)
	{
		checkSlow(ms_lpSingleton == nullptr);
		ms_lpSingleton = this;
	};

	/** Get value by custom id. */
	static T* Get(KeyT nId)
	{
		checkSlow(ms_lpSingleton != nullptr);
		if (const UDataTable* lpDataTableAsset = ms_lpSingleton->ConfirmLoaded())
		{
			for (TMap<FName, uint8*>::TConstIterator RowMapIter(lpDataTableAsset->GetRowMap().CreateConstIterator()); RowMapIter; ++RowMapIter)
			{
				T* Entry = reinterpret_cast<T*>(RowMapIter.Value());
				if (*Entry == nId)
				{
					return Entry;
				}
			}
		}

		return nullptr;
	}

private:
	/** Confirm asset was loaded success fully. */
	UDataTable* ConfirmLoaded(void)
	{
		if (m_lpDataTableAsset == nullptr)
		{
			m_lpDataTableAsset = LoadObject<UDataTable>((UObject*)GetTransientPackage(), *m_strPath);
			if (m_lpDataTableAsset != nullptr)
			{
				m_lpDataTableAsset->AddToRoot();
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("Load Template [%s] failed."), *T::StaticStruct()->GetPathName());
			}
		}

		return m_lpDataTableAsset;
	}
};

template <typename T, typename KeyT>
FDataTableLoader<T, KeyT>* FDataTableLoader<T, KeyT>::ms_lpSingleton = nullptr;

#pragma endregion 