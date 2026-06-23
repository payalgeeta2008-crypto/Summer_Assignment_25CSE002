#include<stdio.h>
int main()
{
    char str[100];
    int freq[256]= {0};
    int i, max= 0;
    char maxchar;
    printf("enter a string");
    scanf("%s",str);
    for(i= 0;str[i]!= '\0';i++)
    {
        freq[(unsigned char)str[i]]++;
        {
            max= freq[(unsigned char)str[i]];
            maxchar= str[i];
        }
    }
    printf("maximum occuring character= %c\n",maxchar);
    printf("frequency= %d",max);
    return 0;
}