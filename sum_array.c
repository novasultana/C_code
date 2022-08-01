#include<stdio.h>
int main()
{
    int x[100];
    int n,i=0,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);




    printf("Enter Numbers: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);

    }
    for(i=0;i<=n;i++)
    {
         sum+=x[i];
    }
    printf("Sum is : %d",sum);

    return 0;
}
