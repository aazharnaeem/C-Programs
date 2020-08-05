#include <stdio.h>
int main()
{
  int p,c,m,t;

   printf("Input the marks obtained in Physics :");
   scanf("%d",&p);
   printf("Input the marks obtained in Chemistry :");
   scanf("%d",&c);
   printf("Input the marks obtained in Mathematics :");
   scanf("%d",&m);
   t=m+p+c;
   
   if(m>=65){
   	if(p>=55){
   		if(t>-180){
   				           printf("The  candidate is eligible for admission.\n");

		   }else{
		   			    printf("The candidate is not eligible.\n");
		   }
	   }else{
		   			    printf("The candidate is not eligible.\n");
		   }
   }else{
		   			    printf("The candidate is not eligible.\n");
		   }

     return 0;
}
