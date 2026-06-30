#include<stdio.h>
#include<string.h>
int main()
{
    int choice,n= 0,i,roll,found= 0;
    int rollNo[100];
    char name[100][50];
    float marks[100];
    do
    {
        printf("\n====== STUDENT RECORD SYSTEM=====\n");
        printf("1. add student\n");
        printf("2. display students\n");
        printf("3. search student\n");
        printf("4. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter roll number");
            scanf("%d",&rollNo[n]);
            printf("enter name");
            scanf("%[^\n]",name[n]);
            printf("enter marks");
            scanf("%f",&marks[n]);
            n++;
            printf("student record added successfully.\n");
            break;
            case 2:
            if(n== 0)
            {
                printf("no records found.\n");
            }
            else
            {
                printf("\nroll\tname\t\tmarks\n");
                printf("---------------\n");
                for(i= 0;i<n;i++)
                {
                    printf("%d\t%s\t\t%.2f\n",rollNo[i],name[i],marks[i]);
                }
            }
            break;
            case 3:
            found= 0;
            printf("enter roll number to search");
            scanf("%d",&roll);
            for(i= 0;i<n;i++)
        {
            if(rollNo[i]== roll)
            {
                printf("\nstudent found\n");
                printf("roll number: %d\n",rollNo[i]);
                printf("roll number: %s\n",name[i]);
                printf("marks: %.2f\n",marks[i]);
                found= 1;
                break;
            }
        }
        if(found== 0);
        {
            printf("student not found\n");
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