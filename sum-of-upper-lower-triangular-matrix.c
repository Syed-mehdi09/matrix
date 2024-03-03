#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a[5][5],i,j,r,c,sum=0,sum1=0;
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
        //FOR THE SUM OF THE ELMENTS OF THE UPPER TRIANGULAR MATRIX
        printf("the sum of elements of upper triangular matrix is:\n");
        for ( i = 0; i <r; i++)
        {
            for ( j = 0;j < c; j++)
            {
                if (i!=j && i<j)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("%d\t",sum);
        //FOR THE SUM OF THE LOWER TRIANGULAR MATRIX
        printf("\nthe sum of elements of lower triangular matrix is:\n");
        for ( i = 0; i <r; i++)
        {
            for ( j = 0;j < c; j++)
            {
                if (i!=j && i>j)
                {
                    sum1=sum1+a[i][j];
                }
            }
        }
    printf("%d\t",sum1);
    }
    else{
        printf("the upper triangular elements cannot be shown:");
    }
}