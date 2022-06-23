#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,temp;
    float distance;
    printf("Input: ");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    temp=((x2-x1*(x2-x1)))+((y2-y1)*(y2-y1));

    distance=sqrt(temp);
    if(x1==0&&x2==0&&y1==0&&y2==0)
    {
     printf(" ");
    }


   else if(distance<=10){

               printf("output: Near ");
    }
    else
    {
         printf("output: Far ");
    }



    return 0;

}
