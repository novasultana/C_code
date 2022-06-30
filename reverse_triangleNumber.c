#include <stdio.h>
int main()
{
    int rows,i,j,k;
    printf("Enter Triangle of Numbers in Reverse Rows = ");
    scanf("%d", &rows);

    for ( i = 1; i <=rows ; i++)
    {
        for ( j = 1; j < i; j++)
        {
            printf(" ");
        }
        for ( k = i; k <= rows; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }


}




