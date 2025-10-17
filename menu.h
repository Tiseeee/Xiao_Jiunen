#include <easyx.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <graphics.h>
#include "keybord.h"
#include "mouse.h"
#include "SuanMing.h"

int arr[4];
int b;
int r1[] = { 200,100,400,190 };
int r2[] = { 200,200,400,290 };
int r3[] = { 200,300,400,390 };	
RECT R1 = { r1[0],r1[1],r1[2],r1[3] };
RECT R2 = { r2[0],r2[1],r2[2],r2[3] };
RECT R3 = { r3[0],r3[1],r3[2],r3[3] };
void drawButton() {
	rectangle(r1[0], r1[1], r1[2], r1[3]);
	rectangle(r2[0], r2[1], r2[2], r2[3]);
	rectangle(r3[0], r3[1], r3[2], r3[3]);
	outtextxy(280, 145, L"开始");
	outtextxy(280, 245, L"随机");
	outtextxy(280, 345, L"退出");
	}

void input() {
	cleardevice();
	settextcolor(BLACK);
	settextstyle(40, 0, L"黑体");
	outtextxy(200, 250, L"键盘输入");
	int a=Monitor_number();
	outtextxy(200,300,a+'0'+1);
	arr[0]= a;
	a = Monitor_number();
	outtextxy(220, 300, a + '0'+1);
	arr[1] = a;
	a = Monitor_number();
	b = a;
	outtextxy(240, 300, a + '0'+1);
	Sleep(200);
	return;
}

void menu()
{	
	initgraph(600, 800);
	setbkcolor(LIGHTBLUE);
	cleardevice();
	drawButton();
	while (1) {
		if (MonitorKey()) {
			input();
			cleardevice();
			SuanMing(arr,b);
				}
		if (MonitorMouse(R1, R2, R3)) {
			input();
			cleardevice();
			SuanMing(arr,b);
		}
	}
	closegraph();
	return;
} 