/*#include<stdio.h>
int main()
{
	int a,b,c,d,e,r;
	printf ("Enter marks of 5 subjects\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	r=(a+b+c+d+e)*100/500;
	
	//(r>=70? printf("first %d",r);)(r>=60 && r<=50 ? printf("Second %d",r);:printf("third%d",r));(r>=50 && r<=40 ? printf("Fourth%d",r); : printf("Fail%d",r);)
	{
		(r>=60)? printf("First"):(r<=50)&&(r>40)?printf("second"):(r>=40)&&(r<=30)?printf("Third"):printf("Fail");	
	}
	return 0;

}*/
/*#include<stdio.h>
int main()
{
	int a;
	char ch;
	do
	{
		printf("Enter a number\n");
		scanf("%d",&a);
		
		printf("DO you want it again? y/n\n");
		scanf("%s",&ch);
	}
	while(ch == 'y');
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a;
	char ch;
	do
	{
		printf("Enter a number to find wether it is Even Or Odd\n");
		scanf("%d",&a);
		if ((a/2)*2==a)
		{
			printf("Even\n");
		}
		else 
		{
			printf("Odd\n");
		}
		printf ("Again y/n\n");
		scanf("%s",&ch);
	}
	while (ch == 'y');
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a,b,c;
	for (a=1;a<=3;a++)
	{
		for(b=1;b<=2;b++)
		{
		
		c=a+b;
		printf("%d\n",c);
	}
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int cp,sp,p,l;
	printf ("Enter Cost price and Selling price\n");
	scanf("%d%d",&cp,&sp);
	p= sp-cp;
	l=cp-sp;
	if (p>0)
	{
		printf("The profit is %d\n",p);
	}
	if (l >0)
	{
		printf("The loss id %d\n",l);
	}
	if (p==0)
	{
		printf ("there is no loss%d\n",p);
	}
	return 0;
}*/
