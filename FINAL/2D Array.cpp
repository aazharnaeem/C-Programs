#include<stdio.h>
int main()
{
	int stud[4][2]={1234,56,1212,33,1434,80,1312,78};
	int i,j;
	for(i=1;i<=3;i++)
	{
		printf("");
		for(j=0;j<=1;j++)
			printf("%d\n",*(*(stud+i)+j));
	}
}
