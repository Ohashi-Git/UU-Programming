#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main(void){

	/*�̐ρA���a�̂R��A���a���i�[����֐��Q�Z�b�g��`*/
	double Vol1, Vol2, cube1, cube2, radi1, radi2; Vol1 = 14.372; Vol2 = 696.9116;

	/*V=4/3��r^3��r^3�ɓ����镔�����v�Z���Ă��ꂼ��i�[*/
	cube1 = Vol1 / PI * 3.0 / 4;
	cube2 = Vol2 / PI * 3.0 / 4;

	/*pow�֐���p���ĎO�捪�𐶐��Ar^3�̎O�捪�Ȃ̂Ŕ��a(r)���o�Ă���B*/
	radi1 = pow(cube1, 1.0 / 3);
	radi2 = pow(cube2, 1.0 / 3);

	/*�\��*/
	printf("�̐�%f�̋�V1�̔��a��%f�A\n�̐�%f�̋�V2�̔��a��%f�ƂȂ�B\n", Vol1, radi1, Vol2, radi2);

	return 0;
}