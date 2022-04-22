#include "Chat.h"
#include <iostream>
#include <string>

int main()
{
	Chat chat;

	chat.reg("anton", "gggg");
	chat.reg("julia", "kfjk");
	chat.reg("nemi", "fera");
	chat.reg("yolka", "kdsas");
	chat.reg("juri", "ggfdslg");
	chat.reg("alex", "kfjkfa");
	chat.reg("serega", "ferdd");
	chat.reg("ivan", "kdskh");

	chat.showData();

	chat.DeleteUserLogin("anton", "gggg");

	chat.showData();
	
	return 0;
}