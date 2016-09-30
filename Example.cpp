/**
 * In this example, I created a function for setting up icons. (ui is the Qt default UI container class)
 * You can do this anywhere.
 *
 * You first need to initialise everything using the FontAwesome::Init() function
 * And then you can use the icons anywhere in your application.
 *
 * There are two steps:
 * 1. First set the font of the element to FontAwesome::Font
 * 2. Set the icon using the FontAwesome::Icon( "icon-name" )
 *
 * Icon names are same as on FontAwesome's website
 * Enjoy!
 */

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
