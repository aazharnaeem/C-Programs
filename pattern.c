#include <stdio.h>

int main()
{
    int i,j,k,m,rows;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    int ch=65;

    for(i=1; i<=rows; i++){
            for(j=rows; j>=i; j--){
            printf(" ");
            }
            for(k=1; k<=i; k++){
            printf("%c",ch++);
              }
            ch--;

            for(m=1; m<i; m++){
                printf("%c",--ch);
            }
            printf("\n");
    }
    for(i=1; i<=rows; i++){
            for(j=rows; j>=i; j--){
            printf(" ");
            }
            for(k=1; k<=i; k++){
            printf("%c",ch++);
              }
            ch--;

            for(m=1; m<i; m++){
                printf("%c",--ch);
            }
            printf("\n");
    }
    return 0;
}
