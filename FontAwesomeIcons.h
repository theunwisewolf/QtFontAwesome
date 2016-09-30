#ifndef _FONTAWESOMEICONS_H
#define _FONTAWESOMEICONS_H

#include <QFontDatabase>
#include <map>
#include <string>

class FontAwesome 
{
public: 
	static std::map<std::string, int> IconMap;
	static QFont Font;

	static void Init();
	static QChar Icon(std::string key);
};

#endif