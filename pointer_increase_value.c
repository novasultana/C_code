#include<stdio.h>
int increase(int *num1)
{
    *num1= *num1+1;
}
int main()
{
    int num,*num1,c;
    printf("Enter number: ");
    scanf("%d",&num);
    num1=num;
    increase(&num1);

   printf("Increased number: %d", num1);
   return 0;
}

