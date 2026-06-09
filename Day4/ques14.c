#include <stdio.h>
int main()
{
    int n, first = 0,second = 1,next;
    printf("enter n");
    scanf("%d",&n);
    if(n == 1)
    printf("Nth fibonacci term = %d",first);
    else if(n == 2)
    printf("Nth fibonacci term =m %d",second);
    else {
        for(int i = 3;i<= n;i++)
        {
        next = first + second;
        first = second;
        second = next;
        }
    printf("Nth fibonacci term = %d", second);
}
return 0;

}