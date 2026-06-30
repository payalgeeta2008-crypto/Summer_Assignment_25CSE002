#include<stdio.h>
#include<string.h>
int main()
{
    int choice,n= 0,i,found= 0;
    int bookid[100];
    char title[100][50];
    char author[100][50];
    do
    {
        printf("\n=====MINI LIBRARY SYSTEM=====\n");
        printf("1. add book\n");
        printf("2. display books\n");
        printf("3. search book\n");
        printf("4. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter book ID");
            scanf("%d",&bookid[n]);
            printf("enter book title");
            scanf("%[^\n]",title[n]);
            printf("enter author name");
            scanf("%[^\n]",author[n]);
            n++;
            printf("book added successfully.\n");
            break;
            case 2:
            if(n== 0)
            {
                printf("no books available.\n");
            }
            else
            {
                printf("\nID\ttitle\t\tauthor\n");
                printf("-----------------\n");
                for(i= 0;i<n;i++)
                {
                    printf("%d\t%s\t\t%s\n",bookid[i],title[i],author[i]);
                }
            }
            break;
            case 3:
            {
                char search[50];
                found= 0;
                printf("enter book title to search");
                scanf("%[^\n]",search);
                for(i= 0;i<n;i++)
                {
                    if(strcmp(title[i],search)== 0)
                    {
                        printf("\nbook found\n");
                        printf("book ID: %d\n",bookid[i]);
                        printf("title: %s\n",title[i]);
                        printf("author: %s\n",author[i]);
                        found= 1;
                        break;
                    }
                }
                if(found== 0)
                {
                    printf("book not found.\n");
                }
                break;
            }
            case 4:
            printf("exiting...\n");
            break;
            default:
            printf("invalid choice!\n");
        }
    }
    while(choice!= 4);
    return 0;
}