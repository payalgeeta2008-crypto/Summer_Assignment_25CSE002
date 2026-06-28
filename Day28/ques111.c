#include<stdio.h>
struct ticket
{
    int ticketNo;
    char name[50];
    int seats;
};
int main()
{
    struct ticket t[100];
    int n= 0,choice,ticketNo,i,found;
    do
    {
        printf("\n===== ticket booking system=====\n");
        printf("1. book ticket\n");
        printf("2. display tickets\n");
    printf("3. search tickets\n");
    printf("4. cancel ticket\n");
    printf("5. exit\n");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter ticket number");
        scanf("%d",&t[n].ticketNo);
        printf("enter passenger name");
        scanf("%s",t[n].name);
        printf("enter number of seats");
        scanf("%d",&t[n].seats);
        n++;
        printf("ticket booked successfully!\n");
        break;
        case 2:
        if(n== 0)
        {
            printf("\nticketNo\tname\tseats\n");
            for(i= 0;i<n;i++)
            {
                printf("%d\t\t%s\t%d\n",t[i].ticketNo,t[i].name,t[i].seats);
            }
        }
        break;
case 3:
printf("enter ticket number");
scanf("%d",&ticketNo);
found= 0;
for(i= 0;i<n;i++)
{
    if(t[i].ticketNo== ticketNo)
    {
        printf("\nticket found\n");
        printf("ticket No: %d\n",t[i].ticketNo);
        printf("name: %s\n",t[i].name);
        printf("seats: %d\n",t[i].seats);
        found= 1;
        break;
    }
}
if(found== 0)
printf("ticket not found.\n");
break;
case 4:
printf("enter ticket number to cancel");
scanf("%d",&ticketNo);
found= 0;
for(i= 0;i<n;i++)
{
    if(t[i].ticketNo== ticketNo)
    {
        int j;
        for(j= i;j<n-1;j++)
        {
            t[j]= t[j+1];
        }
        n--;
        found= 1;
        printf("ticket cancelled successfully!\n");
        break;
    }
}
if(found== 0)
printf("ticket not found.\n");
break;
case 5:
printf("thank you!\n");
break;
default:
printf("invalid choice!\n");
    }
    }
    while(choice!= 5);
    return 0;
    
}