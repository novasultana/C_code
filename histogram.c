#include<stdio.h>
#define size 5
int main()
{
    int n[size]={15,9,3,7,2};
    int i,j;

     printf("%s%13s%17s\n","Rating","Frequency","Histogram");

     for(i=0;i<size;i++)
     {
         printf("%7d%13d      ",i,n[i]);

         for(j=1;j<=n[i];j++)
         {
             printf("%c",'*');
         }
         printf("\n");
     }

     return 0;

}
