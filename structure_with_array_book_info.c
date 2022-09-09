#include<stdio.h>
#include<stdlib.h>

struct book
{
    char title[100];
    char author[100];
    char subject[100];
    int bookid;

};
int main()
{
    int n, i;
    printf("Enter the amount of books: ");
    \
    scanf("%d", &n);

    struct book b[n];

    for(i=0; i<n; i++)
    {
        getc(stdin);
        printf("Enter book%d title: ", i+1);
        gets(b[i].title);
        printf("Enter book%d author: ", i+1);
        gets(b[i].author);
        printf("Enter book%d subject: ", i+1);
        gets(b[i].subject);
        printf("Enter book%d Book ID: ", i+1);
        scanf("%d", &b[i].bookid);
    }

    for(i=0; i<n; i++)
    {
        printf("\nBook%d title: %s\n", i+1, b[i].title);
        printf("Book%d author: %s\n", i+1, b[i].author);
        printf("Book%d subject: %s\n", i+1, b[i].subject);
        printf("Book%d Book ID: %d\n", i+1, b[i].bookid);
    }
}
