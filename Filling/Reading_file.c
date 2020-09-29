#include<stdio.h>
int main()
{
	
/*	FILE *fpr;
	char  c;
	//Reading
	fpr=fopen("F://Reading.txt","r");
	if(fpr == NULL){
		puts("Error file does not exist");
		exit(1);
	}
	
	while(1){
		c=fgetc(fpr);
		if(c==EOF)
			break;
		else
			printf("%c",c);
	}
	fclose(fpr);
	
	return 0;
}
*/

//Writing

	FILE *fpw;
	char c;
	fpw=fopen("F://Reading.txt","w+");//w+ to append text to existing content
	if(fpw==NULL){
		printf("File not present");
		exit(1);
	}
	printf("enter content");
	scanf("%c",&c);
	//fprintf(fpw,"%c",c);
	fputc(c,fpw);
	fclose(fpw);
	return 0;		
	}
