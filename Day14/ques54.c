#include<stdio.h>
int main()
{
    int arr[100],n,key,i,count= 0;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i= 0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("enter elements to find frequency");
    scanf("%d",&key);
    for(i= 0;i<n;i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }
    printf("frequency of %d = %d\n",key,count);
    return 0;
}
