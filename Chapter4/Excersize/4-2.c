#include <stdio.h>

int main(){

	double a, b, c, d, e; a = 13.5; b = 12.25;

	c = 2 * a;
	d = 2 * b;
	e = c + d;

	printf("長辺の長さ%fcm,短辺の長さ%fcmの長方形の四辺の長さの和は%fとなる\n", a, b, e);

	return 0;
	
}