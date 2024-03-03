#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a[5][5],i,j,r,c,b;
    printf("enter the no. of rows:");
    scanf("%d",&r);
    printf("enter the no. of columns:");
    scanf("%d",&c);
    if (r==c)
    {
    printf("enter the elements of the matrix:\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < r; i++)
    {
        b=a[i][i];
        a[i][i]=a[i][r-i-1];
        a[i][r-i-1]=b;
    }
    printf("after interchanging the diagonals:\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    }
    else("the interchange of the diagonal cannot be done :");
    
}