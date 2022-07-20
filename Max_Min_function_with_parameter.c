#include<stdio.h>
void findMaxMin(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter Number: ");
    scanf("%d%d%d",&a,&b,&c);

    findMax(a,b,c);
    findMin(a,b,c);
    return 0;


}
void findMax(int a,int b,int c)
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

  printf("Maximum Number is: %d \n",max);
}
void findMin(int a,int b,int c)
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

  printf("Minimum Number is: %d",min);
}

