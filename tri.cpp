#include<stdio.h>
int main(){
	int a,b;
	
	printf ("wnter 1st num\n");
	scanf("%d",&a);
	printf("enter 2nd number\n");
	scanf("%d",&b);
	
	
	
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	if (b!=0){
		printf("%d\n",a/b);
	}
	else if(b==0) {
	    printf ("Infinity\n");
	}
	
	printf("%d\n",a*b);
}
