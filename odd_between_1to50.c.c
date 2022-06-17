#include<stdio.h>
int main()
{
    int i=0;

    printf("The Odd numbers: \n");
    for(i=50;i>=1;i--)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
        }

    }
    return 0;
}
