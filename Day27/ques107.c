#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    float basic,hra,da,gross;
};
int main()
{
    struct employee emp[100];
    int n= 0,choice,i,id,found;
    do
    {
        printf("\n===== salary management system=====\n");
        printf("1. add employee salary\n");
        printf("2. display salary details\n");
        printf("3. search employee salary\n");
        printf("4. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter employee ID");
            scanf("%d",&emp[n].id);
            printf("enter enployee name");
            scanf("%s",emp[n].name);
printf("enter basic salary");
scanf("%f",&emp[n].basic);
printf("enter DA");
scanf("%f",&emp[n].da);
emp[n].gross= emp[n].basic+ emp[n].hra+ emp[n].da;
n++;
printf("salary record added successfully!\n");
break;
case 2:
if(n== 0)
{
    printf("no salary records found.\n");
}
else
{
    printf("\n|D\tname\tbasic\tHRA\tDa\tgross\n");
    for(i= 0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",emp[i].id,emp[i].name,emp[i].basic,emp[i].da,emp[i].gross);
    }
}
break;
case 3:
printf("enter employee ID to search");
scanf("%d",&id);
found= 0;
for(i= 0;i<n;i++)
{
    if(emp[i].id== id)
    {
        printf("\nemployee salary details\n");
        printf("ID :%d\n",emp[i].id);
        printf("name :%s\n",emp[i].name);
        printf("basic salary: %.2f\n",emp[i].basic);
        printf("HRA: %.2f\n",emp[i].hra);
        printf("Da: %.2f\n",emp[i].da);
        printf("gross salary: %.2f\n",emp[i].gross);
        found= 1;
        break;
    }
}
if(found== 0)
{
    printf("employee not found\n");
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