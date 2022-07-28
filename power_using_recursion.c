#include<stdio.h>
int integerPower(int base, int exp);
int main()
{

    int base,exp;
    printf("Input: ");
    scanf("%d %d", &base, &exp);
    printf("Output: %d", integerPower(base,exp));

}
int integerPower(int base, int exp)
{

    if (exp == 0)
    {
     return 1;
    }

    else
    {
      return base*integerPower(base,exp-1);

    }



}

