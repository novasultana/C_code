#include<stdio.h>
int main()
{

    int rows,i,j;
    printf("Enter number of Rows: ");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
