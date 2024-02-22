// Fill out your copyright notice in the Description page of Project Settings.

#include "UiWidget.h" // Include the header file for the UUiWidget class.
#include <windows.h> // Include the Windows API header.
#include <commdlg.h> // Include the Common Dialog Box Library header.
#include <string> // Include the standard string library.

// This function is called when the UserWidget is constructed.
void UUiWidget::NativeConstruct()
{
    // Currently, this function does nothing. You can add code here that should be executed when the widget is constructed.
}

// This function opens a file dialog and returns the path of a selected image.
FString UUiWidget::OpenFileDialog()
{
    OPENFILENAME ofn; // Declare a variable of type OPENFILENAME. This structure contains information the system needs to initialize an Open or Save As dialog box.
    TCHAR szFile[MAX_PATH] = { 0 }; // Declare a buffer to store the file path.

    ZeroMemory(&ofn, sizeof(OPENFILENAME)); // Initialize all members of the ofn structure to zero.
    ofn.lStructSize = sizeof(OPENFILENAME); // Set the length, in bytes, of the structure.
    ofn.hwndOwner = NULL; // If this member is NULL, the dialog box has no owner window.
    ofn.lpstrFile = szFile; // Set the buffer that receives the file name when the user clicks the OK button.
    ofn.nMaxFile = sizeof(szFile); // Set the size, in characters, of the buffer pointed to by lpstrFile.
    ofn.lpstrFilter = TEXT("All files(*.*)\0*.*\0"); // Set the filter string that determines the types of files that are displayed.
    ofn.nFilterIndex = 1; // Set the index of the currently selected filter in the File Types control.
    ofn.lpstrInitialDir = NULL; // If this member is NULL, the system uses the current directory as the initial directory.
    ofn.lpstrTitle = TEXT("Select a File"); // Set the string to be placed in the title bar of the dialog box.
    ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST; // Set the flags that determine the behavior of the dialog box.

    FString filePath; // Declare a variable to store the file path.
    if (GetOpenFileName(&ofn) == TRUE) // Display the Open dialog box. If the user clicked the OK button, the return value is nonzero.
    {
        filePath = FString(ofn.lpstrFile); // Convert the selected file path to an FString.
    }

    return filePath; // Return the file path.
}