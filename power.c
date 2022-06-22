#include<stdio.h>
#include<math.h>
int main()
{
    int x,power,output;
    printf("Enter: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&power);
    output=pow(x,power);
    printf("%d",output);
}
