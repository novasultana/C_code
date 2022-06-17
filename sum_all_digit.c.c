#include<stdio.h>
int main()
{
    int n,numbers,sum=0,i=0;
    printf("How many numbers you want to Enter:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&numbers);
        sum=sum+numbers;
    }
    printf("Sum: %d",sum);
}
