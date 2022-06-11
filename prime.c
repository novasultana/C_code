#include<stdio.h>
int main()
{
    int x,c,i;
    printf("Enter Number: ");
    scanf("%d",&x);
    c=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            c++;
            break;
        }
    }
   if(c==0)
   {
       printf(" %d is Prime ",x);
   }
   else
    printf("%d is not prime",x);

   return 0;
}
