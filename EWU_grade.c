#include<stdio.h>
int main()
{

    int student=1;
    int marks,passes=0,fail=0;
    int c_A_plus=0, c_A=0, c_A_minus=0,c_B_plus=0,c_B=0,c_B_minus=0;
    int c_C_plus=0,c_C=0,c_C_minus=0,c_D_plus=0,c_D=0,c_F=0;

    printf("Enter marks: ");
    //scanf("%d",&marks);
    while(marks!=-1)
    {
        student=student+1;
        scanf("%d",&marks);

        if(marks>=60)
        {
            passes=passes+1;;
        }
        else
        {
            fail=fail+1;
        }

        if(marks>96&&marks<=100)
        {
            printf("Grade:A+");
            c_A_plus= c_A_plus+1;
        }

        if(marks>89&&marks<=96)
        {
            printf("Grade:A \n");
            c_A= c_A+1;
        }
        if(marks>86&&marks<=89)
        {
            printf("Grade:A- \n");
            c_A_minus= c_A_minus+1;
        }
        if(marks>82&&marks<=86)
        {
            printf("Grade:B+ \n");
            c_B_plus= c_B_plus+1;
        }
        if(marks>79&&marks<=82)
        {
            printf("Grade:B \n");
            c_B= c_B+1;
        }
        if(marks>76&&marks<=79)
        {
            printf("Grade:B-");
            c_B_minus= c_B_minus+1;
        }
        if(marks>72&&marks<=76)
        {
            printf("Grade:C+");
            c_C_plus= c_C_plus+1;
        }

        if(marks>69&&marks<=72)
        {
            printf("Grade:C");
            c_C= c_C+1;
        }
        if(marks>66&&marks<=69)
        {
            printf("Grade:C-");
            c_C_minus= c_C_minus+1;
        }
        if(marks>62&&marks<=66)
        {
            printf("Grade:D+");
            c_D_plus= c_D_plus+1;
        }
        if(marks>59&&marks<=62)
        {
            printf("Grade:D");
            c_D= c_D+1;
        }
        if(marks>0&&marks<=59)
        {
            printf("Grade:F");
            c_F= c_F+1;
        }

    }

    printf("\n Total A+ =%d",c_A_plus);
    printf("\n Total A =%d",c_A);
    printf("\n Total A- =%d",c_A_minus);
    printf("\n Total B+ =%d",c_B_plus);
    printf("\n Total B =%d",c_B);
    printf("\n Total B- =%d",c_B_minus);
    printf("\n Total C+ =%d",c_C_plus);
    printf("\n Total C =%d",c_C);
    printf("\n Total C- =%d",c_C_minus);
    printf("\n Total D+ =%d",c_D_plus);
    printf("\n Total D =%d",c_D);
    printf("\n Total F =%d \n",c_F);

    printf("\n Total Passed =%d",passes);
    printf("\n Total Failed =%d",c_F);



}
