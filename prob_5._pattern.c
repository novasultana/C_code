#include<stdio.h>
int main()
{
  int row,space,star,n;
  printf("Enter Number of Rows: ");
  scanf("%d",&n);
  for(int row=1; row<=n; row++)
  {
     for(int space=row; space<=n; space++)
     {
       printf(" ");
     }
     for(int star=1; star<=2*row-1; star++)
     {
       if(star==1 || star==(2*row-1)) printf("*");
       else printf(" ");
     }
     printf("\n");
  }

  for(int row=n-1; row>=1; row--)
  {
     for(int space=n; space>=row; space--)
     {
       printf(" ");
     }
     for(int star=1; star<=2*row-1; star++)
     {
       if(star==1 || star==2*row-1) printf("*");
       else printf(" ");
     }
     printf("\n");
  }

  return 0;
}
