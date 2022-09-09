#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit;

    FILE* number=fopen("Number.txt","w");

    if(number==NULL)
    {
        printf("Nothing is added yet.\n");
    }
    else
    {
        printf("Enter a number: ");
        scanf("%d", &digit);

        while(!feof(stdin))
        {
            fprintf(number, "%d ", digit);
            printf("Enter a number: ");
            scanf("%d", &digit);
        }
        fclose(number);

    }

    int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, c10=0;
    number=fopen("Number.txt","r");
    if(number==NULL)
    {
        printf("Nothing is added yet.\n");
    }
    else
    {
        fscanf(number, "%d", &digit);
        printf("\nContent of Number.txt\n");
        while(!feof(number))
        {
            printf("%d ", digit);
            if(digit==1)
            {
                c1++;
            }
            if(digit==2)
            {
                c2++;
            }
            if(digit==3)

            {
                c3++;
            }
            if(digit==4)
            {
                c4++;
            }
            if(digit==5)
            {
                c5++;
            }
            if(digit==6)
            {
                c6++;
            }
            if(digit==7)
            {
                c7++;
            }
            if(digit==8)
            {
                c8++;
            }
            if(digit==9)
            {

                c9++;
            }
            if(digit==10)
            {
                c10++;
            }
            fscanf(number, "%d", &digit);
        }
        fclose(number);

    }

    FILE* output=fopen("Output.txt","w");

    if(output==NULL)
    {
        printf("Nothing is added yet.\n");
    }
    else
    {
        fprintf(output, "%d %d %d %d %d %d %d %d %d %d", c1,c2,c3,c4,c5,c6,c7,c8,c9,c10);
    }
    fclose(output);
    output=fopen("Output.txt","r");

    if(output==NULL)
    {
        printf("Nothing is added yet.\n");
    }
    else
    {
        printf("\n\nContent of Output.txt\n");
        printf("Number of 1 responses: %d\n", c1);
        printf("Number of 2 responses: %d\n", c2);
        printf("Number of 3 responses: %d\n", c3);
        printf("Number of 4 responses: %d\n", c4);
        printf("Number of 5 responses: %d\n", c5);
        printf("Number of 6 responses: %d\n", c6);
        printf("Number of 7 responses: %d\n", c7);
        printf("Number of 8 responses: %d\n", c8);
        printf("Number of 9 responses: %d\n", c9);
        printf("Number of 10 responses: %d\n", c10);
    }
    fclose(output);

}
