#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book
{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

struct Book book[MAX];
int total = 0;

void addBook();
void displayBooks();
void searchBook();

int main()
{
    int choice;

    do
    {
        printf("\n====== LIBRARY MANAGEMENT SYSTEM ======\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d",&book[total].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book[total].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[total].author);

    printf("Enter Quantity: ");
    scanf("%d",&book[total].quantity);

    total++;

    printf("\nBook Added Successfully!\n");
}

void displayBooks()
{
    int i;

    if(total == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n========== BOOK LIST ==========\n");

    for(i = 0; i < total; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID  : %d\n", book[i].id);
        printf("Title    : %s\n", book[i].title);
        printf("Author   : %s\n", book[i].author);
        printf("Quantity : %d\n", book[i].quantity);
    }
}

void searchBook()
{
    int id;
    int i;
    int found = 0;

    printf("\nEnter Book ID: ");
    scanf("%d",&id);

    for(i = 0; i < total; i++)
    {
        if(book[i].id == id)
        {
            printf("\nBook Found!\n");
            printf("Book ID  : %d\n", book[i].id);
            printf("Title    : %s\n", book[i].title);
            printf("Author   : %s\n", book[i].author);
            printf("Quantity : %d\n", book[i].quantity);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Book Not Found!\n");
    }
}