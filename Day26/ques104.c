#include<stdio.h>
int main()
{
    int answer,score= 0;
    printf("=====QUIZ APPLICATION=====\n");
    printf("\nQ1. what is the capital of india?\n");
    printf("1.mumbai\n2. delhi\n3. kolkata\n4. chennai\n");
    printf("enter your answer");
    scanf("%d",&answer);
    if(answer== 2)
    score++;
    printf("\nQ2. how many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("enter your answer");
    scanf("%d",&answer);
    if(answer == 3)
    score++;
    printf("\n===== RESULT =====\n");
    printf("your score = %d/5\n",score);
    return 0;
}