#include <easyx.h>
#include <conio.h>
#include <stdio.h> 
#include "menu.h"
#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")

int main()
{
	menu();
	return 0;
}