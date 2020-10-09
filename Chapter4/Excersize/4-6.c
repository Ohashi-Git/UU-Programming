#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main(void){

	/*体積、半径の３乗、半径を格納する関数２セット定義*/
	double Vol1, Vol2, cube1, cube2, radi1, radi2; Vol1 = 14.372; Vol2 = 696.9116;

	/*V=4/3πr^3のr^3に当たる部分を計算してそれぞれ格納*/
	cube1 = Vol1 / PI * 3.0 / 4;
	cube2 = Vol2 / PI * 3.0 / 4;

	/*pow関数を用いて三乗根を生成、r^3の三乗根なので半径(r)が出てくる。*/
	radi1 = pow(cube1, 1.0 / 3);
	radi2 = pow(cube2, 1.0 / 3);

	/*表示*/
	printf("体積%fの球V1の半径は%f、\n体積%fの球V2の半径は%fとなる。\n", Vol1, radi1, Vol2, radi2);

	return 0;
}