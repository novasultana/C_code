#include<stdio.h>
int main()
{
    int arr1[5],arr2[4],sum1=0,sum2=0;
    int *ptr1,*ptr2;
    ptr1=arr1;
    ptr2=arr2;

    ans(arr1,arr2);
}
int ans(int *arr1,int *arr2,int sum1,int sum2)
{
    printf("Enter the elements of the array1: ");
    sum1=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0; i<5; i++)
    {
         sum1=sum1+arr1[i];
    }
    printf("Sum of array1 elements is: %d\n",sum1);

    printf("Enter the elements of the array2: \n");
    for(int j=0; j<4; j++)
    {
        scanf("%d",&arr2[j]);
    }
    sum2=0;
    for(int j=0; j<4; j++)
    {
        sum2=sum2+arr2[j];
    }
    printf("\nSum of array2 elements is: %d\n",sum2);

    printf("result = %d ", sum1-sum2);
}

