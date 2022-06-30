

#include <stdio.h>
int main()
{
    int i,f=1,num;
    float sum=0;

    printf("Input the number : ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {

        f=f*i;
        sum += 1.0/f;

    }

    printf("The sum the Factorial is: %f \n",sum);
}

