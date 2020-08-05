#include <stdio.h>
int main(){
	
	int num1,num;
	float result;
	char opp;
	
	printf("Enter first value\n");
	scanf("%d",&num1);
	printf("Enter Second value\n");
	scanf("%d",&num);
	printf("Enter operation to perform (+,-,*,/):");
	scanf("%s",&opp);
	
	if (opp =='+'){
		result=num1+num;
		printf("Result : %f",result);
	}


	
	return 0;
}
