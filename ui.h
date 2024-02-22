// Fill out your copyright notice in the Description page of Project Settings.

#pragma once // Ensures the header file is included only once in a compilation unit.

#include "CoreMinimal.h" // Includes the most commonly used types and macros from the Unreal Engine Core.
#include "Blueprint/UserWidget.h" // Includes the base class for User Widgets created in UMG.
#include "UiWidget.generated.h" // Include file for Unreal's code generation tool.

/**
 * 
 */
UCLASS() // Macro to declare that this class is a UObject that can be used within the Unreal Engine.
class TEXTURESETTER_API UUiWidget : public UUserWidget // Declares a class named UUiWidget that inherits from UUserWidget.
{
	GENERATED_BODY() // Standard UE4 macro for boilerplate code, must be in every UObject class definition.
	
protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget)) // Exposes this property to blueprints, allowing it to be both read and written.
	class UButton* upload_button; // Declares a pointer to a UButton object.

	virtual void NativeConstruct() override; // Function that is called when the UserWidget is constructed.

	UFUNCTION(BlueprintCallable, Category = "Damage") // Exposes this function to blueprints under the category "Damage".
	FString OpenFileDialog(); // Declares a function that opens a file dialog and returns the path of a selected image.
};
