#include<stdio.h>
void split(int x);
int main()
{
    int n;
    scanf("%d", &n);
    split(n);

    return 0;
}
void split(int x)
{
    int rev=0,a,y;
    while (x != 0)
    {
        y = x % 10;
        x /= 10;
        rev = rev * 10 + y;
    }

    while(rev !=0)
    {
        a = rev%10;
        rev/=10;
        printf("%d ", a);
    }
}
