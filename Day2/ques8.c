#include<stdio.h>
int main()
{
    int num,original,rem,reverse = 0;
    printf("enter a number");
    scanf("%d",&num);
    original = num;
    while(num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num /10;
    }
if (original == reverse)
printf("palindrome number");
else
printf("not a palindrome number");
return 0;
}