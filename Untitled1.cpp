#include<stdio.h>
int main(){
	int fact,ans=1,i;
	printf("write  nuber");
	scanf("%d",&fact);
	
	for (i=1;i<=fact;i++){
		
		ans=ans*i;
	}
	printf("%d",ans);
}
