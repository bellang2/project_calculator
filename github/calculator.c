#include"calculator.h"
int calculator(int sel, int no1, int no2)
{
	int result = 0;
	if (sel == 1) {
		result = no1 + no2;
	}
	if (sel == 2) {
		result = no1 - no2;
	}
	if (sel == 3) {
		result = no1 * no2;
	}
	if (sel == 4) {
		result = no1 / no2;
	}
	return result;
}
