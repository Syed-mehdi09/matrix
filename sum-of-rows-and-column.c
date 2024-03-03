#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a[5][5],i,j,r,c,sum1[5]={0},sum[5]={0};
    printf("enter the no. of the row:");
    scanf("%d",&r);
    printf("enter the no. of the column:");
    scanf("%d",&c);
    printf("enter the elements of the matrix:\n");
    for ( i = 0; i <r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for ( i = 0; i <r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i]=sum[i]+a[i][j];
            sum1[i]=sum1[i]+a[j][i];
        }
    } 
    
    printf("the matrix is :\n");
    for ( i = 0; i <r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("%d\t",sum[i]);
        printf("\n");
    }   
    printf("\n");
    for ( i = 0; i <r; i++)
    {
        for (j = 0; j < c; j++)
        {
            
        }
        printf("%d\t",sum1[i]);
    } 
    return 0;
}