#include<stdio.h>
int main()
{
    int start,end,n,temp,digit,sum;
    printf("enter starting number");
    scanf("%d",&start);
    printf("enter ending number");
    scanf("%d",&end);
    printf("armstrong numbers between %d and %d are \n",start,end);
    for(n = start;n<= end;n++)
    {
        temp = 0;
        sum = 0;
        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit*digit*digit;
            temp = temp / 10;
        }
        if(sum == n){
            printf("%d",n);

        }   
     }
     return 0;
}