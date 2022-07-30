#include<stdio.h>
quiz();
int main()
{
    quiz();
}
quiz()
{
     printf("        ********Answer the following questions********       \n\n");

    int answer1,count=0;
    printf("1.Which of the following is not a Green house effect Gas?\n\n");
    printf("Options: 1.Carbon dioxide    2.Ozone    3.Methane   4.Nitrogen\n");
    scanf("%d",&answer1);
    if(answer1==4)
    {
        count=count+1;
    }
    printf("\n");

    printf("2.In Green house Gas which is present in high quality?\n\n");
    printf("Options: 1.Carbon dioxide    2.Propane    3.Ethane   4.Methane \n\n");
    scanf("%d",&answer1);
    if(answer1==1)
    {
        count=count+1;
    }
    printf("\n");

    printf("3.In global warming the temperature of ?\n\n");
    printf("Options: 1.Troposphere increase    2.Ionosphere increase    3.Mesosphere increase    4.Straosphere increase\n\n");
    scanf("%d",&answer1);
    if(answer1==1)
    {
        count=count+1;
    }
    printf("\n");

    printf("4.Burning of fossil fuels cause - \n\n");
    printf("Options: 1.Depletion of ozone layer  2.Global Warming     3.Melting of polar ice caps    4.Both 2 and 3\n\n");
    scanf("%d",&answer1);
    if(answer1==4)
    {
        count=count+1;
    }

    printf("\n");

    printf("5.Which of the following contains CFC ? \n\n");
    printf("Options: 1.Refrigerants  2.Varnish   3.Aerated drinks    4.Wall paints\n\n");
    scanf("%d",&answer1);
    if(answer1==1)
    {
        count=count+1;
    }

    printf("Total: %d\n",count);

    if(count==5)
    {
        printf("Excellent!");
    }
     if(count==4)
    {
        printf("Very Good!");
    }

    if(count<=3)
    {
        printf("It's time to brush up your knowledge about Global warming.");
    }
}
