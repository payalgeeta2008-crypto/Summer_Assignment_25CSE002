#include<stdio.h>
int main()
{
    int a[10][10],n,i,j;
    int sum = 0;
    printf("enter the order of square matrix");
    scanf("%d",&n);
    printf("enter matrix elements\n");
    for(i= 0;i<n;i++)
    {
        for(j= 0;j<n;j++)
        {
            scanf("%d",&a[i][i]);
        }
    }
    for(i= 0;i<n;i++)
    {
        sum += a[i][i];
    }
    printf("sum of diagonal = %d\n",sum);
return 0;
}