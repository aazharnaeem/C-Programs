#include<stdio.h>
int main()
{
	int count;
	count='0';
	start:
		printf("%C [%d]",count, count);
		count++;
	if(count <='9')
		goto start;
		return 0;
}
