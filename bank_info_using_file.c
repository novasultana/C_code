#include<stdio.h>
#include<stdlib.h>

int main()
{
    int account;
    char name[100];
    double balance;

    FILE *bankInfo;

    bankInfo=fopen("info.txt","w");

    if(bankInfo==NULL)
    {
        printf("File could not be opended.\n");
    }
    else
    {
        printf("Enter the account, name and balance: ");
        scanf("%d%s%lf", &account, name, &balance);

        while(!feof(stdin))
        {
            fprintf(bankInfo, "%d %s %.2lf\n", account, name, balance);
            printf("Enter the account, name and balance: ");
            scanf("%d%s%lf", &account, name, &balance);
        }
        fclose(bankInfo);
    }



    printf("Read data from the text file:\n");

    bankInfo=fopen("info.txt","r");

    if(bankInfo==NULL)
    {
        printf("File could not be opended.\n");
    }
    else
    {
        fscanf(bankInfo, "%d%s%lf", &account, name, &balance);

        while(!feof(bankInfo))
        {
            printf("%d %s %.2lf\n", account, name, balance);
            fscanf(bankInfo, "%d%s%lf", &account, name, &balance);
        }

    }
    fclose(bankInfo);
}


