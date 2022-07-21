#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b;
    srand(time(0));
    printf("Input 1/2/3/4/5/6: ");
    scanf("%d",&a);
    if(a>6 || a<0)
    {
        printf("Put valid number!");
    }
    else
    {
        printf("your number: %d\n",a);
        b=1+rand()%6;
        printf("Dice face: %d\n",b);
        if(a==b)
        {
            printf("You win!");
        }
        if(a!=b)
        {
            printf("You lose!");
        }
    }
    return 0;
}
