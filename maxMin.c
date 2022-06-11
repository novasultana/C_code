#include<stdio.h>
int main()
{
    int num1,num2,num3,max,min;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    max=num1;
    if(num2>max)
    {
        max=num2;
    }
     if(num3>max)
    {
        max=num3;
    }

    min=num1;
     if(num2<min)
    {
        min=num2;
    }
     if(num3<min)
    {
        min=num3;
    }


    printf("Maxium num: %d \n",max);
    printf("Minimum num: %d ",min);





}
