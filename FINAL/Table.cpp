#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a number for the table\n");
	scanf("%d",&a);
	for(b=0;b<=10;b++)
	{
		printf("%d*%d=%d\n",a,b,c=a*b);	
		//scanf("%d,%d,%d",&a,&b,&c);
	}
		return 0;
}
