#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int a[50][50],i,j,k,b[50][50],r,c;
    printf("enter the no. of row:");
    scanf("%d",&r);
    printf("enter the no. of column:");
    scanf("%d",&c);
    printf("enter the value of scalar quantity:");
    scanf("%d",&k);
    printf("enter the elements of the matrix:\n");
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("the matrix is :\n");
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
    for ( j = 0; j < c; j++)
    {
        b[i][j]=k*a[i][j];
    }
}
printf("the product with scalar quantity is:\n");
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
}