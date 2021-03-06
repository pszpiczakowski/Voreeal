#pragma once

#include "VoreealRegion.h"
#include "VoreealBlueprintLibrary.generated.h"

UCLASS()
class VOREEAL_API UVoreealBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public: // Region Methods

	// Gets the center of the region.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Voreeal|Region")
	static FVector GetCenter(const FVoreealRegion& Region) { return Region.GetCenter(); }

	/*
	/// Gets the upper corner of the region.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Voreeal|Region")
	static void GetUpperCorner(const FVoreealRegion& Region, FVector& Result) {
		Result = Region.GetUpper();
	}

	/// Gets the lower corner of the region.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Voreeal|Region")
	static void GetLowerCorner(const FVoreealRegion& Region, FVector& Result) {
		Result = Region.GetLower();
	}

	/// Grow the region.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Voreeal|Region")
	static void Grow(const FVoreealRegion& Region, int32 Width, int32 Height, int32 Depth, FVoreealRegion& Result) {
		Region.Grow(Width, Height, Depth, Result);
	}

	/// Grow the region from every direction.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Voreeal|Region")
	static void GrowUnified(const FVoreealRegion& Region, int32 Amount, FVoreealRegion& Result) { 
		Region.GrowUnified(Amount, Result);
	}*/

	//static void ShiftUpperCorner(const FVoreealRegion& Region, int32 X, int32 Y, int32 Z, FVoreealRegion& Result);
	//static void ShiftLowerCorner(const FVoreealRegion& Region, int32 X, int32 Y, int32 Z, FVoreealRegion& Result);

	//static bool Contains(const FVoreealRegion& Region1, const FVoreealRegion& Region2);
	//static bool Intersect(const FVoreealRegion& Region1, const FVoreealRegion& Region2);

public:
	// Gets how many tasks currently are running.
	UFUNCTION(BlueprintCallable, Category = "Voreeal|Task")
	static int32 GetRunningTaskCount();

	UFUNCTION(BlueprintCallable, Category = "Voreeal|Task", meta = (WorldContext = "WorldContextObject"))
	static void DrawDebugTaskText(UObject* WorldContextObject, int32 Key, const FColor& Color);

public:

	/// Draw Debug Region, 
	UFUNCTION(BlueprintCallable, Category = "Voreeal|Region|Debug", meta = (WorldContext = "WorldContextObject"))
	static void DrawDebugRegion(UObject* WorldContextObject, const FTransform& Transform, const FVoreealRegion& Region,
		const FLinearColor& LinearColor, float Duration, float Thickness);

};
