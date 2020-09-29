#include<stdio.h>

	struct add{
		int x,y;
	}p;
int main(){
	p.x=10;
	p.y=20;
	printf("%d   %d", p.x,p.y);
	return 0;
}
