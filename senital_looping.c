#include<stdio.h>
int main()
{

    int student=0,sum=0,marks;
    scanf("%d",&marks);
    while(marks!=-1)
    {
        sum=sum+marks;
        student=student+1;
        scanf("%d",&marks);
    }
    printf("\nSum =%d",sum);
    printf("\naverage =%.2f",(float)sum/student);
}
