//series: 1/1!+1/2!+1/3!.....

#include<stdio.h>
int main()
{

    int x,factorial=1;
    float sum=0,i=1;
    printf("Enter number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        factorial=factorial*i;
        sum=sum+(i/factorial);

    }
      printf("%f",sum);



}
