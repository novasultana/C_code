#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;

    for(i=0;i<=10;i++)
    {
        printf("%d \n",1+rand()%6);
    }
    return 0;
}