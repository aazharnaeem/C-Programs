#include<stdio.h>
int main(){
	
	int p,n;
	float r;
	
	printf("Enter Principle \n");
	scanf("%d",&p);
	
	printf("Enter number of years \n");
	scanf("%d",&n);
	
	printf("Enter rate od interest \n");
	scanf("%f",&r);
	
	
	printf("Simple interest is : %f", p*n*r/100);
	return 0;
}
