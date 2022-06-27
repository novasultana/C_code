#include<stdio.h>
int main()
{
    int rows,space,i,j,t=1,k;
    printf("Enter Rows : ");
    scanf("%d",&rows);
    space=rows+4-1;
    for(i=1;i<=rows;i++)
    {
        for(k=space;k>=1;k--)
        {
                 printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",t++);

        }
        printf("\n");
        space--;

    }

}
