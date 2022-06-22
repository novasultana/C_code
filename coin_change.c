#include<stdio.h>
int main()
{
    float amount;
    int total,t_amount,t_amount1=0,t_amount2=0,t_amount3=0,t_amount4=0,t_amount5=0;
    printf("Enter amount: ");
    scanf("%f",&amount);
    if(amount>=100)
    {
        t_amount=amount/100;

    }
    printf("%d Notes of 100 \n",t_amount);
    t_amount=amount-t_amount*100;
    if(t_amount>=50)
    {
        t_amount1=t_amount/50;
    }
    printf("%d Notes of 50 \n",t_amount1);

    t_amount1=t_amount-t_amount1*50;
    if(t_amount1>=20)
    {
        t_amount2=t_amount1/20;
    }
    printf("%d Notes of 20 \n",t_amount2);
      t_amount2=t_amount1-t_amount2*20;

     if(t_amount2>=10)
    {
        t_amount3=t_amount2/10;
    }
    printf("%d Notes of 10 \n",t_amount3);
      t_amount3=t_amount2-t_amount3*10;


     if(t_amount3>=5)
    {
        t_amount4=t_amount3/5;
    }
    printf("%d Notes of 5 \n",t_amount4);
      t_amount4=t_amount3-t_amount4*5;

     if(t_amount4>=2)
    {
        t_amount5=t_amount4/2;
    }
    printf("%d Notes of 2 \n",t_amount5);




}

