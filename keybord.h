#include <stdio.h>
#include <Windows.h>
#include <easyx.h>
ExMessage f;
bool press() {
	peekmessage(&f, EX_KEY);
	if (f.message == WM_KEYDOWN) {
		return true;
	}
	return false;
}

bool Press_R() {
	if (press) {
		if (f.vkcode=='R'){
			return true;
		}
	}
	return false;
}
bool Press_F() {
	if (press) {
		if (f.vkcode == 'F') {
			return true;
		}
	}
	return false;
}
bool Press_Q() {
	if (press) {
		if (f.vkcode == 'Q') {
			return true;
		}
	}
	return false;
}

bool Press_1() {
	if (press) {
		if (f.vkcode == '1') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool Press_2() {
	if (press) {
		if (f.vkcode == '2') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool Press_3() {
	if (press) {
		if (f.vkcode == '3') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool Press_4() {
	if (press) {
		if (f.vkcode == '4') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool Press_5() {
	if (press) {
		if (f.vkcode == '5') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool Press_6() {
	if (press) {
		if (f.vkcode == '6') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool Press_7() {
	if (press) {
		if (f.vkcode == '7') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool Press_8() {
	if (press) {
		if (f.vkcode == '8') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool Press_9() {
	if (press) {
		if (f.vkcode == '9') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool Press_0() {
	if (press) {
		if (f.vkcode == '0') {
			f.message = 0;
			return true;
		}
	}
	return false;
}

bool MonitorKey() {
			if (press()) {
			if (f.vkcode == 'R') {
				cleardevice();
				return true;
			}
			else if (f.vkcode == 'F') {
				cleardevice();
				return true;
			}
			else if (f.vkcode == 'Q') {
				cleardevice();
				exit(0);
			}
		}
}

int Monitor_number() {
	while (1){
		if(Press_Q())
			exit(0);
		if (press()) {
			if (Press_0()) return -1;
			else if (Press_1()) return 0;
			else if (Press_2()) return 1;
			else if (Press_3()) return 2;
			else if (Press_4()) return 3;
			else if (Press_5()) return 4;
			else if (Press_6()) return 5;
			else if (Press_7()) return 6;
			else if (Press_8()) return 7;
			else if (Press_9()) return 8;
		}
	}
}
