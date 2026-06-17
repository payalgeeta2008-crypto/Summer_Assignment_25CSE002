#include<stdio.h>
int main()
{
    int arr[]= {1,4,45,6,10,8};
int n = sizeof(arr);
int sum = 16;
int found= 0;
for(int i= 0;i<n;i++)
{
    for (int j= 1;j<n;j++)
    {
        if(arr[j] + arr[j]== sum)
        {
            printf("pair found (%d,%d)\n",arr[i],arr[j]);
            found = 1;
            break;
        }
    }
    if (found)
    break;
}
if(!found)
printf("no pair found\n");
return 0;
}