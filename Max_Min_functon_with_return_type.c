#include<stdio.h>
 int MaxMin(int a,int b);
int main()
{
    int a,b,c,p,max;
    printf("Enter Two Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("Maximum Number is: %d \n",Max(a,b,c));
     printf("Maximum Number is: %d",Min(a,b,c));
    return 0;

}
 Max(int a,int b,int c)
{
int max;
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }

    return max;
}

Min(int a,int b,int c)
{
int min;
    min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }

    return min;
}
