#include<stdio.h>
int main()
{

    int x,i,factorial=1;
    float sum=0;
    printf("Enter number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        factorial=factorial*i;
         sum=sum+(1.0/factorial);

    }
    printf("%f",sum);
}
