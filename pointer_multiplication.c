#include<stdio.h>
int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
    printf("Enter any two Number: ");
    scanf("%d%d", &num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    int multi = mul(&num1,&num2);
    printf("\n Multiplication of %d and %d is %d", *ptr1, *ptr2, multi);

    return 0;
}
int mul(int *num1,int *num2)
{
    int multi=*num1* *num2;
    return multi;
}
