#include<stdio.h>
int main()
{
    int arr[100],n,i,j,min,temp;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i= 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i= 0;i<n;i++)
    {
        min = i;
        for(j= i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        temp= arr[i];
        arr[i]= arr[min];
        arr[min]= temp;
    }
    printf("sorted array");
    for(i= 0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}