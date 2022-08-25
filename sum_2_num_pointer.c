#include <stdio.h>
int main()
{
   int n1, n2, *p, *q, sum;

   printf(" First number : ");
   scanf("%d", &n1);
   printf(" Second  number : ");
   scanf("%d", &n2);

   p = &n1;
   q = &n2;

   sum = *p + *q;

   printf(" The sum: %d\n\n",sum);

   return 0;
}
