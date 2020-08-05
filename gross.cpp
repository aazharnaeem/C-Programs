#include<stdio.h>
int main()
{
	int b,g,hra,da;
	printf("Enter basic salary\n");
	scanf("%d",&b);
	
	if(b>35000)
	{
		hra = b*0.70;
		da = b*0.15;
		//printf("basic salary = %d",b);
	}
	else if (b<25000)
	{
		hra = b*0.25;
		da=b*2000;
		//printf("basic salary = %d",b);
	}
		g = b+hra+da;
	printf("gross salary is %d \n",g);
	return 0;
}
