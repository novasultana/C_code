#include <stdio.h>
#include <stdlib.h>

int main()
{
    int req;
    int account;
    char name[100];
    double balance;

    FILE *bankInfo=fopen("info.txt","r");

    if(bankInfo==NULL)
    {
        printf("File could not be opended.\n");
    }
    else
    {
        printf("1. List account with zero balances\n");
        printf("2. List account with credit balances\n");
        printf("3. List account with debit balances\n");
        printf("4. End the program\n? ");
        scanf("%d", &req);

        while(req!=4)
        {
            fscanf(bankInfo, "%d%s%lf", &account, name, &balance);

            switch(req)
            {
            case 1:
                printf("Account with zero balances:\n");

                while(!feof(bankInfo))
                {

                    if(balance==0)
                    {
                        printf("%d %s %.2lf\n", account, name, balance);
                    }
                    fscanf(bankInfo, "%d%s%lf", &account, name, &balance);
                }
                break;

            case 2:
                printf("Account with credit balances:\n");

                while(!feof(bankInfo))
                {
                    if(balance<0)
                    {
                        printf("%d %s %.2lf\n", account, name, balance);
                    }
                    fscanf(bankInfo, "%d%s%lf", &account, name, &balance);
                }
                break;

            case 3:
                printf("Account with debit balances:\n");

                while(!feof(bankInfo))
                {
                    if(balance>0)

                    {
                        printf("%d %s %.2lf\n", account, name, balance);
                    }
                    fscanf(bankInfo,"%d%s%lf", &account, name, &balance);
                }
                break;

            }
            rewind(bankInfo);
            printf("%s", "? ");
            scanf("%d", &req);

        }

    }
    return 0;

}
