#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int a[5][5],i,j,r,c,id=0;
    printf("enter the no. of rows:");
    scanf("%d",&r);
    printf("enter the no. of column:");
    scanf("%d",&c);
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
            if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
            {
                id=-1;
                break;
            }
        }
    }
    if (id==0)
    {
        printf("the entered matrix is identity matrix:");
    }
    else{
        printf("the enterd matrix is not identity matrix:");
    }
}