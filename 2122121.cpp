#include <stdio.h>
int main(){
	int fact, ans=1,i;
	printf ("Enter number: \n");
	
	scanf ("%d",&fact);
	for (i = 1; i<= fact; i++){
		ans = ans*i;
	}
	printf ("%d",ans);
	return 0;
}
