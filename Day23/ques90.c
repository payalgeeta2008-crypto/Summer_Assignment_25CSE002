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
    if(freq[(unsigned char)str[i]]== 2)
    {
        printf("first repeating character= %c\n",str[i]);
        return 0;
    }
}
printf("no repeating charcater found.\n");
return 0;
}