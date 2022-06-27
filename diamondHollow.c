#include<stdio.h>
int main()
{
    int rows,i,j,spc;
    printf("Enter rows: ");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
    {
        for(spc=1;spc<=rows-i;spc++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1||j==2*i-1)
            printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    for(i=rows-1;i>=1;i--)
    {
        for(spc=rows;spc>i;spc--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1||j==2*i-1)
            printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

}
