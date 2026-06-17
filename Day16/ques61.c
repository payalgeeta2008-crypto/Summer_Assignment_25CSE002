#include<stdio.h>
int main()
{
    int arr[100],n,i,num,found= 0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i= 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter number to search");
    scanf("%d",&num);
    for(i= 0;i<n;i++)
    {
        if (arr[i]== num)
        {
            found= 1;
            printf("number found at position %d",i+1);
            break;
        }
    }
    if(found== 0)
    {
        printf("number not found");
    }
    return 0;
}