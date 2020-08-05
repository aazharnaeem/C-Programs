#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value\n");
	scanf("%d",&a);
	if(a%2!=0)
	for(b=1;b<=10;b++)
	{
		printf("%d*%d=%d\n",a,b,a*b);
	}
}
