#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int r,c,i,j,det1,det2,det3,a[3][3];
    printf("enter the no. of row:");
    scanf("%d",&r);
    printf("enter the no. of column:");
    scanf("%d",&c);
    if (r==c)
    {
    printf("enter the elements of %d by %d matrix:\n",r,c);
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     //FOR FINDING DETERMINANT OF 2 BY 2 MATRIX
        if (r==2 && c==2)
        {
    printf("the element of the matrix are:\n");
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
            det2=a[0][0]*a[1][1]-a[1][0]*a[0][1];
        }

    }
     printf("the determinant of %d by %d matrix is:%d",r,c,det2);
    }

    //FOR FINDING DETERMINANT OF 3 BY 3 MATRIX
    else if(r==3 && c==3){
    printf("the element of the matrix are:\n");
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
            det3=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
        }

    }
    printf("the determinant of %d by %d matrix is: %d",r,c,det3);
    }
    // FOR FINDING THE DETERMINANT OF 1 BY 1 MATRIX
    else if(r==1 && c==1){
        printf("the element of the 1 by 1 matrix is:");
        for ( i = 0; i < r; i++)
        {
            for (j = 0; j< c; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        for ( i = 0; i < r; i++)
        {
            for (j = 0; j< c; j++)
            {
                det1=a[0][0];
            }
            
        }
       printf("the determinant of %d by %d is: %d",r,c,det1) ;
    }
    }
     else{
        printf("determinant cannot be determined:");
    }
    return 0;
}