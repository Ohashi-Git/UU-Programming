#include <stdio.h>

int main(){

	double wgpm = 18;/*����g/mol���`*/
	double avog = 6.02e23;/*�A�{�K�h���萔���`*/
	double result = 0;/*�v�Z���ʊi�[�p�̕ϐ����`*/

	result = avog / wgpm;/*�A�{�K�h���萔���������ʂ̌��ʂ�result�ϐ��Ɋi�[*/

	printf("��1ml���̐��̕��q����%7.0f�ł��B", result);/*����͏����_�ȉ���\�����Ȃ��悤��[%f]��7.0�I�v�V�������w��*/

	return 0;/*������*/

}