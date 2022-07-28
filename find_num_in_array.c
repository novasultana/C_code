#include<stdio.h>
#include<stdlib.h>
int main()
{

    int arr[50],i,j, found =0;
    srand(time(0));
    for(i =0; i<50; i+=1)
    {
        arr[i] = 1+rand()%50;

    }

    printf("Random array: ");

    for(i =0; i<50; i+=1)
    {
        printf("%d ", arr[i]);

    }

    printf("\n");

    while(i!=-1)
    {
        scanf("%d", &i);

        for(j =0; j<50; j+=1)
        {

            if (i == arr[j])
            {
                found =1;

            }

        }

        if(found == 1)
        {
            printf("Present\n");
        }


        else
        {
            printf("Not present\n");
        }

        found =0;

    }

}
