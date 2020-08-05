#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a chracter\n");
	scanf("%c",&ch);
	ch>98 && ch<123 ? printf("Lower case"): printf("upper case");
	return 0;
}
