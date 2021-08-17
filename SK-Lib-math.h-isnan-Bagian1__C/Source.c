#include <stdio.h>      /* printf */
#include <math.h>       /* isnan, sqrt */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("isnan(0.0)       : %d\n", isnan(0.0));
	printf("isnan(1.0/3.0)   : %d\n", isnan(1.0 / 3.0));
	printf("isnan(-1.0/2.0)  : %d\n", isnan(-1.0 / 2.0));
	printf("isnan(sqrt(-1.0)): %d\n", isnan(sqrt(-1.0)));
	_getch();
	return 0;
}