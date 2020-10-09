#include <stdio.h>
#include <math.h>

#define PI  3.1416                       /*‹L†’è”PI‚ğ3.141‚Æ‚µ‚Ä’è‹`*/

int main(void){
	
	double radius = 10;
	double result1, result2, result3;

	result1 = 2 *PI* radius ;               /*ü‚Ì’·‚³=2ƒÎr‚ğŒvZ&esult1‚ÉŒ‹‰Ê‚ğŠi”[*/
	result2 = PI*pow(radius,2);             /*–ÊÏ=ƒÎr^2‚ğŒvZ&result2‚ÉŒ‹‰Ê‚ğŠi”[*/
	result3 = 4.0/3* PI *pow(radius,3);     /*4/3ƒÎr^3‚ğŒvZ&result3‚ÉŒ‹‰Ê‚ğŠi”[B‚µ‚©‚µA
											‚±‚±‚Å4.0/3‚Æ‚µ‚È‚¢‚ÆŒvZŒ‹‰Ê‚ª‚¨‚©‚µ‚­‚È‚éB*/

	printf("”¼Œa%f‚Ì‰~‚Ì‰~ü‚Ì’·‚³‚Í%fcmA–ÊÏ‚Í%fcm,A‹…‚Ì‘ÌÏ‚Í%fcm‚Æ‚È‚éB\n",radius, result1, result2, result3);

	return 0;

}