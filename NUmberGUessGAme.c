#include <stdio.h>
int main(){
    int num=786;
    int Gnum;           //gnum=gueesed num by user
    printf("Enter a number :");
    scanf("%d", &Gnum);
   if(Gnum==num)
        printf("Congratulations! You guessed the number correctly.\n");
    else
        printf("Sorry, you guessed incorrectly. The number was %d.\n", num);
        
}