#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a[50][50],b[50][50],i,j,r,c,sym=1;
    printf("enter the no.  of row:");
    scanf("%d",&r);
    printf("enter the no.  of column:");
    scanf("%d",&c);
    printf("enter the elements of  the matrix:\n");
    for ( i = 0; i < r; i++)
    {
        for (j= 0; j < c; j++)
        {
            scanf("%d\t",&a[i][j]);
        }
    }
    printf("the elements of the matrix are:\n");
     for ( i = 0; i < r; i++)
    {
        for (j= 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

 for ( i = 0; i < r; i++)
    {
        for (j= 0;j < c;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("the transpose of matrix is:\n");
 for ( i=0; i < r; i++)
    {
        for (j= 0;j < c;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for ( i=0; i < r; i++)
    {
        for (j= 0;j < c;j++)
        {
            if (a[i][j]!=b[i][j])
            {
             sym++;
             break;   
            }
        }
    }
if (sym==1)
{
    printf("the given matrix is symmetric:");
}
else{
    printf("the given matrix is not symmetric:");
}
return 0;
}