#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a[5][5],i,j,sum1=0,sum2=0,r,c;
    printf("enter the no. of rows:");
    scanf("%d",&r);
    printf("enter the no. of column:");
    scanf("%d",&c);
    if (r==c)
    {
    printf("enter the elements of the matrix:\n");
    for ( i = 0; i < r; i++)
    {
        for (j = 0;j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("the matrix is:\n");
    for ( i = 0; i < r; i++)
    {
        for (j = 0;j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
       printf("\n") ;
    }
    //FOR THE SUM OF THE MAJOR DIAGONAL
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if(i==j){
                sum1=sum1+a[i][j];
            }
           
        }
    }
    //FOR THE SUM OF MINOR DIAGONAL
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(r==2 && c==2){
                if(i+j==1){
                    sum2=sum2+a[i][j];
                }
            }
            else if(r==3 && c==3)
            {
                if(i+j==2)
                {
                    sum2=sum2+a[i][j];
                }
            }
            else if(r==4 && c==4)
            {
                if(i+j==3)
                {
                    sum2=sum2+a[i][j];
                }
            }
            else if(r==5 && c==5)
            {
                if(i+j==4)
                {
                    sum2=sum2+a[i][j];
                }
            }
        }
        
    }
    
    printf("the sum of the major diagonal is :%d",sum1);
    printf("\nthe sum of the minor diagonal is :%d",sum2);
    }
    else{
        printf("the sum of diagonal cannot be done:");
    }
    return 0;
}
