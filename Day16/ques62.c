#include<stdio.h>
int main()
{
    int arr[100],n,i,j;
    int maxfreq= 0,element= arr[0];
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i= 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i= 0;i<n;i++)
    {
        int freq= 1;
        for(j= i+1;j<n;j++)
        {
            if (arr[i]== arr[j])
            {
                freq++;
            }
        }
        if(freq>maxfreq)
        {
            maxfreq= freq;
            element= arr[i];
        }
    }
    printf("maximum frequency element= %d\n",element);
    printf("frequency = %d",maxfreq);
    return 0;
}