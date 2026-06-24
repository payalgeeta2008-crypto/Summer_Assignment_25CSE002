#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],temp[200];
    printf("enter first string");
    scanf("%s",s1);
    printf("enter second string");
    scanf("%s",s2);
    if(strlen(s1)!= strlen(s2))
    {
        printf("not a rotation\n");
        return 0;
    }
    strcpy(temp,s1);
    strcat(temp,s1);
    if(strstr(temp,s2))
    printf("rotation of string\n");
    else
    printf("not a rotation\n");
    return 0;
}