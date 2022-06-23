#include<stdio.h>
int main()
{
    int num1,num2;
    char result;
    scanf("%d",&num1);
    scanf("%c",&result);
    scanf("%d",&num2);

    switch(result)
    {
        case '+': result=num1+num2;
        printf("output: %d",result);
        break;

        case '-': result=num1-num2;
        printf("output: %d",result);
        break;

        case '*': result=num1*num2;
        printf("output: %d",result);
        break;

        case '/': result=num1/num2;
        printf("output: %d",result);
        break;

         case '%': result=num1%num2;
        printf("output: %d",result);
        break;
    }


}
