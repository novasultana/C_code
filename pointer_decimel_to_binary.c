#include<stdio.h>
#include<stdlib.h>
void decimalToBinary(int *n);
int main()
{
    int n;
    printf("Enter the number to convert: ");
    scanf("%d",&n);
    decimalToBinary(&n);
    return 0;
}
void decimalToBinary(int *n)
{
    long long bin = 0;
    int rem, i = 1;
    while (*n!=0)
    {
        rem = *n % 2;
        *n /= 2;
        bin=bin + rem * i;
        i *= 10;
    }
    printf("Converted Value: %d", bin);
}
