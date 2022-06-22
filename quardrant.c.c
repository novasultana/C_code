#include<stdio.h>
int main()
{

    int x,y;
    printf("Input: \n");
    scanf("%d%d",&x,&y);
    if(x==0&&y==0)
       {
           printf("Output:Origin \n",x,y);
       }
    else if(x>=0&&y>=0)
    {
         printf("Output:First Quadrant \n",x,y);
    }

    else if(x<=0&&y>=0)
    {
         printf("Output:Second Quadrant \n",x,y);
    }

   else if(x<=0&&y<=0)
    {
         printf("Output:Third Quadrant \n",x,y);
    }
    else
    {
         printf("Output:Fourth Quadrant \n",x,y);
    }
        return 0;

}
