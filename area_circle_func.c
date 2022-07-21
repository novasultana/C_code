#include<stdio.h>
#include<math.h>
float Area(int r);
void CheckArea();
int main()
{
    int r;
    printf("Enter Radius: ");
    scanf("%d",&r);
    Area(r);
    CheckArea();
}

float Area(r)
{
    float area;
    area=3.1416*r*r;
    printf("Area: %f \n",area);
    return area;
}

  CheckArea(float area)
 {
     if(area>25.00)
     {
         printf("Area is Grater than 25 \n");
     }
     if(area<25)
     {
         printf("Area is Less than 25 \n");
     }
 }
