#include<stdio.h>
int main ()
{
    int n,temp,digit,sum =0;
    printf("emter a number");
    scanf("%d",&n);
    temp = n;
    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit * digit*digit;
        temp = temp /10; 
    }
    if(sum == n)
    printf("%d is an armstrong number",n);
    else
    printf("%d is not a armstrong number",n);
    return 0;
}