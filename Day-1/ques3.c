#include<stdio.h>
int main()
{
    int n;
    long long fact =1;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Factorial of %d = %d||d",n,fact);
    return 0;
}