#include<stdio.h>
#include<conio.h>
int main(){
    int a[50][50],b[50][50],c[50][50],i,j,r1,c1,r2,c2;
    printf("enter the value of the first row:");
    scanf("%d",&r1);
    printf("enter the value of the first column:");
    scanf("%d",&c1);
    printf("enter the value of the second row:");
    scanf("%d",&r2);
    printf("enter the value of the second cloumn:");
    scanf("%d",&c2);
    if(r1==r2 && c1==c2){
        printf("enter the elements of the matrix:\n");
        for ( i = 0; i < r1; i++)
        {
            for (j = 0;j< c1; j++)
            {
                scanf("%d",&a[i][j]);
            }
            
        }
         printf("enter the elements of the matrix:\n");
        for ( i = 0; i < r2; i++)
        {
            for (j = 0;j< c2; j++)
            {
                scanf("%d",&b[i][j]);
            }
            
        }
         printf("the elements of the first matrix are:\n");
        for ( i = 0; i < r1; i++)
        {
            for (j = 0;j< c1; j++)
            {
                printf("%d\t",a[i][j]);
            }
           printf("\n"); 
        }
         printf("the elements of the second matrix are:\n");
        for ( i = 0; i < r2; i++)
        {
            for (j = 0;j< c2; j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
            
        }
        printf("the addidion of the two matries are:\n");
        for ( i = 0; i < r1; i++)
        {
            for (j = 0;j< c1; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
            
        }
        for ( i = 0; i < r1; i++)
        {
            for (j = 0;j< c1; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        
    }
    else{
        printf("addition of the matrix cannot be done:");
    }
    return 0;
}