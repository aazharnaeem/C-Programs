#include<stdio.h>
int main(void){
	float x,result;
	printf("enter value of x: ");
	scanf("%f",&x);
	
	result = 3*pow(x,4)*sin(180*x)+4*pow(x,3)*cos(90*x)+pow(x,2)*sin(tan(45))+7*x+9*cos(90*pow(x,2));
	printf("%.2f",result);
}
