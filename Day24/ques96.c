#include<stdio.h>
int main()
{   
        char str[100];
        int i,j,k;
        printf("enter a string");
        scanf("%s",str);
        for(i= 0;str[i]!='\0';i++)
        {
            for(j= i+1;str[j]!= '\0';j++)
            {
                if(str[i]== str[j])
                {
                    for(k=j;str[k]!= '\0';k++)
                    {
                        str[k]= str[k+1];
                    }
                    j--;
                }
            }
        }
        printf("string after removing duplicates%s\n",str);
        return 0;
}