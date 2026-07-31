#include <stdio.h>
#include <string.h>
#define Max 100
struct ERS {
    char name[40];
    int id;
    char role[30];
    char branch[40];
    int salary;
};
int main() {
  struct ERS e[Max];
    int count=0;
    int choice;
    int i;
 while (1)                         //for infinite loop
    {
    printf("1.add the employees\n");
    printf("2.display employees\n");
    printf("3.exit\n");
   printf("enter the choice-");
   scanf("%d",&choice);
   switch(choice) {
   case 1:if(count==Max) {
           printf("employees list is full");
           break;
       } else {
    printf("enter the name-");
    scanf("%s",&e[count].name); 
    printf("enter the id-");
    scanf("%d",&e[count].id);
    printf("enter the role-");
    scanf("%s",&e[count].role);
    printf("enter the branch-");
    scanf("%s",&e[count].branch);
    printf("enter the salary-");
    scanf("%d",&e[count].salary);
  count++;                       //count of number of employees added
    printf("--employee added succesfully--\n");
    break;
       }
   case 2: if(count==0) {
          printf("no employees found");
} else {
    for(i=0;i<count;i++) {
        printf("employe %d details-\n",i + 1);
       printf("name-%s\n",e[i].name);
       printf("id-%d\n",e[i].id); 
       printf("role-%s\n",e[i].role);
       printf("branch-%s\n",e[i].branch);
       printf("salary-%d\n",e[i].salary);
    }
    }
    break;
    case 3: printf("thank you!\n");
           break;
}
}
}