#include<stdio.h>
#include<string.h>
void concate(char s1[],char s2[]);
int main()
{
    char s1[100],s2[100];

    printf("Enter !st string: ");
    gets(s1);

    printf("Enter Second string: ");
    gets(s2);

    concate(s1,s2);
    printf("String concate \%s\ \n",s1);

    return 0;
}


void concate(char s1[],char s2[])
{
    int i,j;

        i=0;
        while(s1[i]!='\0')
        {
            i++;
        }
        j=0;

        while(s2[j]!='\0')
        {
            s1[i]=s2[j];
            j++;
            i++;
        }
        s1[i]='\0';


}
