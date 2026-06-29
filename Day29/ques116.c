#include<stdio.h>
struct product
{
    int id;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    struct product p[100];
    int n= 0,choice,i,id,found;
    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM=====\n");
        printf("1. add product\n");
        printf("2. display products\n");
        printf("3. sesrch products\n");
        printf("4. update quantity\n");
        printf("5. exit\n");
        printf("enter your choice");
        switch(choice)
        {
            case 1:
            printf("enter product ID");
            scanf("%d",&p[n].id);
            printf("enter product name");
            scanf("%[^\n]",p[n].quantity);
            printf("enter price");
            scanf("%f",&p[n].price);
            n++;
            printf("product added successfully!\n");
            break;
            case 2:
            if(n== 0)
            {
                printf("no products available!\n");
            }
            else
            {
                printf("\nID\tname\t\tquantity\tprice\n");
                for(i= 0;i<n;i++)
                {
                    printf("%d\t%s\t\t%d\t\t%.2f\n",p[i].id,p[i].name,p[i].quantity,p[i].price);
                }
            }
            break;
            case 3:
            printf("enter product ID to sesrch");
            scanf("%d",&id);
            found= 0;
            for(i= 0;i<n;i++)
            {
                if(p[i].id== id)
                {
                    printf("\nproduct found\n");
                    printf("ID:  %d\n",p[i].id);
                    printf("name:  %s\n",p[i].name);
                    printf("quantity: %d\n",p[i].quantity);
                    printf("price: %.2f\n",p[i].price);
                    found= 1;
                    break;
                }
            }
            if(found== 0)
            printf("product not found!\n");
            break;
            case 4:
            printf("enter product ID");
            scanf("%d",&id);
            found= 0;
            for(i= 0;i<n;i++)
            {
                if(p[i].id== id)
                {
                    printf("enter new quantity");
                    scanf("%d",&p[i].quantity);
                    printf("quantity updated successfully!\n");
                    found=1;
                    break;
                }
            }
            if(found== 0)
            printf("product not found!\n");
            break;
            case 5:
            printf("exiting program...\n");
            break;
            default:
            printf("invalid choice!\n");
        }
    }
    while(choice != 5);
    return 0;
}