#include<stdio.h>
findMax();
int main()
{
    findMax();
    findMin();

    return 0;

}

findMax()
{
    int a,b,c,max;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("Maximum number is: %d \n",max);
}

findMin()
{
    int a,b,c,min;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    printf("Minimum number is: %d ",min);
}

