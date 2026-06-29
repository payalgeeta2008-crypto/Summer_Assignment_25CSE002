#include<stdio.h>
int main()
{
    int choice;
    float num1,num2,result;
    do
    {
printf("\n=====MENU DRIVEN CALCULATOR======\n");
printf("1. addition\n");
printf("2. substraction\n");
printf("3. multiplication\n");
printf("4. division\n");
printf("exit\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("enter two numbers");
    scanf("%f %f",&num1,&num2);
    result= num1+num2;
printf("result= %.2f\n",result);
break;
case 2:
printf("enter two numbers");
scanf("%f %f",&num1,&num2);
result= num1-num2;
printf("result = %.2f\n",result);
break;
case 3:
printf("enter two numbers");
scanf("%f %f",&num1,&num2);
result= num1*num2;
printf("result= %.2f\n",result);
break;
case 4:
printf("enter two numners");
scanf("%f %f",&num1,&num2);
if(num2!= 0)
{
    result= num1/num2;
    printf("result= %.2f\n",result);
}
else
{
    printf("division by zero is not possible.\n");
}
break;
case 5:
printf("thank you!\n");
break;
default:
printf("invalid choice!\n");
}
    }
    while(choice!= 5);
    return 0;
    }