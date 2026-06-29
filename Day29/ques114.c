#include<stdio.h>
int main()
{
    int a[100],n,i,choice,key;
    int max,min,found;
    do
    {
        printf("\n====== array operstions menu======\n");
        printf("1. insert elements\n");
        printf("2. display array\n");
        printf("3. find maximum\n");
        printf("4. find minimum\n");
        printf("search elements\n");
        printf("6. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter number of elements");
            scanf("%d",&n);
            printf("enter %d elements\n",n);
            for(i= 0;i<n;i++);
            {
                scanf("%d",&a[i]);
            }
            break;
            case 2:
            printf("array elements\n");
            for(i= 0;i<n;i++)
            {
                printf("%d",a[i]);
            }
            printf("\n");
            break;
            case 3:
            max= a[0];
            for(i= 1;i<n;i++)
            {
                if(a[i]>max)
                max= a[i];
            }
            printf("maximum element= %d\n",max);
            break;
            case 4:
            min = a[0];
            for(i= 1;i<n;i++);
            {
            if(a[i]<min)
            min= a[i];
            }
            printf("minimum element= %d\n",min);
            break;
            case 5:
            printf("enter element to search");
            scanf("%d",&key);
            found= 0;
            for(i= 0;i<n;i++)
{
    if(a[i]== key)
    {
        printf("element found at position %d\n",i+1);
        found= 1;
        break;
    }
}
if(found== 0)
{
    printf("element not found.\n");
}
break;
case 6:
printf("thank you!\n");
break;
default:
printf("invalid choice!\n");
        }
    }
    while(choice!= 6);
    return 0;
}