#include <stdio.h>

int main(){

	double x = 0;
	double f = 0;

	while (x <= 5){

		f = x * x;
		printf("x=%f‚Ì‚Æ‚«Ax^2‚Ì’l‚Í%f\n", x, f);

		x = x + 0.5;

	}

	return 0;

}