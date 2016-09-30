# QtFontAwesome
A Simple Helper Class For adding FontAwesome icons to Your QT Application.

## Usage

In the example.cpp file, I created a function for setting up icons. (ui is the Qt default UI container class)
You can do this anywhere.

Add the FontAwesome.ttf font file in your Project Resources. The file can be found inside Resources/Fonts folder of this repository.

Now you need to initialise everything using the FontAwesome::Init() function in your application. This only has to be done once. 
And then you can use the icons anywhere in your application.

There are two steps:
* First set the font of the element to FontAwesome::Font
* Set the icon using the FontAwesome::Icon( "icon-name" )

Icon names are same as on FontAwesome's website
Enjoy!

    #include <FontAwesomeIcons.h>

    void setUpIcons()
    {
	// This method must be called only once in the entire application!
	FontAwesome::Init();

	ui.someButton->setFont(FontAwesome::Font);
	ui.someButton->setText(FontAwesome::Icon("play"));

	ui.someOtherButton->setFont(FontAwesome::Font);
	ui.someOtherButton->setText(FontAwesome::Icon("pause"));
    } 
