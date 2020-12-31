
#pragma once
class UPlotItem;
class FPlotEditor;
struct FPlotReference;
struct PLOTEDITOR_API FPlotHandle
{
	friend FPlotReference;
	friend FPlotEditor;
private:
	FPlotHandle(UPlotItem* InItem);
	TWeakObjectPtr<UPlotItem> PlotItem;
};
struct PLOTEDITOR_API FPlotReference
{
	friend FPlotEditor;
public:
	FPlotReference();
	bool IsValid() const;
	UPlotItem* GetTemplate() const;

	bool operator==( const FPlotReference& Other ) const
	{
		if ( TemplateHandle.IsValid() && Other.TemplateHandle.IsValid() )
		{
			return TemplateHandle->PlotItem.Get() == Other.TemplateHandle->PlotItem.Get();
		}
		return false;
	}
	bool operator!=( const FPlotReference& Other ) const
	{
		return !operator==( Other );
	}

private:
	FPlotReference(TSharedPtr<FPlotEditor> PlotEditor, TSharedPtr< FPlotHandle > TemplateHandle);
	void OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap);

private:
	TWeakPtr<FPlotEditor> PlotEditor;
	TSharedPtr< FPlotHandle > TemplateHandle;
};

inline uint32 GetTypeHash(const struct FPlotReference& PlotRef)
{
	return ::GetTypeHash(reinterpret_cast<void*>( PlotRef.GetTemplate() ));
}
