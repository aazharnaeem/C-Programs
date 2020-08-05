#include <stdio.h>
int main()
{
	char op,ch;
	int a,b;
//	do{
	printf ("Enter value 1: \n");
	scanf ("%d",&a);
	printf ("Enter value 2: \n");
	scanf ("%d",&b);
	printf ("Select operation:\n");
	scanf("%s",&op);
	switch (op)
	{
		case  '+' :		
			printf("%d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d",a,b,a-b);
			break;
		case '*':
			printf("%d * %d = %d",a,b,a*b);
			break;
		case '/':
			printf("%d / %d = %f",a,b,a/b);
			break;

	}
	//printf ("y/n\n");
//	scanf("%f",ch);
	//}
//	while (ch == 'y');
	return 0;
}
