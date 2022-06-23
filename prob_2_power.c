#include<stdio.h>
#include<math.h>
int main()
{
    int x,power,result=1;
    printf("Enter number:");
    scanf("%d",&x);
    printf("Enter power:");
    scanf("%d",&power);
   while(power!=0)
   {
       result=result*x;
       power--;

   }

    printf("Output:%d",result);

    return 0;
}
