#include<stdio.h>
struct contact
{
    int id;
    char name[50];
    char phone[15];
};
int main()
{
    struct contact c[100];
    int n= 0,choice,id,i,found;
    do
    {
        printf("\n===== contact management system=====\n");
        printf("1. add contain\n");
        printf("2. display contacts\n");
        printf("3. search contact\n");
        printf("4. delete contact\n");
        printf("5. exit\n");
        printf("enter your choice");
        scanf("d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter contacts ID");
            scanf("%d",&c[n],id);
            printf("enter name");
            scanf("%s",c[n].name);
            printf("enter phone number");
            scanf("%s",c[n].phone);
            n++;
            printf("contact added sucessfully!\n");
            break;
            case 2:
            if(n== 0)
            {
                printf("no contacts found.\n");
            }
            else
            {
                printf("\n|ID\tname\tphone number\n");
                for(i= 0;i<n;i++)
                {
                    printf("%d\t%s\t%s\n",c[i].id,c[i].name,c[i].phone);
                }
            }
            break;
            case 3:
            printf("enter contact ID to search");
            scanf("%d",&id);
            found= 0;
            for(i= 0;i<n;i++)
            {
                if(c[i].id== id)
                {
                    printf("\ncontact found\n");
                    printf("ID: %d\n",c[i].id);
                    printf("name: %s\n",c[i].name);
                    printf("phone: %s\n",c[i].phone);
                    found= 1;
                    break;
                }
            }
            if(found== 0)
            {
            printf("contact not found.\n");
            }
            break;
            case 4:
            printf("enter contact ID to delete");
            scanf("%d",&id);
            found= 0;
            for(i= 0;i<n;i++)
            {
            if(c[i].id== id)
            {
                int j;
                for(j= i;j<n;j++)
                {
                    c[j]= c[j+1];
                }
                n--;
                found= 1;
                printf("contacts deleted successfully!\n");
                break;
            }
            }
            if(found== 0)
            printf("contacts not found.\n");
            break;
            case 5:
            printf("thank you!\n");
            break;
            default:
            printf("invalid choice!\n");
        }
    }while(choice != 5);
    return 0;
    
}