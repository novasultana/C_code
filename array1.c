#include<stdio.h>
int main()
{
    int x[5],i;
    printf("Input! \n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Output! \n");
    for(int j=0;j<=5;j++)
    {
        printf("%d ",x[j]);
    }
}
