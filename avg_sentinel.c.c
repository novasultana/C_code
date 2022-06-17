#include<stdio.h>
int main()
{
    int num,sum=0,c=0;
    scanf("%d",&num);
    while(num!=-1)
    {

        sum=sum+num;
        c=c+1;
        scanf("%d",&num);
    }

    printf("avg: %.2f",(float)sum/c);
    return 0;
}
