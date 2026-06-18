#include<stdio.h>
int main()
{
    int arr[100],n,i;
    int key,low,high,mid,found= 0;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter sorted elements\n");
    for(i= 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter elements to search");
    scanf("%d",&key);
    low= 0;
    high= n-1;
    while(low<= high)
    {
        mid= (low + high)/2;
        if(arr[mid]== key)
        {
            found= 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(found)
    printf("element found at position %d",mid +1);
    else
    printf("elements not found");
    return 0;
}