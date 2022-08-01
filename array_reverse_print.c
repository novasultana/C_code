#include<stdio.h>
int main()
{
    int x[100];
    int n,i,j;

    printf("Enter the size of array: \n");
    scanf("%d",&n);

    printf("Enter numbers: \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Output: ");

    for(int j=n-1;j>=0;j--)
    {
        printf("%d ",x[j]);
    }
    return 0;


    return 0;
}
