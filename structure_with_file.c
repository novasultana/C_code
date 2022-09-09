#include <stdio.h>
#include <stdlib.h>

struct bank
{
    int account;
    char name[100];

    double balance;
};

int main()
{
    int i=0;
    struct bank a[100];

    FILE* bank=fopen("bank.txt","w");

    if(bank==NULL)
    {
        printf("File could not be opended.\n");
    }
    else
    {
        printf("Enter the account, name and balance: ");
        scanf("%d%s%lf", &a[i].account, a[i].name, &a[i].balance);

        while(!feof(stdin))
        {
            fprintf(bank, "%d %s %.2lf\n", a[i].account, a[i].name, a[i].balance);
            i++;
            printf("Enter the account, name and balance: ");
            scanf("%d%s%lf", &a[i].account, a[i].name, &a[i].balance);


        }
        fclose(bank);
    }

    i=0;
    bank=fopen("bank.txt","r");

    if(bank==NULL)
    {
        printf("File could not be opended.\n");
    }
    else
    {
        fscanf(bank, "%d%s%lf", &a[i].account, a[i].name, &a[i].balance);

        while(!feof(bank))
        {
            printf("%d %s %.2lf\n", a[i].account, a[i].name, a[i].balance);
            i++;
            fscanf(bank, "%d%s%lf", &a[i].account, a[i].name, &a[i].balance);
        }
        fclose(bank);

    }
}
