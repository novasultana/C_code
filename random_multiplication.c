#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    int x,y,result,input_result=0;
    printf("Enter -1 to End!");
    scanf("%d",&result);

    while(result!=-1)
    {

        srand(time(0));
        x=1+rand()%10;
        y=1+rand()%10;

        printf("How much is %d times %d (-1 to End)?",x,y);
        result=x*y;
        scanf("%d",&input_result);
        if(input_result==-1)
        {
                printf("That's all for now.Bye \n\n");
                break;

        }

         if (input_result==result)
        {
            printf("Very Good!\n\n");
        }
        else
        {
            printf("No.Please try again.\n\n");
        }

    }


}
