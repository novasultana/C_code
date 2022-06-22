#include<stdio.h>
int main()
{

    int x;
    printf("Input: ");
    scanf("%d",&x);
    if(x>=0)
    {
        printf("Output: %d",x);
    }
    else{
        printf("Output: %d",x*-1);
    }
    return 0;
}
