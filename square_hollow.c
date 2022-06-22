#include<stdio.h>
int main()
{
    int i,rows,j;
    printf("Enter rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
         printf("\n");

        for(j=1;j<=rows;j++)
        {

            if(i==1||i==rows||j==1||j==rows)
            {

                printf("*");
                printf(" ");
            }

            else{
                 printf("  "); //space
            }
        }


    }

    return 0;
}
