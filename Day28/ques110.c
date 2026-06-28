#include<stdio.h>
struct account{
    int accNo;
    char name[50];
    float balance;
};
int main()
{
    struct account a[100];
    int n= 0,choice,accNo,i,found;
    float amount;
    do
{
    printf("\n=====bank account management system=====\n");
    printf("1. create account\n");
    printf("2. deposit money\n");
    printf("3. withdraw money\n");
    printf("4. display account\n");
    printf("5. search account\n");
    printf("6. exit\n");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter account number\n");
        scanf("%d",&a[n].accNo);
        printf("enter account holder name");
        scanf("%s",a[n].name);
        printf("enter initial balance");
        scanf("%d",&a[n].balance);
        n++;
        printf("account created successfully!\n");
        break;
        case 2:
        printf("enter account number");
        scanf("%d",&accNo);
        found= 0;
        for(i= 0;i<n;i++)
        {
            if(a[i].accNo == accNo)
            {
                printf("enter deposit amount");
                scanf("%f",&amount);
                a[i].balance+= amount;
                printf("deposit successful.\n");
                printf("current balance = %.2f\n",a[i].balance);
                found= 1;
                break;
            }
        }
        if(found= 0)
        printf("account not found.\n");
        break;
        case 3:
        printf("enter account number");
        scanf("%d",accNo);
        found= 0;
        for(i= 0;i<n;i++)
        {
            if(a[i],accNo== accNo)
            {
                printf("enter withdraw amount");
                scanf("%f",&amount);
                if(amount<= a[i].balance)
                {
                    a[i].balance -= amount;
                    printf("withdrawl successful.\n");
                    printf("current balance= %.2f\n",a[i].balance);
                }
                else
                {
                    printf("insyfficient balance.\n");
                }
                found= 1;
                break;
            }
        }
        case 4:
        if(n== 0)
        {
            printf("no account available.\n");
        }
        else
        {
            printf("\nAcc no\tname\tbalance\n");
            for(i= 0;i<n;i++)
            {
                printf("%d\t%s\t%.2f\n",a[i].accNo,a[i].name,a[i].balance);
            }
        }
        break;
        case 5:
        printf("enter account number");
        scanf("%d",&accNo);
        found= 0;
        for(i= 0;i<n;i++)
        {
            if(a[i].accNo== accNo)
            {
                printf("\naccount found\n");
                printf("account number: %d\n",a[i].accNo);
                printf("name: %s\n",a[i].name);
                printf("balance: %.2f\n",a[i].balance);
                found= 1;
                break;
            }
        }
        if(found== 0)
        printf("account not found.\n");
        break;
        case 6:
        printf("thank you!\n");
        break;
        default:
        printf("invalid choice!\n");
    }
}
while(choice!= 6);
return 0;
    
}