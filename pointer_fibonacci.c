#include<stdio.h>
int main()
{
    int n,t, t1 = 0, t2 = 1, temp = 0, i;
    printf("Enter a value: ");
    scanf("%d", &n);
    t=n;
    fibo(&n);
    printf("Fibonacci Term Number %d is %d",t,n);
}
int fibo(int *p)
{
    int i;
    int t1 = 0, t2 = 1, temp = 0;
    if(*p == 0 || *p == 1)
    {
        printf("%d", *p);
    }
    else
    {
        temp = t1 + t2;
        for (i = 1; i < *p; ++i)
        {
            t1 = t2;
            t2 = temp;
            temp = t1 + t2;
        }
        *p=t2;
    }
}
