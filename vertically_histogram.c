#include<stdio.h>
#define size 6
int main()
{
   // int n[size]={2, 9 ,1 ,13, 5,11};
   // int i,j;

    int n[5],i,j,k;
    printf("Input! \n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&n[i]);
    }

     for( k = size; k >= 1; --k)
  {
    for(j=0;j <size;++j)
    {
      if( k <= n[j])
        printf("#");
      else
        printf(" ");
    }
    printf("\n");
  }
     return 0;

}

