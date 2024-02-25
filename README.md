# Unreal Engine 5 Project - File Dialog

## Description

This project is an Unreal Engine 5 project that includes a C++ class for opening a file dialog and returning the path of a selected image. This can be useful for various applications such as texture setting, image processing, and more.

## Class Structure

The main class, `UUiWidget`, is a User Widget that contains a button for uploading an image and a function for opening a file dialog. The function `OpenFileDialog()` opens a file dialog and returns the path of the selected image.

## Setup

To use this project, you need to have Unreal Engine 5 installed on your machine. When creating the c++ class make it a UserWidget Class. Then reparent the widget in which you plan to use this function.

### Adding the Library

In order for the OpenFileDialog function to work, you need to add the following line to your `.build.cs` file:

```cpp
PublicAdditionalLibraries.Add("Comdlg32.lib");
```
## Usage

You can use the UUiWidget class in your Unreal Engine 5 project to open a file dialog and get the path of a selected image. This can be useful for setting textures, loading images, and more.

## License

This project is licensed under the MIT License - see the LICENSE.md file for details.
