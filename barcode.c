#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,sum1=0,mul=0,total=0,sum2=0,m,n,o,p,q,r,rem=0,ans;

    printf("Input: ");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
   /* m=a;
    n=b;
    o=c;
    p=d;
    q=e;
    r=f; */

    sum1=a+c+e;
    sum2=b+d;

    mul=(sum1*3)+sum2;

    total=mul-1;
    rem=total%10;
    ans=9-rem;

    printf("Output: %d ",ans);

    return 0;



}
