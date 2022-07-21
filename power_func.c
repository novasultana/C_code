#include<stdio.h>
int power(int b,int exp);
int main()
{
    int a,exp;
    printf("Enter input:(base,exponential)");
    scanf("%d%d",&a,&exp);

    power(a,exp);

}

int power(int b,int exp)
{
    int i,ans=b;
    for(i=1;i<exp;i++)
    {
        ans=ans*b;
    }
    printf("Output: %d",ans);
}
