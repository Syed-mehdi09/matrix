#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int a[5][5],i,j,r,c,sum=0;
    float n;
    printf("enter the no. of the rows:");
    scanf("%d",&r);
    printf("enter the no. of the columns:");
    scanf("%d",&c);
        printf("enter the elements of the matrix:\n");
        for ( i = 0; i <r ;i++)
        {
            for (j = 0; j< c; j++)
            {
                scanf("%d",&a[i][j]);
            }
            
        }
        printf("the matrix is:\n");
        for ( i = 0; i <r ; i++)
        {
            for (j = 0; j< c; j++)
            {
                printf("%d\t",a[i][j]);
            }
          printf("\n")  ;
        }
        for ( i = 0; i <r ;i++)
        {
            for (j = 0; j< c; j++)
            {
                sum=sum+(a[i][j]*a[i][j]);
                /*sum=a[0][0]*a[0][0]+a[0][1]*a[0][1]+a[0][2]*a[0][2]+
                a[1][0]*a[1][0]+a[1][1]*a[1][1]+a[1][2]*a[1][2]+
                a[2][0]*a[2][0]+a[2][1]*a[2][1]+a[2][2]*a[2][2];*/
            }
        }
        
        printf("the normal of the mtrix is:%f",sqrt(sum));
        
    
}