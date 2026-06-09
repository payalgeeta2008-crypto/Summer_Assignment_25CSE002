#include<stdio.h>
int reverse = 0;
void reverseNumber(int n)
{
    if(n == 0)
    return;
    reverse = reverse * 10 +(n % 10);
reverseNumber(n / 10);
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    reverseNumber(n);
    printf("reversed number = %d",reverse);
    return 0;
}