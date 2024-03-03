#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a[5][5],i,j,r,c,b=0,k=0,d[5][5];
    printf("enter the no. of rows:");
    scanf("%d",&r);
    printf("enter the no. of columns:");
    scanf("%d",&c);
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
        for ( j = 0; j < c; j++)
        {
           if (a[i][j]!=0)
           {
            b++;
           }
           
        }
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        { 
            if (a[i][j]!=0)
            {
            d[0][k]=i;
            d[1][k]=j;
            d[2][k]=a[i][j];
            k++;
            }
    }
}
printf("sparse matrix representation is:\n");
for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}