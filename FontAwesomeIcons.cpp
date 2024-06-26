#include "FontAwesomeIcons.h"

std::map<std::string, int> FontAwesome::IconMap;
QFont FontAwesome::Font;

QChar FontAwesome::Icon(std::string key)
{
	return QChar(IconMap[key]);
}

void FontAwesome::Init()
{
	QFontDatabase::addApplicationFont(":/Fonts/Resources/Fonts/FontAwesome.ttf");

	Font.setFamily("FontAwesome");

	IconMap["glass"] = 0xf000;
	IconMap["music"] = 0xf001;
	IconMap["search"] = 0xf002;
	IconMap["envelope-o"] = 0xf003;
	IconMap["heart"] = 0xf004;
	IconMap["star"] = 0xf005;
	IconMap["star-o"] = 0xf006;
	IconMap["user"] = 0xf007;
	IconMap["film"] = 0xf008;
	IconMap["th-large"] = 0xf009;
	IconMap["th"] = 0xf00a;
	IconMap["th-list"] = 0xf00b;
	IconMap["check"] = 0xf00c;
	IconMap["times"] = 0xf00d;
	IconMap["search-plus"] = 0xf00e;
	IconMap["search-minus"] = 0xf010;
	IconMap["power-off"] = 0xf011;
	IconMap["signal"] = 0xf012;
	IconMap["cog"] = 0xf013;
	IconMap["trash-o"] = 0xf014;
	IconMap["home"] = 0xf015;
	IconMap["file-o"] = 0xf016;
	IconMap["clock-o"] = 0xf017;
	IconMap["road"] = 0xf018;
	IconMap["download"] = 0xf019;
	IconMap["arrow-circle-o-down"] = 0xf01a;
	IconMap["arrow-circle-o-up"] = 0xf01b;
	IconMap["inbox"] = 0xf01c;
	IconMap["play-circle-o"] = 0xf01d;
	IconMap["repeat"] = 0xf01e;
	IconMap["refresh"] = 0xf021;
	IconMap["list-alt"] = 0xf022;
	IconMap["lock"] = 0xf023;
	IconMap["flag"] = 0xf024;
	IconMap["headphones"] = 0xf025;
	IconMap["volume-off"] = 0xf026;
	IconMap["volume-down"] = 0xf027;
	IconMap["volume-up"] = 0xf028;
	IconMap["qrcode"] = 0xf029;
	IconMap["barcode"] = 0xf02a;
	IconMap["tag"] = 0xf02b;
	IconMap["tags"] = 0xf02c;
	IconMap["book"] = 0xf02d;
	IconMap["bookmark"] = 0xf02e;
	IconMap["print"] = 0xf02f;
	IconMap["camera"] = 0xf030;
	IconMap["font"] = 0xf031;
	IconMap["bold"] = 0xf032;
	IconMap["italic"] = 0xf033;
	IconMap["text-height"] = 0xf034;
	IconMap["text-width"] = 0xf035;
	IconMap["align-left"] = 0xf036;
	IconMap["align-center"] = 0xf037;
	IconMap["align-right"] = 0xf038;
	IconMap["align-justify"] = 0xf039;
	IconMap["list"] = 0xf03a;
	IconMap["outdent"] = 0xf03b;
	IconMap["indent"] = 0xf03c;
	IconMap["video-camera"] = 0xf03d;
	IconMap["picture-o"] = 0xf03e;
	IconMap["pencil"] = 0xf040;
	IconMap["map-marker"] = 0xf041;
	IconMap["adjust"] = 0xf042;
	IconMap["tint"] = 0xf043;
	IconMap["pencil-square-o"] = 0xf044;
	IconMap["share-square-o"] = 0xf045;
	IconMap["check-square-o"] = 0xf046;
	IconMap["arrows"] = 0xf047;
	IconMap["step-backward"] = 0xf048;
	IconMap["fast-backward"] = 0xf049;
	IconMap["backward"] = 0xf04a;
	IconMap["play"] = 0xf04b;
	IconMap["pause"] = 0xf04c;
	IconMap["stop"] = 0xf04d;
	IconMap["forward"] = 0xf04e;
	IconMap["fast-forward"] = 0xf050;
	IconMap["step-forward"] = 0xf051;
	IconMap["eject"] = 0xf052;
	IconMap["chevron-left"] = 0xf053;
	IconMap["chevron-right"] = 0xf054;
	IconMap["plus-circle"] = 0xf055;
	IconMap["minus-circle"] = 0xf056;
	IconMap["times-circle"] = 0xf057;
	IconMap["check-circle"] = 0xf058;
	IconMap["question-circle"] = 0xf059;
	IconMap["info-circle"] = 0xf05a;
	IconMap["crosshairs"] = 0xf05b;
	IconMap["times-circle-o"] = 0xf05c;
	IconMap["check-circle-o"] = 0xf05d;
	IconMap["ban"] = 0xf05e;
	IconMap["arrow-left"] = 0xf060;
	IconMap["arrow-right"] = 0xf061;
	IconMap["arrow-up"] = 0xf062;
	IconMap["arrow-down"] = 0xf063;
	IconMap["share"] = 0xf064;
	IconMap["expand"] = 0xf065;
	IconMap["compress"] = 0xf066;
	IconMap["plus"] = 0xf067;
	IconMap["minus"] = 0xf068;
	IconMap["asterisk"] = 0xf069;
	IconMap["exclamation-circle"] = 0xf06a;
	IconMap["gift"] = 0xf06b;
	IconMap["leaf"] = 0xf06c;
	IconMap["fire"] = 0xf06d;
	IconMap["eye"] = 0xf06e;
	IconMap["eye-slash"] = 0xf070;
	IconMap["exclamation-triangle"] = 0xf071;
	IconMap["plane"] = 0xf072;
	IconMap["calendar"] = 0xf073;
	IconMap["random"] = 0xf074;
	IconMap["comment"] = 0xf075;
	IconMap["magnet"] = 0xf076;
	IconMap["chevron-up"] = 0xf077;
	IconMap["chevron-down"] = 0xf078;
	IconMap["retweet"] = 0xf079;
	IconMap["shopping-cart"] = 0xf07a;
	IconMap["folder"] = 0xf07b;
	IconMap["folder-open"] = 0xf07c;
	IconMap["arrows-v"] = 0xf07d;
	IconMap["arrows-h"] = 0xf07e;
	IconMap["bar-chart"] = 0xf080;
	IconMap["twitter-square"] = 0xf081;
	IconMap["facebook-square"] = 0xf082;
	IconMap["camera-retro"] = 0xf083;
	IconMap["key"] = 0xf084;
	IconMap["cogs"] = 0xf085;
	IconMap["comments"] = 0xf086;
	IconMap["thumbs-o-up"] = 0xf087;
	IconMap["thumbs-o-down"] = 0xf088;
	IconMap["star-half"] = 0xf089;
	IconMap["heart-o"] = 0xf08a;
	IconMap["sign-out"] = 0xf08b;
	IconMap["linkedin-square"] = 0xf08c;
	IconMap["thumb-tack"] = 0xf08d;
	IconMap["external-link"] = 0xf08e;
	IconMap["sign-in"] = 0xf090;
	IconMap["trophy"] = 0xf091;
	IconMap["github-square"] = 0xf092;
	IconMap["upload"] = 0xf093;
	IconMap["lemon-o"] = 0xf094;
	IconMap["phone"] = 0xf095;
	IconMap["square-o"] = 0xf096;
	IconMap["bookmark-o"] = 0xf097;
	IconMap["phone-square"] = 0xf098;
	IconMap["twitter"] = 0xf099;
	IconMap["facebook"] = 0xf09a;
	IconMap["github"] = 0xf09b;
	IconMap["unlock"] = 0xf09c;
	IconMap["credit-card"] = 0xf09d;
	IconMap["rss"] = 0xf09e;
	IconMap["hdd-o"] = 0xf0a0;
	IconMap["bullhorn"] = 0xf0a1;
	IconMap["bell"] = 0xf0f3;
	IconMap["certificate"] = 0xf0a3;
	IconMap["hand-o-right"] = 0xf0a4;
	IconMap["hand-o-left"] = 0xf0a5;
	IconMap["hand-o-up"] = 0xf0a6;
	IconMap["hand-o-down"] = 0xf0a7;
	IconMap["arrow-circle-left"] = 0xf0a8;
	IconMap["arrow-circle-right"] = 0xf0a9;
	IconMap["arrow-circle-up"] = 0xf0aa;
	IconMap["arrow-circle-down"] = 0xf0ab;
	IconMap["globe"] = 0xf0ac;
	IconMap["wrench"] = 0xf0ad;
	IconMap["tasks"] = 0xf0ae;
	IconMap["filter"] = 0xf0b0;
	IconMap["briefcase"] = 0xf0b1;
	IconMap["arrows-alt"] = 0xf0b2;
	IconMap["users"] = 0xf0c0;
	IconMap["link"] = 0xf0c1;
	IconMap["cloud"] = 0xf0c2;
	IconMap["flask"] = 0xf0c3;
	IconMap["scissors"] = 0xf0c4;
	IconMap["files-o"] = 0xf0c5;
	IconMap["paperclip"] = 0xf0c6;
	IconMap["floppy-o"] = 0xf0c7;
	IconMap["square"] = 0xf0c8;
	IconMap["bars"] = 0xf0c9;
	IconMap["list-ul"] = 0xf0ca;
	IconMap["list-ol"] = 0xf0cb;
	IconMap["strikethrough"] = 0xf0cc;
	IconMap["underline"] = 0xf0cd;
	IconMap["table"] = 0xf0ce;
	IconMap["magic"] = 0xf0d0;
	IconMap["truck"] = 0xf0d1;
	IconMap["pinterest"] = 0xf0d2;
	IconMap["pinterest-square"] = 0xf0d3;
	IconMap["google-plus-square"] = 0xf0d4;
	IconMap["google-plus"] = 0xf0d5;
	IconMap["money"] = 0xf0d6;
	IconMap["caret-down"] = 0xf0d7;
	IconMap["caret-up"] = 0xf0d8;
	IconMap["caret-left"] = 0xf0d9;
	IconMap["caret-right"] = 0xf0da;
	IconMap["columns"] = 0xf0db;
	IconMap["sort"] = 0xf0dc;
	IconMap["sort-desc"] = 0xf0dd;
	IconMap["sort-asc"] = 0xf0de;
	IconMap["envelope"] = 0xf0e0;
	IconMap["linkedin"] = 0xf0e1;
	IconMap["undo"] = 0xf0e2;
	IconMap["gavel"] = 0xf0e3;
	IconMap["tachometer"] = 0xf0e4;
	IconMap["comment-o"] = 0xf0e5;
	IconMap["comments-o"] = 0xf0e6;
	IconMap["bolt"] = 0xf0e7;
	IconMap["sitemap"] = 0xf0e8;
	IconMap["umbrella"] = 0xf0e9;
	IconMap["clipboard"] = 0xf0ea;
	IconMap["lightbulb-o"] = 0xf0eb;
	IconMap["exchange"] = 0xf0ec;
	IconMap["cloud-download"] = 0xf0ed;
	IconMap["cloud-upload"] = 0xf0ee;
	IconMap["user-md"] = 0xf0f0;
	IconMap["stethoscope"] = 0xf0f1;
	IconMap["suitcase"] = 0xf0f2;
	IconMap["bell-o"] = 0xf0a2;
	IconMap["coffee"] = 0xf0f4;
	IconMap["cutlery"] = 0xf0f5;
	IconMap["file-text-o"] = 0xf0f6;
	IconMap["building-o"] = 0xf0f7;
	IconMap["hospital-o"] = 0xf0f8;
	IconMap["ambulance"] = 0xf0f9;
	IconMap["medkit"] = 0xf0fa;
	IconMap["fighter-jet"] = 0xf0fb;
	IconMap["beer"] = 0xf0fc;
	IconMap["h-square"] = 0xf0fd;
	IconMap["plus-square"] = 0xf0fe;
	IconMap["angle-double-left"] = 0xf100;
	IconMap["angle-double-right"] = 0xf101;
	IconMap["angle-double-up"] = 0xf102;
	IconMap["angle-double-down"] = 0xf103;
	IconMap["angle-left"] = 0xf104;
	IconMap["angle-right"] = 0xf105;
	IconMap["angle-up"] = 0xf106;
	IconMap["angle-down"] = 0xf107;
	IconMap["desktop"] = 0xf108;
	IconMap["laptop"] = 0xf109;
	IconMap["tablet"] = 0xf10a;
	IconMap["mobile"] = 0xf10b;
	IconMap["circle-o"] = 0xf10c;
	IconMap["quote-left"] = 0xf10d;
	IconMap["quote-right"] = 0xf10e;
	IconMap["spinner"] = 0xf110;
	IconMap["circle"] = 0xf111;
	IconMap["reply"] = 0xf112;
	IconMap["github-alt"] = 0xf113;
	IconMap["folder-o"] = 0xf114;
	IconMap["folder-open-o"] = 0xf115;
	IconMap["smile-o"] = 0xf118;
	IconMap["frown-o"] = 0xf119;
	IconMap["meh-o"] = 0xf11a;
	IconMap["gamepad"] = 0xf11b;
	IconMap["keyboard-o"] = 0xf11c;
	IconMap["flag-o"] = 0xf11d;
	IconMap["flag-checkered"] = 0xf11e;
	IconMap["terminal"] = 0xf120;
	IconMap["code"] = 0xf121;
	IconMap["reply-all"] = 0xf122;
	IconMap["star-half-o"] = 0xf123;
	IconMap["location-arrow"] = 0xf124;
	IconMap["crop"] = 0xf125;
	IconMap["code-fork"] = 0xf126;
	IconMap["chain-broken"] = 0xf127;
	IconMap["question"] = 0xf128;
	IconMap["info"] = 0xf129;
	IconMap["exclamation"] = 0xf12a;
	IconMap["superscript"] = 0xf12b;
	IconMap["subscript"] = 0xf12c;
	IconMap["eraser"] = 0xf12d;
	IconMap["puzzle-piece"] = 0xf12e;
	IconMap["microphone"] = 0xf130;
	IconMap["microphone-slash"] = 0xf131;
	IconMap["shield"] = 0xf132;
	IconMap["calendar-o"] = 0xf133;
	IconMap["fire-extinguisher"] = 0xf134;
	IconMap["rocket"] = 0xf135;
	IconMap["maxcdn"] = 0xf136;
	IconMap["chevron-circle-left"] = 0xf137;
	IconMap["chevron-circle-right"] = 0xf138;
	IconMap["chevron-circle-up"] = 0xf139;
	IconMap["chevron-circle-down"] = 0xf13a;
	IconMap["html5"] = 0xf13b;
	IconMap["css3"] = 0xf13c;
	IconMap["anchor"] = 0xf13d;
	IconMap["unlock-alt"] = 0xf13e;
	IconMap["bullseye"] = 0xf140;
	IconMap["ellipsis-h"] = 0xf141;
	IconMap["ellipsis-v"] = 0xf142;
	IconMap["rss-square"] = 0xf143;
	IconMap["play-circle"] = 0xf144;
	IconMap["ticket"] = 0xf145;
	IconMap["minus-square"] = 0xf146;
	IconMap["minus-square-o"] = 0xf147;
	IconMap["level-up"] = 0xf148;
	IconMap["level-down"] = 0xf149;
	IconMap["check-square"] = 0xf14a;
	IconMap["pencil-square"] = 0xf14b;
	IconMap["external-link-square"] = 0xf14c;
	IconMap["share-square"] = 0xf14d;
	IconMap["compass"] = 0xf14e;
	IconMap["caret-square-o-down"] = 0xf150;
	IconMap["caret-square-o-up"] = 0xf151;
	IconMap["caret-square-o-right"] = 0xf152;
	IconMap["eur"] = 0xf153;
	IconMap["gbp"] = 0xf154;
	IconMap["usd"] = 0xf155;
	IconMap["inr"] = 0xf156;
	IconMap["jpy"] = 0xf157;
	IconMap["rub"] = 0xf158;
	IconMap["krw"] = 0xf159;
	IconMap["btc"] = 0xf15a;
	IconMap["file"] = 0xf15b;
	IconMap["file-text"] = 0xf15c;
	IconMap["sort-alpha-asc"] = 0xf15d;
	IconMap["sort-alpha-desc"] = 0xf15e;
	IconMap["sort-amount-asc"] = 0xf160;
	IconMap["sort-amount-desc"] = 0xf161;
	IconMap["sort-numeric-asc"] = 0xf162;
	IconMap["sort-numeric-desc"] = 0xf163;
	IconMap["thumbs-up"] = 0xf164;
	IconMap["thumbs-down"] = 0xf165;
	IconMap["youtube-square"] = 0xf166;
	IconMap["youtube"] = 0xf167;
	IconMap["xing"] = 0xf168;
	IconMap["xing-square"] = 0xf169;
	IconMap["youtube-play"] = 0xf16a;
	IconMap["dropbox"] = 0xf16b;
	IconMap["stack-overflow"] = 0xf16c;
	IconMap["instagram"] = 0xf16d;
	IconMap["flickr"] = 0xf16e;
	IconMap["adn"] = 0xf170;
	IconMap["bitbucket"] = 0xf171;
	IconMap["bitbucket-square"] = 0xf172;
	IconMap["tumblr"] = 0xf173;
	IconMap["tumblr-square"] = 0xf174;
	IconMap["long-arrow-down"] = 0xf175;
	IconMap["long-arrow-up"] = 0xf176;
	IconMap["long-arrow-left"] = 0xf177;
	IconMap["long-arrow-right"] = 0xf178;
	IconMap["apple"] = 0xf179;
	IconMap["windows"] = 0xf17a;
	IconMap["android"] = 0xf17b;
	IconMap["linux"] = 0xf17c;
	IconMap["dribbble"] = 0xf17d;
	IconMap["skype"] = 0xf17e;
	IconMap["foursquare"] = 0xf180;
	IconMap["trello"] = 0xf181;
	IconMap["female"] = 0xf182;
	IconMap["male"] = 0xf183;
	IconMap["gratipay"] = 0xf184;
	IconMap["sun-o"] = 0xf185;
	IconMap["moon-o"] = 0xf186;
	IconMap["archive"] = 0xf187;
	IconMap["bug"] = 0xf188;
	IconMap["vk"] = 0xf189;
	IconMap["weibo"] = 0xf18a;
	IconMap["renren"] = 0xf18b;
	IconMap["pagelines"] = 0xf18c;
	IconMap["stack-exchange"] = 0xf18d;
	IconMap["arrow-circle-o-right"] = 0xf18e;
	IconMap["arrow-circle-o-left"] = 0xf190;
	IconMap["caret-square-o-left"] = 0xf191;
	IconMap["dot-circle-o"] = 0xf192;
	IconMap["wheelchair"] = 0xf193;
	IconMap["vimeo-square"] = 0xf194;
	IconMap["try"] = 0xf195;
	IconMap["plus-square-o"] = 0xf196;
	IconMap["space-shuttle"] = 0xf197;
	IconMap["slack"] = 0xf198;
	IconMap["envelope-square"] = 0xf199;
	IconMap["wordpress"] = 0xf19a;
	IconMap["openid"] = 0xf19b;
	IconMap["university"] = 0xf19c;
	IconMap["graduation-cap"] = 0xf19d;
	IconMap["yahoo"] = 0xf19e;
	IconMap["google"] = 0xf1a0;
	IconMap["reddit"] = 0xf1a1;
	IconMap["reddit-square"] = 0xf1a2;
	IconMap["stumbleupon-circle"] = 0xf1a3;
	IconMap["stumbleupon"] = 0xf1a4;
	IconMap["delicious"] = 0xf1a5;
	IconMap["digg"] = 0xf1a6;
	IconMap["pied-piper-pp"] = 0xf1a7;
	IconMap["pied-piper-alt"] = 0xf1a8;
	IconMap["drupal"] = 0xf1a9;
	IconMap["joomla"] = 0xf1aa;
	IconMap["language"] = 0xf1ab;
	IconMap["fax"] = 0xf1ac;
	IconMap["building"] = 0xf1ad;
	IconMap["child"] = 0xf1ae;
	IconMap["paw"] = 0xf1b0;
	IconMap["spoon"] = 0xf1b1;
	IconMap["cube"] = 0xf1b2;
	IconMap["cubes"] = 0xf1b3;
	IconMap["behance"] = 0xf1b4;
	IconMap["behance-square"] = 0xf1b5;
	IconMap["steam"] = 0xf1b6;
	IconMap["steam-square"] = 0xf1b7;
	IconMap["recycle"] = 0xf1b8;
	IconMap["car"] = 0xf1b9;
	IconMap["taxi"] = 0xf1ba;
	IconMap["tree"] = 0xf1bb;
	IconMap["spotify"] = 0xf1bc;
	IconMap["deviantart"] = 0xf1bd;
	IconMap["soundcloud"] = 0xf1be;
	IconMap["database"] = 0xf1c0;
	IconMap["file-pdf-o"] = 0xf1c1;
	IconMap["file-word-o"] = 0xf1c2;
	IconMap["file-excel-o"] = 0xf1c3;
	IconMap["file-powerpoint-o"] = 0xf1c4;
	IconMap["file-image-o"] = 0xf1c5;
	IconMap["file-archive-o"] = 0xf1c6;
	IconMap["file-audio-o"] = 0xf1c7;
	IconMap["file-video-o"] = 0xf1c8;
	IconMap["file-code-o"] = 0xf1c9;
	IconMap["vine"] = 0xf1ca;
	IconMap["codepen"] = 0xf1cb;
	IconMap["jsfiddle"] = 0xf1cc;
	IconMap["life-ring"] = 0xf1cd;
	IconMap["circle-o-notch"] = 0xf1ce;
	IconMap["rebel"] = 0xf1d0;
	IconMap["empire"] = 0xf1d1;
	IconMap["git-square"] = 0xf1d2;
	IconMap["git"] = 0xf1d3;
	IconMap["hacker-news"] = 0xf1d4;
	IconMap["tencent-weibo"] = 0xf1d5;
	IconMap["qq"] = 0xf1d6;
	IconMap["weixin"] = 0xf1d7;
	IconMap["paper-plane"] = 0xf1d8;
	IconMap["paper-plane-o"] = 0xf1d9;
	IconMap["history"] = 0xf1da;
	IconMap["circle-thin"] = 0xf1db;
	IconMap["header"] = 0xf1dc;
	IconMap["paragraph"] = 0xf1dd;
	IconMap["sliders"] = 0xf1de;
	IconMap["share-alt"] = 0xf1e0;
	IconMap["share-alt-square"] = 0xf1e1;
	IconMap["bomb"] = 0xf1e2;
	IconMap["futbol-o"] = 0xf1e3;
	IconMap["tty"] = 0xf1e4;
	IconMap["binoculars"] = 0xf1e5;
	IconMap["plug"] = 0xf1e6;
	IconMap["slideshare"] = 0xf1e7;
	IconMap["twitch"] = 0xf1e8;
	IconMap["yelp"] = 0xf1e9;
	IconMap["newspaper-o"] = 0xf1ea;
	IconMap["wifi"] = 0xf1eb;
	IconMap["calculator"] = 0xf1ec;
	IconMap["paypal"] = 0xf1ed;
	IconMap["google-wallet"] = 0xf1ee;
	IconMap["cc-visa"] = 0xf1f0;
	IconMap["cc-mastercard"] = 0xf1f1;
	IconMap["cc-discover"] = 0xf1f2;
	IconMap["cc-amex"] = 0xf1f3;
	IconMap["cc-paypal"] = 0xf1f4;
	IconMap["cc-stripe"] = 0xf1f5;
	IconMap["bell-slash"] = 0xf1f6;
	IconMap["bell-slash-o"] = 0xf1f7;
	IconMap["trash"] = 0xf1f8;
	IconMap["copyright"] = 0xf1f9;
	IconMap["at"] = 0xf1fa;
	IconMap["eyedropper"] = 0xf1fb;
	IconMap["paint-brush"] = 0xf1fc;
	IconMap["birthday-cake"] = 0xf1fd;
	IconMap["area-chart"] = 0xf1fe;
	IconMap["pie-chart"] = 0xf200;
	IconMap["line-chart"] = 0xf201;
	IconMap["lastfm"] = 0xf202;
	IconMap["lastfm-square"] = 0xf203;
	IconMap["toggle-off"] = 0xf204;
	IconMap["toggle-on"] = 0xf205;
	IconMap["bicycle"] = 0xf206;
	IconMap["bus"] = 0xf207;
	IconMap["ioxhost"] = 0xf208;
	IconMap["angellist"] = 0xf209;
	IconMap["cc"] = 0xf20a;
	IconMap["ils"] = 0xf20b;
	IconMap["meanpath"] = 0xf20c;
	IconMap["buysellads"] = 0xf20d;
	IconMap["connectdevelop"] = 0xf20e;
	IconMap["dashcube"] = 0xf210;
	IconMap["forumbee"] = 0xf211;
	IconMap["leanpub"] = 0xf212;
	IconMap["sellsy"] = 0xf213;
	IconMap["shirtsinbulk"] = 0xf214;
	IconMap["simplybuilt"] = 0xf215;
	IconMap["skyatlas"] = 0xf216;
	IconMap["cart-plus"] = 0xf217;
	IconMap["cart-arrow-down"] = 0xf218;
	IconMap["diamond"] = 0xf219;
	IconMap["ship"] = 0xf21a;
	IconMap["user-secret"] = 0xf21b;
	IconMap["motorcycle"] = 0xf21c;
	IconMap["street-view"] = 0xf21d;
	IconMap["heartbeat"] = 0xf21e;
	IconMap["venus"] = 0xf221;
	IconMap["mars"] = 0xf222;
	IconMap["mercury"] = 0xf223;
	IconMap["transgender"] = 0xf224;
	IconMap["transgender-alt"] = 0xf225;
	IconMap["venus-double"] = 0xf226;
	IconMap["mars-double"] = 0xf227;
	IconMap["venus-mars"] = 0xf228;
	IconMap["mars-stroke"] = 0xf229;
	IconMap["mars-stroke-v"] = 0xf22a;
	IconMap["mars-stroke-h"] = 0xf22b;
	IconMap["neuter"] = 0xf22c;
	IconMap["genderless"] = 0xf22d;
	IconMap["facebook-official"] = 0xf230;
	IconMap["pinterest-p"] = 0xf231;
	IconMap["whatsapp"] = 0xf232;
	IconMap["server"] = 0xf233;
	IconMap["user-plus"] = 0xf234;
	IconMap["user-times"] = 0xf235;
	IconMap["bed"] = 0xf236;
	IconMap["viacoin"] = 0xf237;
	IconMap["train"] = 0xf238;
	IconMap["subway"] = 0xf239;
	IconMap["medium"] = 0xf23a;
	IconMap["y-combinator"] = 0xf23b;
	IconMap["optin-monster"] = 0xf23c;
	IconMap["opencart"] = 0xf23d;
	IconMap["expeditedssl"] = 0xf23e;
	IconMap["battery-full"] = 0xf240;
	IconMap["battery-three-quarters"] = 0xf241;
	IconMap["battery-half"] = 0xf242;
	IconMap["battery-quarter"] = 0xf243;
	IconMap["battery-empty"] = 0xf244;
	IconMap["mouse-pointer"] = 0xf245;
	IconMap["i-cursor"] = 0xf246;
	IconMap["object-group"] = 0xf247;
	IconMap["object-ungroup"] = 0xf248;
	IconMap["sticky-note"] = 0xf249;
	IconMap["sticky-note-o"] = 0xf24a;
	IconMap["cc-jcb"] = 0xf24b;
	IconMap["cc-diners-club"] = 0xf24c;
	IconMap["clone"] = 0xf24d;
	IconMap["balance-scale"] = 0xf24e;
	IconMap["hourglass-o"] = 0xf250;
	IconMap["hourglass-start"] = 0xf251;
	IconMap["hourglass-half"] = 0xf252;
	IconMap["hourglass-end"] = 0xf253;
	IconMap["hourglass"] = 0xf254;
	IconMap["hand-rock-o"] = 0xf255;
	IconMap["hand-paper-o"] = 0xf256;
	IconMap["hand-scissors-o"] = 0xf257;
	IconMap["hand-lizard-o"] = 0xf258;
	IconMap["hand-spock-o"] = 0xf259;
	IconMap["hand-pointer-o"] = 0xf25a;
	IconMap["hand-peace-o"] = 0xf25b;
	IconMap["trademark"] = 0xf25c;
	IconMap["registered"] = 0xf25d;
	IconMap["creative-commons"] = 0xf25e;
	IconMap["gg"] = 0xf260;
	IconMap["gg-circle"] = 0xf261;
	IconMap["tripadvisor"] = 0xf262;
	IconMap["odnoklassniki"] = 0xf263;
	IconMap["odnoklassniki-square"] = 0xf264;
	IconMap["get-pocket"] = 0xf265;
	IconMap["wikipedia-w"] = 0xf266;
	IconMap["safari"] = 0xf267;
	IconMap["chrome"] = 0xf268;
	IconMap["firefox"] = 0xf269;
	IconMap["opera"] = 0xf26a;
	IconMap["internet-explorer"] = 0xf26b;
	IconMap["television"] = 0xf26c;
	IconMap["contao"] = 0xf26d;
	IconMap["500px"] = 0xf26e;
	IconMap["amazon"] = 0xf270;
	IconMap["calendar-plus-o"] = 0xf271;
	IconMap["calendar-minus-o"] = 0xf272;
	IconMap["calendar-times-o"] = 0xf273;
	IconMap["calendar-check-o"] = 0xf274;
	IconMap["industry"] = 0xf275;
	IconMap["map-pin"] = 0xf276;
	IconMap["map-signs"] = 0xf277;
	IconMap["map-o"] = 0xf278;
	IconMap["map"] = 0xf279;
	IconMap["commenting"] = 0xf27a;
	IconMap["commenting-o"] = 0xf27b;
	IconMap["houzz"] = 0xf27c;
	IconMap["vimeo"] = 0xf27d;
	IconMap["black-tie"] = 0xf27e;
	IconMap["fonticons"] = 0xf280;
	IconMap["reddit-alien"] = 0xf281;
	IconMap["edge"] = 0xf282;
	IconMap["credit-card-alt"] = 0xf283;
	IconMap["codiepie"] = 0xf284;
	IconMap["modx"] = 0xf285;
	IconMap["fort-awesome"] = 0xf286;
	IconMap["usb"] = 0xf287;
	IconMap["product-hunt"] = 0xf288;
	IconMap["mixcloud"] = 0xf289;
	IconMap["scribd"] = 0xf28a;
	IconMap["pause-circle"] = 0xf28b;
	IconMap["pause-circle-o"] = 0xf28c;
	IconMap["stop-circle"] = 0xf28d;
	IconMap["stop-circle-o"] = 0xf28e;
	IconMap["shopping-bag"] = 0xf290;
	IconMap["shopping-basket"] = 0xf291;
	IconMap["hashtag"] = 0xf292;
	IconMap["bluetooth"] = 0xf293;
	IconMap["bluetooth-b"] = 0xf294;
	IconMap["percent"] = 0xf295;
	IconMap["gitlab"] = 0xf296;
	IconMap["wpbeginner"] = 0xf297;
	IconMap["wpforms"] = 0xf298;
	IconMap["envira"] = 0xf299;
	IconMap["universal-access"] = 0xf29a;
	IconMap["wheelchair-alt"] = 0xf29b;
	IconMap["question-circle-o"] = 0xf29c;
	IconMap["blind"] = 0xf29d;
	IconMap["audio-description"] = 0xf29e;
	IconMap["volume-control-phone"] = 0xf2a0;
	IconMap["braille"] = 0xf2a1;
	IconMap["assistive-listening-systems"] = 0xf2a2;
	IconMap["american-sign-language-interpreting"] = 0xf2a3;
	IconMap["deaf"] = 0xf2a4;
	IconMap["glide"] = 0xf2a5;
	IconMap["glide-g"] = 0xf2a6;
	IconMap["sign-language"] = 0xf2a7;
	IconMap["low-vision"] = 0xf2a8;
	IconMap["viadeo"] = 0xf2a9;
	IconMap["viadeo-square"] = 0xf2aa;
	IconMap["snapchat"] = 0xf2ab;
	IconMap["snapchat-ghost"] = 0xf2ac;
	IconMap["snapchat-square"] = 0xf2ad;
	IconMap["pied-piper"] = 0xf2ae;
	IconMap["first-order"] = 0xf2b0;
	IconMap["yoast"] = 0xf2b1;
	IconMap["themeisle"] = 0xf2b2;
	IconMap["google-plus-official"] = 0xf2b3;
	IconMap["font-awesome"] = 0xf2b4;
}
