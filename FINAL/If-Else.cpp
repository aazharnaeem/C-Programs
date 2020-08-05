#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("allowed");
	}
	else{
		printf("not allowed");
	}
	return 0;
}
