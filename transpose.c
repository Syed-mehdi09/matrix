#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a[5][5],b[5][5],i,j,r,c;
    printf("enter the no.  of row:");
    scanf("%d",&r);
    printf("enter the no.  of column:");
    scanf("%d",&c);
    printf("enter the elements of  the matrix:\n");
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the elements of the matrix are:\n");
     for ( i = 0; i < r; i++)
    {
        for (j= 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

     for ( i = 0; i < r; i++)
    {
        for (j= 0;j < c;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("the transpose of matrix is:\n");
     for ( i=0; i < r; i++)
    {
        for (j= 0;j < c;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
return 0;
}