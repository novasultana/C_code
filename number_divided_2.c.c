#include<stdio.h>
int main()
{

    int num ,count=0;
    printf("Enter Number:");
    scanf("%d",&num);
    while(num>0&&num%2==0)
    {
        count++;
        num=num/2;
    }
  printf("Output:%d ",count);

  return 0;
}
