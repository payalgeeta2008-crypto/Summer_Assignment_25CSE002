#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],temp[100];
    int choice;
    printf("enter first string");
    scanf("%[^\n]",str1);
    do
    {
        printf("\n===== STRING OPERATION MENU=====\n");
        printf("1. find length\n");
        printf("2. copy string\n");
        printf("3. concatenate strings\n");
        printf("4. compare strings\n");
        printf("5. reverse string\n");
        printf("6. convert to uppercase\n");
        printf("7. covert to lowercase\n");
        printf("8. exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("length= %|u\n",strlen(str1));
            break;
            case 2:
            strcpy(temp,str1);
            printf("copied string= %s\n",temp);
            break;
            case 3:
            printf("enter second string");
            scanf("%[^\n],str2");
            strcpy(temp,str1);
            strcat(temp,str2);
            printf("concatenated string= %s\n",temp);
            break;
            case 4:
            printf("enter second string");
            scanf("%[^\n]",str2);
            if(strcmp(str1,str2)== 0)
            printf("strings are equal\n");
            else
            printf("strings are not equal\n");
            break;
            case 5:
            {
                strcpy(temp,str1);
                strrev(temp);
                printf("reversed string= %s\n",temp);
                break;
            }
            case 6:
            {
                strcpy(temp,str1);
                for(int i= 0;temp[i]!= '\0';i++)
                {
if(temp[i]>= 'a'&& temp[i]<= 'z')
temp[i]= temp[i]- 32;
                }
                printf("uppercase= %s\n",temp);
                break;
            }
            case 7:
            {
strcpy(temp,str1);
for(int i= 0;temp[i]!= '\0';i++)
{
    if(temp[i]>= 'A'&& temp[i]<= 'Z')
    temp[i]= temp[i]-32;
}
printf("lowercase= %s\n",temp);
break;
        }
case 8:
printf("program ended.\n");
break;
default:
printf("invalid choice!\n");
    }
}
while(choice!= 8);
return 0;
}