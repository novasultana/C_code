#include<stdio.h>
int main()
{
    char n,L,R,U,D;
    char sum=0;
    scanf("%c",&n);
    while(n!='X')
    {
        switch(n)
        {
        case 'L' : sum=sum+10;
            break;
        case 'R' : sum=sum-8;
            break;
        case 'U' : sum=sum-3;
            break;
        case 'D' : sum=sum+5;
            break;
        }
         scanf("%c",&n);
    }
    printf("%d$",sum);
}
