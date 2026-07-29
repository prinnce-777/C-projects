#include <stdio.h>
#include <string.h>

#define MAX 100

struct Account
{
    int accountNumber;
    char name[50];
    float balance;
};

struct Account accounts[MAX];
int total = 0;

void createAccount();
void displayAccounts();
void searchAccount();
void depositMoney();
void withdrawMoney();

int main()
{
    int choice;

    do
    {
        printf("\n========== BANKING SYSTEM ==========\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                searchAccount();
                break;

            case 4:
                depositMoney();
                break;

            case 5:
                withdrawMoney();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void createAccount()
{
    printf("\nEnter Account Number: ");
    scanf("%d", &accounts[total].accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", accounts[total].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &accounts[total].balance);

    total++;

    printf("\nAccount Created Successfully!\n");
}

void displayAccounts()
{
    int i;

    if(total == 0)
    {
        printf("\nNo Accounts Found!\n");
        return;
    }

    printf("\n========== ACCOUNT LIST ==========\n");

    for(i = 0; i < total; i++)
    {
        printf("\nAccount %d\n", i + 1);
        printf("Account Number : %d\n", accounts[i].accountNumber);
        printf("Name           : %s\n", accounts[i].name);
        printf("Balance        : %.2f\n", accounts[i].balance);
    }
}

void searchAccount()
{
    int number;
    int i;
    int found = 0;

    printf("\nEnter Account Number: ");
    scanf("%d", &number);

    for(i = 0; i < total; i++)
    {
        if(accounts[i].accountNumber == number)
        {
            printf("\nAccount Found!\n");
            printf("Name    : %s\n", accounts[i].name);
            printf("Balance : %.2f\n", accounts[i].balance);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Account Not Found!\n");
    }
}

void depositMoney()
{
    int number;
    float amount;
    int i;

    printf("\nEnter Account Number: ");
    scanf("%d", &number);

    for(i = 0; i < total; i++)
    {
        if(accounts[i].accountNumber == number)
        {
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            accounts[i].balance += amount;

            printf("Deposit Successful!\n");
            printf("New Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account Not Found!\n");
}

void withdrawMoney()
{
    int number;
    float amount;
    int i;

    printf("\nEnter Account Number: ");
    scanf("%d", &number);

    for(i = 0; i < total; i++)
    {
        if(accounts[i].accountNumber == number)
        {
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if(amount <= accounts[i].balance)
            {
                accounts[i].balance -= amount;

                printf("Withdrawal Successful!\n");
                printf("Remaining Balance: %.2f\n", accounts[i].balance);
            }
            else
            {
                printf("Insufficient Balance!\n");
            }

            return;
        }
    }

    printf("Account Not Found!\n");
}