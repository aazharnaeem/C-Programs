#include<stdio.h>
int main(){
	int prime;
	
	printf("enter an integer \n");
	scanf("%d",&prime);
	
	if (prime %2!=0){
		
		printf("The Given Number is Odd");
	}
	else {
		printf("The Given Number is Even");
	}
	return 0;
}
