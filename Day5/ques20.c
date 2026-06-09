#include<stdio.h>
int main()
{
    int num,i,largest = 0,j,prime;
    printf("enter a number");
    scanf("%d",&num);
for(i = 2;i<= num;i++);
{
    if(num % i == 0)
    {
        prime = 1;
        for(j = 2;j = i;j++)
        {
            if(i%j == 0)
            {
                prime = 0;
                break;
            }
        }
     if(prime == 1)
     {
        largest = i;
     }
    }
}
printf("largest prime factor");
return 0;
}