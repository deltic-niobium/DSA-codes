#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r1,c1,r2,c2,i,j,k,r3,c3;
    printf("Enter no. of rows and columns for both matrices\n");
    scanf("%d%d%d%d", &r1,&c1,&r2,&c2);
    int **m1, **m2, **m3;
    r3=r1;
    c3=c2;
    if(c1!=r2)
        printf("Matrix multiplication not possible");
    else
    {
        m1 = (int**)malloc(r1*sizeof(int*));
        m2 = (int**)malloc(r2*sizeof(int*));
        for( i =0;i<r1;i++)
            *(m1+i) = (int*)malloc(c1*sizeof(int));
        for( i =0;i<r2;i++)
            *(m2+i) = (int*)malloc(c2*sizeof(int));
        printf("Enter %d elements\n", r1*c1);
        for( i=0;i<r1;i++)
            for( j=0;j<c1;j++)
            {
                int n;
                scanf("%d",&m1[i][j]);
            }
        printf("Enter %d elements\n", r2*c2);
        for( i=0;i<r2;i++)
            for( j=0;j<c2;j++)
            {
                int n;
                scanf("%d",&m2[i][j]);
            }
        m3 = (int**)malloc(r3*sizeof(int*));
        for(i=0; i<r3; i++)
            *(m3+i) = (int*)malloc(c3*sizeof(int));
        for( i=0;i<r3;i++)
            for( j=0;j<c3;j++)
                for( k=0;k<r2;k++)
                {
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
        printf("Multiplication of both the matrices is: \n");
        for( i=0;i<r3;i++)
        {
            for( j=0;j<c3;j++)
                printf("%d ",m3[i][j]);
        printf("\n");
        }
    }
    return 0;
}