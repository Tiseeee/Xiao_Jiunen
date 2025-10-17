#include <Windows.h>
#include <easyx.h>

bool buttonInRect(int x, int y, RECT rect) {
	return (x >= rect.left && x <= rect.right && y >= rect.top && y <= rect.bottom);
}

bool MonitorMouse(RECT R1,RECT R2,RECT R3) {
	ExMessage f;
	peekmessage(&f, EX_MOUSE);
		int x = f.x;
		int y = f.y;
		if (buttonInRect(x,y,R1)){ 
			if(f.message==WM_LBUTTONUP)
				return true;
		}
		if (buttonInRect(x, y, R2)) {
			if(f.message==WM_LBUTTONUP)
				return false;
		}
		if (buttonInRect(x, y, R3)) {
			if (f.message==WM_LBUTTONUP) {
				exit(0);
			}
		}
	}
