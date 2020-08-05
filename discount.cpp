#include<stdio.h>
int main(){
	int p,q,t,d;
	printf("Enter Price");
	scanf("%d",&p);
	
	printf("Enter Quantity");
	scanf("%d",&q);
	
	if (p>=1000) {
		d=10;
		//t=p*q-p*d/100;
		printf("Your amount is %d",t=p*q-p*d/100);
	}
	/*else {
		
		printf("Your amount is",t=p*q);
	}*/
	
	return 0;
}
