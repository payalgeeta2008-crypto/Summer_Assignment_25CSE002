#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary[50];
};
int main()
{
    struct employee emp[100];
    int n= 0,choice,i,id,found;
    do
    {
    printf("\n===== employee management system======\n");
    printf("1. add employee\n");
    printf("2. display employees\n");
    printf("3. search employees\n");
    printf("4. exit\n");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter employee ID");
        scanf("%d",&emp[n].id);
        printf("emter employee name");
        scanf("%s",emp[n].name);
        printf("enter employee salary");
        scanf("%f",&emp[n].salary);
        n++;
        printf("employee record added successfully!\n");
        break;
        case 2:
        if(n== 0)
        {
            printf("no employee records found\n");
        }
        else
        {
            printf("\nemployee records\n");
            printf("ID\tname\tsalary\n");
            for(i= 0;i<n;i++)
            {
                printf("%d\t%s\t%.2f\n",emp[i].id,emp[i].name,emp[i].salary);
            }
        }
        break;
        case 3:
        printf("enter employee ID to search");
        scanf("%d",&id);
        found = 0;
        for(i= 0;i<n;i++)
        {
            if(emp[i].id== id)
            {
                printf("\nemployee found\n");
                printf("ID :%d\n",emp[i].id);
                printf("name :%s\n",emp[i].name);
                printf("salary :%.2f\n",emp[i].salary);
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
        printf("thank you!\n");
        break;
        default:
        printf("invalid choice!\n");
    }
    }
while(choice!= 4);
return 0;   
}