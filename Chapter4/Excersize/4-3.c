#include <stdio.h>

int main(){

	double x = 0;
	double f = 0;

	while (x <= 5){

		f = x * x;
		printf("x=%f�̂Ƃ��Ax^2�̒l��%f\n", x, f);

		x = x + 0.5;

	}

	return 0;

}