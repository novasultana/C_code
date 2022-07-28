#include<stdio.h>
int sumOfRange(int);

int main()

{

    int num;

    int sum;

    printf("Input: ");

    scanf("%d", &num);

    sum = sumOfRange(num);

    printf("Output 1 to %d : %d\n\n", num, sum);

    return (0);

}

int sumOfRange(int num)

{

    int result;

    if (num == 1)

    {

        return (1);

    }
    else

    {

        result = num + sumOfRange(num - 1);

    }

    return (result);

}
