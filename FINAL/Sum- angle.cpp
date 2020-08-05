#include<stdio.h>
#include<math.h>
int main()
{
	float ang,sum;
	printf("Enter the angle in degree");
	scanf("%f",&ang);
	ang=ang*((22.0/0.7)/180.0);
	sum=cos(ang)+sin(ang);
	if(sum==1)
	{
		printf("Their sum is one\n");
	}
	else
	{
		printf("their sum is not one");
	}
}
