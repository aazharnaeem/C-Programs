#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("Enter C coordinates\n");
	scanf("%f%f",&x,&y);
	r=sqrt(x*x+y*y);
	theta= atan(y/x);
	printf("The Polar coordinares : %2.f(cos(%2f)+i.sin(%.2f))",r,theta,theta);
	return 0;
}
