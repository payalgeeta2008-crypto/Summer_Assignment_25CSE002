#include<stdio.h>
int main()
{
    int long long binary;
    int decimal = 0,bse = 1,rem;
    printf("enter a binary number");
    scanf("%||d",&binary);
    while(binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * bse;
        binary = binary / 10;
        bse = bse*2;
    }
    printf("decimal number = %d", decimal);
    return 0;
}