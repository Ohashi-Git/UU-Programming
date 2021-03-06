#include <stdio.h>
#include <math.h>

#define PI  3.1416                       /*記号定数PIを3.141として定義*/

int main(void){
	
	double radius = 10;
	double result1, result2, result3;

	result1 = 2 *PI* radius ;               /*周の長さ=2πrを計算&esult1に結果を格納*/
	result2 = PI*pow(radius,2);             /*面積=πr^2を計算&result2に結果を格納*/
	result3 = 4.0/3* PI *pow(radius,3);     /*4/3πr^3を計算&result3に結果を格納。しかし、
											ここで4.0/3としないと計算結果がおかしくなる。*/

	printf("半径%fの円の円周の長さは%fcm、面積は%fcm,、球の体積は%fcmとなる。\n",radius, result1, result2, result3);

	return 0;

}