#include<stdio.h>
int main()
{
	char a;
	printf("Enter a character\n");
	scanf("%c",&a);
	
	a<123 && a>97 || a>64 && a<92 ? printf("Not a special symbol"):printf("Special symbol");
}
