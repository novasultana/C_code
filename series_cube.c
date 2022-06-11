#include<stdio.h>
int main()
{
    int i=0,sum=0,n;
    printf("Enter number: ");
    scanf("%d",&n);

    while(i<n)
    {
        i=i+1;
    sum=sum+(i*i*i);
    }
        printf("sum: %d ",sum);



    return 0;
}
