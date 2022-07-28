#include<stdio.h>

int main()
{

    int arr[9] = {8,3,8,5,4,3,4,3,5}, i,j,count;

    printf("The given array is : ");

    for(i =0; i<9; i+=1)
    {
        printf("%d ", arr[i]);

    }

    printf("\nThe element odd number of times is : ");

    for(i = 0; i < 9; i+=1)
    {

        count = 0;

        for(j = 0; j < 9; j+=1)
        {

            if (arr[i] == arr[j])

                count+=1;

        }

        if (count % 2 != 0)
        {

            printf("%d", arr[i]);

            return 0;

        }

    }

}
