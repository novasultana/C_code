#include<stdio.h>
void histogram(int arr1[], int n);
int main()
{
    int arr[999], i = 0, arr1[11] = {0};

    printf("Enter the Marks:(press -1 to stop)\n");
    while (arr[i - 1] != -1)
    {
        printf("Enter marks: %d  ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }
    for (int j = 0; j < i - 1; j++)
    {
        if (arr[j] == 100 )
        {
            ++arr1[0];
        }
        else if (arr[j] <= 99 && arr[j] >= 90)
        {
            ++arr1[1];
        }
        else if (arr[j] <= 89 && arr[j] >= 80)
        {
            ++arr1[2];
        }
        else if (arr[j] <= 79 && arr[j] >= 70)
        {
            ++arr1[3];
        }
        else if (arr[j] <= 69 && arr[j] >= 60)
        {
            ++arr1[4];
        }
        else if (arr[j] <= 59 && arr[j] >= 50)
        {
            ++arr1[5];
        }
        else if (arr[j] <= 49 && arr[j] >= 40)
        {
            ++arr1[6];
        }
        else if (arr[j] <= 39 && arr[j] >= 30)
        {
            ++arr1[7];
        }
        else if (arr[j] <= 29 && arr[j] >= 20)
        {
            ++arr1[8];
        }
        else if (arr[j] <= 19 && arr[j] >= 10)
        {
            ++arr1[9];
        }
        else if (arr[j] <= 9 && arr[j] >= 00)
        {
            ++arr1[10];
        }
    }

    printf("\nOverall Grade Distribution \n");

    printf("\n0-9   :");
    histogram(arr1,10);

    printf("\n10-19 :");
    histogram(arr1,9);

    printf("\n20-29 :");
    histogram(arr1,8);

    printf("\n30-39 :");
    histogram(arr1,7);

    printf("\n40-49 :");
    histogram(arr1,6);

    printf("\n50-59 :");
    histogram(arr1,5);

    printf("\n60-69 :");
    histogram(arr1,4);

    printf("\n70-79 :");
    histogram(arr1,3);

    printf("\n80-89 :");
    histogram(arr1,2);

    printf("\n90-99 :");
    histogram(arr1,1);

    printf("\n100   :");
    histogram(arr1,0);


    return 0;
}


void histogram(int arr1[], int n)
{
    if (arr1[n] == 0)
    {
        return;
    }
    else
    {
        for (int i = 1; i <= arr1[n]; i++)
        {
            printf("* ");
        }
    }
}
