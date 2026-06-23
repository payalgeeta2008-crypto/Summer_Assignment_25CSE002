#include<stdio.h>
int main()
{
    char str[100];
    int freq[256]= {0};
    int i;
    printf("enter a string");
    scanf("%s",str);
    for(i= 0;str[i]!= '\0';i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    for(i= 0;str[i]!= '\0';i++)
    {
        if(freq[(unsigned char)str[i]]== 1)
        {
            printf("first non- repeating character = %c\n",str[i]);
            return 0;
        }
    }
    printf("no non- repeating character found.\n");
    return 0;
}