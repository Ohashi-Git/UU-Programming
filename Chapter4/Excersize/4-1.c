#include <stdio.h>

int main(){

	int a, b, c, d, e; a = 50; b = 10;

	c = 2 * a;
	d = 2 * b;
	e = c + d;

	printf("長辺の長さ%dcm、短辺の長さ%dcmの長方形の四辺の長さの和は%dcmとなる\n", a, b, e);

	return 0;

}