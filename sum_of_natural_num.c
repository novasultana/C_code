#include<stdio.h>
int main()
{
    int n;
    printf("Enter range of number you want sum : ");
    scanf("%d",&n);

    printf("the sum is %d",sum(n));
}
int sum(int n)
{
    int i,sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
