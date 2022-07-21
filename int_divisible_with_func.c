
#include <stdio.h>
void result(int x,int y);
int main()
{
    int a,b;
    printf("Input: ");
    scanf("%d%d",&a,&b);
    result(a,b);
    return 0;
}
void result(int x,int y)
{
    int count;
    if(y>x)
    {
        for (int num = x; num <=y; num++)
        {
            if (num % 5 == 0 && num % 7 == 0)
                count++;
        }
    }
    if(x>y)
    {
        for (int num = y; num <=x; num++)
        {
            if (num % 5 == 0 && num % 7 == 0)
                count++;
        }
    }
    printf("Outout: %d ",count);
}
