#include<stdio.h>
int main()
{
    int x,i,factorial=1;
    printf("Input(Non Negative): ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        factorial=factorial*i;

    }
    printf("Factorial: %d",factorial);

    return 0;
}
