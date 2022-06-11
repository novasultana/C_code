#include<stdio.h>
int main()
{
    float marks;
    printf("Enter marks: ");
    scanf("%f",&marks);
    if(marks>60 &&marks<65)
    {
        printf ("Grade: C");
    }

    if(marks>65&&marks<=70)
    {
        printf("Grade:B");
    }

    if(marks>=71&&marks<=80)
    {
        printf("Grade:A");
    }

    if(marks<0||marks>100)
    {
        printf("Invalid input");
    }
    if(marks<60)
    {
        printf("Fail");
    }
    return 0;
}
