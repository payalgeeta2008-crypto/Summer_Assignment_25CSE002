#include<stdio.h>
#include<string.h>
int main()
{
    char str[200],longest[50];
    int i= 0,len= 0,maxlen= 0,start= 0,maxStart= 0;
printf("enter a sentence");
fgets(str,sizeof(str),stdin);
while(str[i]!= '\0')
{

    if(str[i]!= ' '&&str[i]!='\n')
    {
        len++;

    }
    else
    {
        if(len>maxlen)
        {
            maxlen= len;
            maxStart= start;
        }
        len= 0;
        start= i+1;
    }
    i++;
}
if(len>maxlen)
{
    maxlen= len;
    maxStart= start;
}
strncpy(longest,str+maxStart,maxlen);
longest[maxlen]='\0';
printf("longest word %s\n",longest);
printf("length %d\n",maxlen);
return 0;
}