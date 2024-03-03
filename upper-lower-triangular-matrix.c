#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a[5][5],i,j,r,c,u[5]={0},l[5]={0};
    printf("enter the no. of the rows:");
    scanf("%d",&r);
    printf("enter the no. of the columns:");
    scanf("%d",&c);
    if (r==c)
    { 
        printf("enter the elements of the matrix:\n");
        for ( i = 0; i <r; i++)
        {
            for ( j = 0;j < c; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("the matrix is:\n");
        for ( i = 0; i <r; i++)
        {
            for ( j = 0;j < c; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("the elements of upper triangle are:\n");
        for ( i = 0; i <r; i++)
        {
            for ( j = 0;j < c; j++)
            {
                if (i!=j && i<j)
                {
                    u[i]=a[i][j];
                printf("%d\t",u[i]);
                }
            }
        }
         printf("\nthe elements of lower triangle are:\n");
        for ( i = 0; i <r; i++)
        {
            for ( j = 0;j < c; j++)
            {
                if (i!=j && i>j)
                {
                    l[i]=a[i][j];
                printf("%d\t",l[i]);
                }
            }
        }
    }
    else{
        printf("the upper triangular elements cannot be shown:");
    }
}