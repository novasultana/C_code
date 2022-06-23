#include<stdio.h>
int main()
{

    int student=1;
    int marks,passes=0,fail=0;
    int c_A_plus=0, c_A=0, c_A_minus=0,c_B_plus=0,c_B=0,c_B_minus=0;
    int c_C_plus=0,c_C=0,c_C_minus=0,c_D_plus=0,c_D=0,c_F=0;

    printf("Enter marks: ");
    scanf("%d",&marks);
    while(marks!=-1)
    {

        student=student+1;
        scanf("%d",&marks);
  switch(marks)
    {
        case 96 ... 100:
            printf("Grade:A+");
            c_A_plus= c_A_plus+1;
            break;

       case 89 ... 95:
            printf("Grade:A \n");
            c_A= c_A+1;
            break;

        case 87 ... 88:
            printf("Grade:A- \n");
            c_A_minus= c_A_minus+1;
            break;

         case 82 ... 86:
            printf("Grade:B+ \n");
            c_B_plus= c_B_plus+1;
            break;

        case 79 ... 81:

            printf("Grade:B \n");
            c_B= c_B+1;
            break;

        case 76 ... 78:
            printf("Grade:B-");
            c_B_minus= c_B_minus+1;
             break;

         case 72 ... 75:
            printf("Grade:C+");
            c_C_plus= c_C_plus+1;
             break;


         case 69 ... 71:
            printf("Grade:C");
            c_C= c_C+1;
             break;

         case 66 ... 68:
            printf("Grade:C-");
            c_C_minus= c_C_minus+1;
             break;

        case 62 ... 65:
            printf("Grade:D+");
            c_D_plus= c_D_plus+1;
            break;
         case 60 ... 61:
            printf("Grade:D");
            c_D= c_D+1;
             break;

          case 0 ... 59:
            printf("Grade:F");
            c_F= c_F+1;
         break;

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

    printf("\n Total Passed =%d",c_A_plus+c_A+c_A_minus+c_B_plus+c_B+c_B_minus+c_C_plus+c_C+c_C_minus+c_D_plus+c_D);
    printf("\n Total Failed =%d",c_F);

}


