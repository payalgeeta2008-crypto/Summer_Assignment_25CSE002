#include<stdio.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
};
int main()
{
    struct Book b[100];
    int n= 0,choice,id,i,found;
    do
    {
        printf("\n===== libraay management system======\n");
        printf("1. add book\n");
        printf("2. display books\n");
        printf("3. search book\n");
        printf("4. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter boook ID");
            scanf("%d",&b[n].id);
            printf("enter book title");
        scanf("%s",b[n].title);
        printf("enter author name");
    printf("%s",b[n].author);
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
    printf("\nbook records\n");
    printf("ID\tTitle\tAuthor\n");
    for(i= 0;i<n;i++)
    {
        printf("%d\t%s\t%s\n",b[i].id,b[i].title,b[i].author);
    }
}
break;
case 3:
printf("enter book ID to search");
scanf("%d",&id);
found = 0;
for(i= 0;i<n;i++);
{
    if(b[i].id== id)
    {
printf("\nbook found\n");
printf("book ID: %d\n",b[i].id);
printf("title: %S\n",b[i].title);
printf("author: %s\n",b[i].author);
found= 1;
break;
    }
    }
    if(found== 0)
    {
        printf("book not found.\n");
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