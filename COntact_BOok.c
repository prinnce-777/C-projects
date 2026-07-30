#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact
{
    char name[50];
    char phone[15];
};

struct Contact contact[MAX];
int total = 0;

void addContact();
void displayContacts();
void searchContact();

int main()
{
    int choice;

    do
    {
        printf("\n===== CONTACT BOOK =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
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

void addContact()
{
    printf("\nEnter Name: ");
    scanf("%s", contact[total].name);

    printf("Enter Phone Number: ");
    scanf("%s", contact[total].phone);

    total++;

    printf("Contact Added Successfully!\n");
}

void displayContacts()
{
    int i;

    if(total == 0)
    {
        printf("\nNo Contacts Found!\n");
        return;
    }

    printf("\n----- Contact List -----\n");

    for(i = 0; i < total; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", contact[i].name);
        printf("Phone : %s\n", contact[i].phone);
    }
}

void searchContact()
{
    char searchName[50];
    int i, found = 0;

    printf("\nEnter Name to Search: ");
    scanf("%s", searchName);

    for(i = 0; i < total; i++)
    {
        if(strcmp(searchName, contact[i].name) == 0)
        {
            printf("\nContact Found!\n");
            printf("Name  : %s\n", contact[i].name);
            printf("Phone : %s\n", contact[i].phone);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Contact Not Found!\n");
    }
}