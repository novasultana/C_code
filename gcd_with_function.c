#include<stdio.h>
int gcd(int a,int b);

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    gcd(a,b);
    lcm(a,b);
}

int gcd(int a,int b)
{
    int x,y,t,gcd;
    x=a;
    y=b;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;

    printf("GCD: %d \n",gcd);
}
int lcm(int a,int b)
{
    int x,y,t,lcm,gcd;
    x=a;
    y=b;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    lcm=(x*y)/gcd;

    printf("LCM :%d ",lcm);

}
