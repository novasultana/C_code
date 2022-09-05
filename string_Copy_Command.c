#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i=0;

    printf("Enter the string you want to copy:");
   gets(s1);

   strcpy(s2,s1);

   printf("Copied string: %s",s2);

   return 0;

}
