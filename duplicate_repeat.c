#include <stdio.h>
#define SIZE 20

int main()
{
    int arrayList[SIZE] = { 0 };
    int i, tDupli, rDupli, value, count = 0;

    printf_s("Enter 20 numbers between 10 and 100: \n");

    for(i=0;i<= SIZE-1;i++)
    {
        rDupli=0;
        scanf("%d", &value);

        while (value<10 || value>100)
        {
            printf("Invalid Value. Re-Enter Value: ");
            scanf("%d", &value);
        }
        for(tDupli=0;tDupli<count;tDupli++)
        {
            if (value==arrayList[tDupli])
            {
                rDupli += 1;
                break;
            }
        }
        if (!rDupli)
        {
            arrayList[count++] = value;
        }
    }
    printf("Values that do not repeat are: ");
    for(i=0;i<SIZE && arrayList[i]!=0;i++)
    {
        printf("%4d ", arrayList[i]);
    }
    return 0;

}
