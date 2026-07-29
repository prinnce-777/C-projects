#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Expense
{
    char date[15];
    char category[30];
    char description[50];
    float amount;
};

void addExpense();
void viewExpenses();
void searchCategory();
void totalExpense();

int main()
{
    int choice;

    while (1)
    {
        printf("\n============================");
        printf("\n     EXPENSE TRACKER");
        printf("\n============================");
        printf("\n1. Add Expense");
        printf("\n2. View Expenses");
        printf("\n3. Search by Category");
        printf("\n4. Total Expense");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addExpense();
                break;
            case 2:
                viewExpenses();
                break;
            case 3:
                searchCategory();
                break;
            case 4:
                totalExpense();
                break;
            case 5:
                printf("\nThank you!\n");
                exit(0);
            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}

void addExpense()
{
    FILE *fp;
    struct Expense e;

    fp = fopen("expenses.txt", "ab");

    if (fp == NULL)
    {
        printf("File could not be opened.\n");
        return;
    }

    printf("\nEnter Date (DD/MM/YYYY): ");
    scanf("%s", e.date);

    printf("Enter Category: ");
    scanf("%s", e.category);

    printf("Enter Description: ");
    scanf(" %[^\n]", e.description);

    printf("Enter Amount: ");
    scanf("%f", &e.amount);

    fwrite(&e, sizeof(e), 1, fp);

    fclose(fp);

    printf("\nExpense Added Successfully!\n");
}

void viewExpenses()
{
    FILE *fp;
    struct Expense e;
    int count = 1;

    fp = fopen("expenses.txt", "rb");

    if (fp == NULL)
    {
        printf("\nNo expenses found.\n");
        return;
    }

    printf("\n========== Expense List ==========\n");

    while (fread(&e, sizeof(e), 1, fp))
    {
        printf("\nExpense %d\n", count++);
        printf("Date        : %s\n", e.date);
        printf("Category    : %s\n", e.category);
        printf("Description : %s\n", e.description);
        printf("Amount      : %.2f\n", e.amount);
    }

    fclose(fp);
}

void searchCategory()
{
    FILE *fp;
    struct Expense e;
    char cat[30];
    int found = 0;

    fp = fopen("expenses.txt", "rb");

    if (fp == NULL)
    {
        printf("\nNo expenses found.\n");
        return;
    }

    printf("Enter Category to Search: ");
    scanf("%s", cat);

    printf("\nSearch Results\n");

    while (fread(&e, sizeof(e), 1, fp))
    {
        if (strcmp(e.category, cat) == 0)
        {
            printf("\nDate        : %s\n", e.date);
            printf("Description : %s\n", e.description);
            printf("Amount      : %.2f\n", e.amount);

            found = 1;
        }
    }

    if (!found)
    {
        printf("\nNo records found.\n");
    }

    fclose(fp);
}

void totalExpense()
{
    FILE *fp;
    struct Expense e;
    float total = 0;

    fp = fopen("expenses.txt", "rb");

    if (fp == NULL)
    {
        printf("\nNo expenses found.\n");
        return;
    }

    while (fread(&e, sizeof(e), 1, fp))
    {
        total += e.amount;
    }

    fclose(fp);

    printf("\nTotal Expense = %.2f\n", total);
}