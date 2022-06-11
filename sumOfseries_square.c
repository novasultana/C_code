#include<stdio.h>
int main()
{
    int i=0,sum=0,n;
    printf("Enter Number: ");
    scanf("%d",&n);

    while(i<n)
    {
          i=i+1;
        sum=sum+(i*i);

    }
    printf("sum: %d ",sum);

    return 0;
}
