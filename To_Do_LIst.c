#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Task
{
    int id;
    char task[100];
    int completed;
};

void addTask();
void viewTasks();
void markCompleted();
void deleteTask();

int main()
{
    int choice;

    while (1)
    {
        printf("\n==============================");
        printf("\n        TO-DO LIST");
        printf("\n==============================");
        printf("\n1. Add Task");
        printf("\n2. View Tasks");
        printf("\n3. Mark Task as Completed");
        printf("\n4. Delete Task");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addTask();
                break;

            case 2:
                viewTasks();
                break;

            case 3:
                markCompleted();
                break;

            case 4:
                deleteTask();
                break;

            case 5:
                printf("\nThank You!\n");
                exit(0);

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}

void addTask()
{
    FILE *fp;
    struct Task t;

    fp = fopen("tasks.dat", "ab");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    printf("\nEnter Task ID: ");
    scanf("%d", &t.id);

    printf("Enter Task: ");
    scanf(" %[^\n]", t.task);

    t.completed = 0;

    fwrite(&t, sizeof(t), 1, fp);

    fclose(fp);

    printf("\nTask Added Successfully!\n");
}

void viewTasks()
{
    FILE *fp;
    struct Task t;

    fp = fopen("tasks.dat", "rb");

    if (fp == NULL)
    {
        printf("\nNo tasks found.\n");
        return;
    }

    printf("\n-----------------------------------------------\n");
    printf("ID\tStatus\t\tTask\n");
    printf("-----------------------------------------------\n");

    while (fread(&t, sizeof(t), 1, fp))
    {
        if (t.completed == 0)
            printf("%d\tPending\t\t%s\n", t.id, t.task);
        else
            printf("%d\tCompleted\t%s\n", t.id, t.task);
    }

    fclose(fp);
}

void markCompleted()
{
    FILE *fp;
    FILE *temp;

    struct Task t;
    int id, found = 0;

    fp = fopen("tasks.dat", "rb");
    temp = fopen("temp.dat", "wb");

    if (fp == NULL)
    {
        printf("\nNo tasks found.\n");
        return;
    }

    printf("Enter Task ID to mark completed: ");
    scanf("%d", &id);

    while (fread(&t, sizeof(t), 1, fp))
    {
        if (t.id == id)
        {
            t.completed = 1;
            found = 1;
        }

        fwrite(&t, sizeof(t), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("tasks.dat");
    rename("temp.dat", "tasks.dat");

    if (found)
        printf("\nTask Completed!\n");
    else
        printf("\nTask ID not found.\n");
}

void deleteTask()
{
    FILE *fp;
    FILE *temp;

    struct Task t;
    int id, found = 0;

    fp = fopen("tasks.dat", "rb");
    temp = fopen("temp.dat", "wb");

    if (fp == NULL)
    {
        printf("\nNo tasks found.\n");
        return;
    }

    printf("Enter Task ID to delete: ");
    scanf("%d", &id);

    while (fread(&t, sizeof(t), 1, fp))
    {
        if (t.id == id)
        {
            found = 1;
            continue;
        }

        fwrite(&t, sizeof(t), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("tasks.dat");
    rename("temp.dat", "tasks.dat");

    if (found)
        printf("\nTask Deleted Successfully!\n");
    else
        printf("\nTask ID not found.\n");
}