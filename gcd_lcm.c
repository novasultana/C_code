#include<stdio.h>
int main()
{
    int x,y,t,i=1,a,b,gcd,lcm;
    printf("Enter numbers: ");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("GCD :%d \n",gcd);
    printf("LCM :%d ",lcm);

    return 0;
}
