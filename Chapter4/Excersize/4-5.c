#include <stdio.h>
#include <math.h>

#define PI  3.1416                       /*�L���萔PI��3.141�Ƃ��Ē�`*/

int main(void){
	
	double radius = 10;
	double result1, result2, result3;

	result1 = 2 *PI* radius ;               /*���̒���=2��r���v�Z&esult1�Ɍ��ʂ��i�[*/
	result2 = PI*pow(radius,2);             /*�ʐ�=��r^2���v�Z&result2�Ɍ��ʂ��i�[*/
	result3 = 4.0/3* PI *pow(radius,3);     /*4/3��r^3���v�Z&result3�Ɍ��ʂ��i�[�B�������A
											������4.0/3�Ƃ��Ȃ��ƌv�Z���ʂ����������Ȃ�B*/

	printf("���a%f�̉~�̉~���̒�����%fcm�A�ʐς�%fcm,�A���̑̐ς�%fcm�ƂȂ�B\n",radius, result1, result2, result3);

	return 0;

}