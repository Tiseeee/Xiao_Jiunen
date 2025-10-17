#pragma once
#include <Windows.h>
#include <easyx.h>
#include <stdio.h>
int brr[6] = { 1,2,3,4,5,6 };
IMAGE hand;
IMAGE handnum[6];
int Hand_Num = 0;

void master(int* arr,int b) {
	cleardevice();
	Hand_Num = 0;
	for (int i = 0; i < 3; i++) {
		int cnt=0;
		Hand_Num+=arr[i];
		for(int j=Hand_Num-arr[i];j<Hand_Num;j++) {
			if (j <= -1)
				j+=6;
			j%= 6;
			cnt++;
			if (cnt>5)
				break;
			putimage(0, 0, &handnum[j]);
			outtextxy(250, 600, L"大师算命中");
			Sleep(200);
		}
		if(Hand_Num<=-1)
			Hand_Num+=6;
		Hand_Num %= 6;
		putimage(0, 0, &handnum[Hand_Num]);
		outtextxy(250, 600, L"大师算命中");
		Sleep(500);
	}
	Hand_Num += b;
	int cnt = 0;
	for(int j=Hand_Num-b;j<Hand_Num;j++) {
		if (j <= -1)
			j+=6;
		j%= 6;
		putimage(0, 0, &handnum[j]);
		outtextxy(250, 600, L"大师算命中");
		Sleep(200);
		cnt++;
		if (cnt > 5)
			break;
	}
	if (Hand_Num <= -1)
		Hand_Num += 6;
	Hand_Num %= 6;
	putimage(0, 0, &handnum[Hand_Num]);
	settextcolor(LIGHTRED);
	Sleep(500);
	return;
}

void SuanMing(int *arr,int b)
{
	loadimage(&hand, L"hand.png");
	loadimage(&handnum[0], L"hand1.png");
	loadimage(&handnum[1], L"hand2.png");
	loadimage(&handnum[2], L"hand3.png");
	loadimage(&handnum[3], L"hand4.png");
	loadimage(&handnum[4], L"hand5.png");
	loadimage(&handnum[5], L"hand6.png");
	putimage(0, 0, &hand);
	outtextxy(250, 600, L"大师算命中");
	Sleep(500);
	master(arr,b);
	settextstyle(60, 0, L"黑体");
	outtextxy(100, 400, L"大师算命成功！");
	settextcolor(LIGHTRED);
	Sleep(1000);
	cleardevice();
	if(Hand_Num==0)
		outtextxy(250, 400, L"大安");
	if(Hand_Num==1)
		outtextxy(250, 400, L"留连");
	if(Hand_Num==2)
		outtextxy(250, 400, L"速喜");
	if(Hand_Num==3)
		outtextxy(250, 400, L"赤口");
	if(Hand_Num==4)
		outtextxy(250, 400, L"小吉");
	if(Hand_Num==5)
		outtextxy(250, 400, L"大凶");
	return;
}


