#include<stdio.h>
int main()
{
	int y;
	printf("Enter year");
	scanf("%d",&y);
	y%4 ? printf("leap year",y):printf("not a leap year",y);
	
}
