#include <stdio.h>
#include <string.h>
#define max 100
struct HORS{
    char name[40];
    int pnum;
    int room_no;
    int id;
    int date;
    int month;
    int year;
};
int main(){
    struct HORS e[max];
    int count=0;
    int choice=0;
    int i;
    while (1) {
    printf("1.add the details\n");
    printf("2.display the details\n");
    printf("3.exit\n");
    printf("enter the choice-");
    scanf("%d",&choice);
    switch(choice) {
    case 1: if(count==max) {
            printf("--the list is full--");
            break;
        } else {
            printf("enter the name-");
            scanf("%s",&e[count].name);
            printf("enter the phone number-");
            scanf("%d",&e[count].pnum);
            printf("enter the room no.-");
            scanf("%d",&e[count].room_no);
            printf("enter your aadhar no. (or) PAN no.-");
            scanf("%d",&e[count].id);
            printf("enter the date:");
            scanf("%d",&e[count].date);
            printf("enter the month-");
            scanf("%d",&e[count].month);
            printf("enter the year-");
            scanf("%d",&e[count].year);
            printf("--patient details noted--\n");
            count++;
            break;
        }
      case 2: if(count==0)  {
            printf("the list is empty");
      } else {
          for (i=0; i<count; i++) {
              printf("the patient %d-\n",i + 1);
              printf("name-%s\n",e[i].name);
              printf("phone number-%d\n",e[i].pnum);
              printf("room no-%d\n",e[i].room_no);
              printf("id-%d\n",e[i].id);
              printf("date-%d\n",e[i].date);
              printf("month-%d\n",e[i].month);
              printf("year-%d\n",e[i].year);
      }
      break;
     case 3: printf("thank you!\n");
          break;
      }      
   }
 }
}