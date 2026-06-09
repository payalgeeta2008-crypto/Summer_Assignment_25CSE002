#include<stdio.h>
int main()
{
    int num,rem,product;
    int products = 1;
    printf("enter a number");
    scanf("%d",&num);
    while (num != 0)
    {
        rem = num % 10;
        product = product*rem;
        num = num/10;
    }
printf("product of digits = %d",product);
return 0;
}