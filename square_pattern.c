#include<stdio.h>
int main()
{
    int i,rows,j;
    printf("Enter rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {

        for(j=1;j<=rows;j++)
        {
            printf(" "); //space
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
