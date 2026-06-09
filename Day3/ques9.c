#include <stdio.h>
int main()
{
    int start,end,i,j,flag;
    printf("enter the starting number");
    scanf("%d",&start);
    printf("enter ending number");
    scanf("%d",&end);
    printf("prime number are \n");
    for(i = start;i<= end;i++)
    {
        if(i <= 1)
        continue;
        flag = 1;
        for(j = 2;j<i;j++)
        {
            if(i % j ==0)
            {
                flag = 0;
                break;
            }
        }
       if(flag == 1)
       printf("%d",i); 
    }
    return 0;
}