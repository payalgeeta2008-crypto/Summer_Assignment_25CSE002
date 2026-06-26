#include<stdio.h>
int main()
{
    int choice;
    float balance= 10000,amount;
    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. check balance\n");
        printf("2.deposit money\n");
        printf("3. withdraw money\n");
        printf("4. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Current Balancr= %.2f\n",balance);
            break;
            case 2:
            printf("enter amount to deposit");
            scanf("%f",&amount);
            balance += amount;
            printf("Deposit Successful!\n");
            break;
            case 3:
            printf("enter amount to withdraw");
            scanf("%f",&amount);
            if(amount<= balance)
            {
                balance-= amount;
                printf("Withdrawl Successful!\n");
            }
            else
            {
                printf("Insufficient Balance!\n");
            }
            break;
            case 4:
            printf("Thank You for using ATM.\n");
            break;
            default:
            printf("Invalid Choice!\n");
        }
    }
    while(choice!= 4);
    return 0;
    
}