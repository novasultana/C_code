#include<stdio.h>
void hello(int n);
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    hello(n);
}
hello(int n)
{
    int i=0;
    for(i=1;i<=n;i++)
    {
        printf("Hello World! \n");
    }
}

