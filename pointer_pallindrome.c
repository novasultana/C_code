#include<stdio.h>
#include<string.h>
int palindrome(char *s);
int main()
{
    int i =0, j=0;
    char word[200];

    char s[200];
    gets(word);
    while(word[j] != '\0')
    {
        if(isalpha(word[j]))
        {
            s[i] = tolower(word[j]);
            i+=1;
        }
        j+=1;
    }
    printf("%s", palindrome(s)? "Palindrome" : "Not Palindrome");
}
int palindrome(char *s)
{
    int n = strlen(s)-1, i =0;
    while(i<n)
    {
        if(s[i] != s[n])
            return 0;
        i+=1;
        n-=1;
    }
    return 1;
}
