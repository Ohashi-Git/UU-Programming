#include <stdio.h>

int main(){

	double wgpm = 18;/*水のg/molを定義*/
	double avog = 6.02e23;/*アボガドロ定数を定義*/
	double result = 0;/*計算結果格納用の変数を定義*/

	result = avog / wgpm;/*アボガドロ定数÷モル質量の結果をresult変数に格納*/

	printf("水1ml中の水の分子数は%7.0f個です。", result);/*今回は小数点以下を表示しないように[%f]に7.0オプションを指定*/

	return 0;/*いつもの*/

}