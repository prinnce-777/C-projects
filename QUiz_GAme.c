#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("================================\n");
    printf("      SIMPLE QUIZ GAME\n");
    printf("================================\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Chennai\n");
    printf("4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\n2. Which language is used to write C programs?\n");
    printf("1. Python\n");
    printf("2. Java\n");
    printf("3. C\n");
    printf("4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 4
    printf("\n4. Which symbol is used for comments in C (single line)?\n");
    printf("1. //\n");
    printf("2. ##\n");
    printf("3. <!-- -->\n");
    printf("4. **\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 5
    printf("\n5. 10 + 20 = ?\n");
    printf("1. 20\n");
    printf("2. 25\n");
    printf("3. 30\n");
    printf("4. 40\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    printf("\n==============================\n");
    printf("Quiz Finished!\n");
    printf("Your Score = %d / 5\n", score);

    if(score == 5)
    {
        printf("Excellent!\n");
    }
    else if(score >= 3)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}