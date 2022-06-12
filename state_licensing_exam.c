#include<stdio.h>
int main()
{

    int student=1;
    int passes=0;
    int fail=0;
;
    int result;
    //printf("Enter number of student: ");
   // scanf("%d",&student_num);

    while(student<=10)
    {
        printf("Enter Result(1 for Passes & 2 for Fail): ");
        scanf("%d",&result);

        if(result==1)
        {
          passes=passes+1;;
        }
        else
        {
            fail=fail+1;
        }

       student=student+1;
    }
     printf("Passes: %d \n",passes);
    printf("failed: %d \n",fail);

    if(passes>=8)
    {
        printf("Raise Tuition.)");
    }

    return 0;


}
