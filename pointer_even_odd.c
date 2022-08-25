#include<stdio.h>
int a(int *num1);
int main()
{
    int num;
    int *num1;
    num1= &num;
    printf("Enter number: ");
    scanf("%d",num1);
    a(num1);
}
int a(int *num1)
{
    int rem= *num1 % 2;
    if(rem==0)
        printf("%d is even.\n", *num1);

    else
        printf("%d is odd.\n", *num1);
    return 0;
}
