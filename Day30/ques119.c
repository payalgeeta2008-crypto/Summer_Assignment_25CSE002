#include<stdio.h>
#include<string.h>
int main()
{
    int choice,n= 0,i,id,found= 0;
    int empid[100];
    char empname[100][50];
    float salary[100];
    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM=====\n");
        printf("1. add employee\n");
        printf("2. display employees\n");
        printf("3. search employee\n");
        printf("4. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter employee ID");
            scanf("%d",&empid[n]);
            printf("enter employee name");
            scanf("%[^\n]",empname[n]);
            printf("enter salary");
            scanf("%f",&salary[n]);
            n++;
            case 2:
            if(n== 0)
            {
                printf("no employee records found.\n");
            }
            else
            {
                printf("\nID\tname\t\tsalary\n");
                printf("-------------------\n");
                for(i= 0;i<n;i++)
                {
                    printf("%d\t%s\t\t%.2f\n",empid[i],empname[i],salary[i]);
                }
            }
            break;
            case 3:
            found= 0;
            printf("enter employee ID to search");
            scanf("%d",&id);
            for(i= 0;i<n;i++)
            {
                if(empid[i]== id)
                {
                    printf("\nemployee found\n");
                    printf("ID: %d\n",empid[i]);
                    printf("name: %s\n",empname[i]);
                    printf("salary: %.2f\n",salary[i]);
                    found= 1;
                    break;
                }
            }
            if(found== 0)
            {
                printf("employee not found.\n");
            }
            break;
            case 4:
            printf("exiting program...\n");
            break;
            default:
            printf("invalid choice!\n");
        }
    }
    while(choice!= 4);
    return 0;
}