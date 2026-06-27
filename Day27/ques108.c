#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    float m1,m2,m3,m4,m5;
    float total,percentage;
    char grade;
};
int main()
{
    struct student s;
    printf("===== marksheet generation system=====\n");
    printf("enter roll number");
    scanf("%d",&s.roll);
    printf("enter student name");
    scanf("%s",s.name);
    printf("enter marks of 5 subjects\n");
    printf("subject 1");
    scanf("%f",&s.m1);
    printf("subject 2");
    scanf("%f",&s.m2);
    printf("subject 3");
    scanf("%f",&s.m3);
    printf("subject 4");
    scanf("%f",&s.m4);
    printf("subject 5");
    scanf("%f",&s.m5);
    s.total= s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.percentage= s.total/5;
    if(s.percentage>= 90)
    s.grade='A';
    else if(s.percentage>= 80)
    s.grade= 'B';
    else if(s.percentage>= 70)
    s.grade= 'C';
    else if(s.percentage>= 60)
    s.grade= 'D';
    else if(s.percentage>=40)
    s.grade= 'E';
    else
    s.grade= 'F';
    printf("\n========== MARKSHEET==========\n");
    printf("roll no: %d\n,s.roll");
    printf("name: %s\n",s.name);
    printf("subject 1: %.2f\n",s.m1);
    printf("subject 2: %.2f\n",s.m2);
    printf("subject 3: %.2f\n",s.m3);
    printf("subject 4: %.2f\n",s.m4);
    printf("subject 5: %.2f\n",s.m5);
    printf("total marks: %.2f\n",s.total);
    printf("persentage: %.2f%%\n",s.percentage);
    printf("grade: %c\n",s.grade);
    if(s.percentage>= 40)
    printf("result: PASS\n");
    else
    printf("result: FAIL\n");
    return 0;
}