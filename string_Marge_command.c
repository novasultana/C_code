#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    printf("Enter string 1: ");
    gets(s1);

    printf("Enter string 2: ");
    gets(s2);

    strcat(s1,s2);

    printf("After concatenition %s",s1);

    return 0;
}


