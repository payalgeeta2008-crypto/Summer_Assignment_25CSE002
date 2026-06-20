#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,sum;
    printf("enter number of rows and columns");
    scanf("%d%d",&r,&c);
    printf("enter matrix elements\n");
    for(i= 0;i<r;i++)
    {
for(j= 0;j<c;j++)
{
    scanf("%d",&a[i][j]);
}
    }
    printf("\nrow-wise sum\n");
    for(i= 0;i<r;i++)
    {
        sum= 0;
        for(j= 0;j<c;j++)
        {
            sum += a[i][j];
        }
        printf("sum of row %d=%d\n",i+1,sum);
    }
    return 0;
}