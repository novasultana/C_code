#include <stdio.h>
int main(void)
{
    int n;
    //printf("Enter a number (0 to exit): ");
    scanf("%d", &n);
    int min = n;
    int max=n;

    while (n != -1)
    {
        if (min > n)
        {
            min = n;
        }
        scanf("%d", &n);

        if (max < n)
        {
            max = n;
        }
    }
    printf("Output %d \n", max-min);

}
