#include<stdio.h>
#include<string.h>
int roll[100],total= 0;
char name[100][50];
float marks[100];
void addstudent()
{
    printf("add student function\n");
}
void displaystudents()
{
    printf("display students function\n");
}
void searchstudents()
{
    printf("search students function\n");
}
void updatestudent()
{
    printf("update student function\n");
}
void deletestudent()
{
    printf("delete student function\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM=====\n");
        printf("1. add student\n");
        printf("2. display students\n");
        printf("3. search student\n");
        printf("4. update student\n");
        printf("5. delete student\n");
        printf("6. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            addstudent();
            break;
            case 2:
            displaystudents();
            break;
            case 3:
            searchstudents();
            break;
            case 4:
            updatestudent();
            break;
            case 5:
            deletestudent();
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
