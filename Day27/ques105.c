#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct student s[100];
    int n = 0,choice,i,roll,found;
    do
    {
        printf("\n===== student record management system======\n");
        printf("1. Add student\n");
        printf("2. Display students\n");
        printf("3. Search student\n");
        printf("4. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter roll number");
            scanf("%s",&s[n].roll);
            printf("enter name");
            scanf("%s",s[n].name);
            printf("enter marks");
            scanf("%f",&s[n].marks);
            n++;
            printf("student record added successfully!\n");
            break;
            case 2:
            if(n== 0)
            {
                printf("no records found.\n");
            }
            else
            {
                printf("\nstudent records\n");
                printf("roll\tname\tmarks\n");
                for(i= 0;i<n;i++)
                {
                    printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
                }
            }
            break;
            case 3:
            if(n== 0)
            {
                printf("no records found.\n");
            }
            else
            {
                printf("enter roll number to search");
                scanf("%d",&roll);
                found= 0;
                for(i= 0;i<n;i++)
                {
                    if(s[i].roll== roll)
                    {
                        printf("\nstudent found\n");
                        printf("roll number%d\n",s[i].roll);
                        printf("name %s\n",s[i].name);
                        printf("marks %.2f\n",s[i].marks);
                        found= 1;
                        break;
                    }
                }
                if(found== 0)
                {
                    printf("student not found.\n");
                } 
            }
            break;
            case 4:
            printf("exiting program...\n");
            break;
            default:
            printf("invalid choice.\n");
        }
    }
    while(choice!= 4);
    return 0;
    
}