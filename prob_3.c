#include <stdio.h>

int main()
{
    int i, num, sum=0 ;
    printf("Input N = ");
    scanf("%d", &num);

    for(i = 1; i <= num ; i++)
    {
        if(num%i == 0)
        {
            sum =sum+i;

        }
    }
    printf("\n");

    if(sum%num==0 )
    {
        printf("Output: %d is a Multiply PERFECT NUMBER \n", num);
    }
    else
    {
        printf("output: %d is NOT a multiply PERFECT NUMBER \n", num);
    }

    return 0;
}
