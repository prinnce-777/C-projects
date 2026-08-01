#include<stdio.h>
#include<string.h>
#define max 200
struct bus  {
    int bus_number;
    char from[15];
    char to[15];
    int seat;
    char first_name[20];
    char last_name[20];
};
void app_options() {
    struct bus b[1];
    int process =0;
    int choiceo;
    int AVB = 3;            //AVB = number of busses avilable
    int count=24;            //count = number of seats
    int phone_num;
    int id;
     int choicec;
     int cancel=0;
     int count2;
    while (1) {
    printf("1.book tickets\n");
    printf("2.show bookings\n");
    printf("3.cancel tickets \n");
    printf("4.exit\n");
    printf("enter the choiceo-");
    scanf("%d",&choiceo);
    switch(choiceo) {
        case 1: if(choiceo==1) {
            printf("from-");
            scanf("%s",b[0].from);
            printf("to-");
            scanf("%s",b[0].to);
            printf("from-%s\n",b[0].from);
            printf("to- %s\n",b[0].to);
            printf("avilable busses - %d\n",AVB);
            printf("bus fare for AC bus = '559'\n");
            printf("bus fare for NON-AC bus = '345'\n");
            for(int i=0;i<AVB;i++) {
                int bus_number=i+7;
                if(bus_number % 2 ==0) {
            printf("bus number %d - AC, name - GARUDA\n",bus_number);
                } else {
            printf("bus number %d - NON.AC, name - AMARAVATHI\n",bus_number);
                }
        }
        printf("enter the number of bus you want to book in-");
        scanf("%d",&b[0].bus_number);
        printf("your selected bus number - %d\n",b[0].bus_number);
        for(int i=0;i<count;i++) {
            printf("seat (%d)\n",i);
        }
        printf("enter the seat number you want to book-");
        scanf("%d",&b[0].seat);
        printf("seat you selected - %d\n",b[0].seat);
        printf("enter your first name-");
        scanf("%s",b[0].first_name);
        printf("first name - %s\n",b[0].first_name);
        printf("enter your last name-");
        scanf("%s",b[0].last_name);
        printf("last name- %s\n",b[0].last_name);
        printf("enter your phone number-");
        scanf("%d",&phone_num);
        printf("phone.no-%d\n",phone_num);
        printf("enter your aadhar card number (or) PAN card number-");
        scanf("%d",&id);
        printf("id-%d\n",id);
       int choiceg;
       int choicep;
       int ootp=4545;
       int otpu;
       int otpd;
       int otpc;
       int otpf;
        int upi;
        int grade[2];
       int fphone_num;
       int ophone_num;
       int last_thing;
       int oupi;
      int otpuo;
       int upio;
       int otpdo;
       int otpco;
       int credit_o;
       printf("enter your gender--\n");
         printf("1.male\n");
         printf("2.female\n");
         printf("3.other\n");
     printf("enter the choiceg--");
     scanf("%d",&choiceg);
      switch(choiceg) {
          case 1: if(choiceg==1) {
              printf("you have to pay fare\n");
              printf("complete your payment--\n");
               printf("1.upi\n");
               printf("2.debit card\n");
               printf("3.credit card\n"); 
               printf("4.at the counter\n"); 
               printf("enter the choice-");
               scanf("%d",&choicep);
               switch(choicep) {
                   case 1: if(choicep==1)  {
                       printf("enter the upi number-");
                       scanf("%d",&upi); //do not type @ybl,, etc error comei
                       printf("enter the last thing-");
                       scanf("%s",&last_thing);
                       printf("enter the otp-");
                       scanf("%d",&otpu);
                       if (ootp==otpu) {
                           printf("your payment is succesfull\n");
                          printf(" your bus number - %d\n",b[0].bus_number);
                          printf("your seat - %d\n",b[0].seat);
                          printf("pickup at bustand, 'stand-4'\n");
                          printf("timings- pickup : 13:00\n");
                          printf("          drop  : 17:05\n");
                         printf("for any further details contact - 9988770");
                         count--;
                          printf("number of seats avilable -%d\n",count);
                          process++;
                       }  else {
                           printf("--your payment is failed, try again--\n");
                       }
                       break;
                   }
                    case 2: if(choicep==2) {
                        printf("enter your debit card number-\n");
                        printf("enter the otpd-");
                        scanf("%d",&otpd);
                         if (ootp==otpd)  {
                           printf("your payment is succesfull\n");
                          printf(" your bus number - %d\n",b[0].bus_number);
                          printf("your seat - %d\n",b[0].seat);
                          printf("pickup at bustand, 'stand-4'\n");
                          printf("timings- pickup : 13:00\n");
                          printf("          drop  : 17:05\n");
                         printf("for any further details contact - 9988770");
                         count--;
                          printf("number of seats avilable -%d\n",count);
                            process++;
                       } else {
                           printf("--your payment is failed, try again--\n");
                       }
                       break;
                   }
                     case 3: if(choicep==3) {
                         printf("enter the credit card number-\n");
                         printf("enter the otp-");
                         scanf("%d",&otpc);
                         if (ootp==otpc)  {
                           printf("your payment is succesfull\n");
                          printf(" your bus number - %d\n",b[0].bus_number);
                          printf("your seat - %d\n",b[0].seat);
                          printf("pickup at bustand, 'stand-4'\n");
                          printf("timings- pickup : 13:00\n");
                          printf("          drop  : 17:05\n");
                         printf("for any further details contact - 9988770");
                        count--;
                        printf("number of seats avilable -%d\n",count);
                           process++;
                       } else {
                           printf("--your payment is failed, try again--\n");
                       }
                       break;
                   }
                      case 4: if(choicep==4) {
 printf("attended to bustand counter before 13:00pm, so pay at the counter and collect your ticket at the counter itself");
 count--;
   process++;
  printf("number of seats avilable -%d\n",count);
    break;
                      }
                       }          //switch choice p
                       break;
                    }             //choiceg
                    case 2: if(choiceg==2) {
                        printf("you dont need to pay any fare\n");
                        printf("enter the phone number\n-");
                        scanf("%d",&fphone_num);
                        printf("enter the otp-");
                        scanf("%d",&otpf);
                         printf("your ticet booking  is succesfull\n");
                          printf(" your bus number - %d\n",b[0].bus_number);
                          printf("your seat - %d\n",b[0].seat);
                          printf("pickup at bustand, 'stand-4'\n");
                          printf("timings- pickup : 13:00\n");
                          printf("          drop  : 17:05\n");
                       printf("for any further details contact - 9988770\n");
                          count--;
                          printf("number of seats avilable -%d\n",count);
                            process++;
                        break;
                    }
          case 3: if(choiceg==3) {
              printf("you have to pay fare\n");
              printf("enter the phone number\n-");
              scanf("%d",&ophone_num);
              printf("complete your payment--\n");
               printf("1.upi\n");
               printf("2.debit card\n");
               printf("3.credit card\n"); 
               printf("4.at the counter\n"); 
               printf("enter the choicep-");
               scanf("%d",&choicep);
               switch(choicep) {
                   case 1: if(choicep==1)  {
                       printf("enter the upi number-");
                       scanf("%d",&oupi);
                       printf("enter the last thing-");
                       scanf("%s",&last_thing);
                       printf("enter the otp-");
                       scanf("%d",&otpuo);
                       if (ootp==otpuo)  {
                           printf("your payment is succesfull\n");
                          printf(" your bus number - %d\n",b[0].bus_number);
                          printf("your seat - %d\n",b[0].seat);
                          printf("pickup at bustand, 'stand-4'\n");
                          printf("timings- pickup : 13:00\n");
                          printf("          drop  : 17:05\n");
                    printf("for any further details contact - 9988770\n");
                         count--;
                          printf("number of seats avilable -%d\n",count);
                            process++;
                       } else {
                           printf("--your payment is failed, try again--\n");
                       }
                       break;
                   }
                    case 2: if(choicep==2) {
                        printf("enter your debit card number-\n");
                        printf("enter the otpd");
                        scanf("%d",&otpdo);
                         if (ootp==otpdo)  {
                           printf("your payment is succesfull\n");
                          printf(" your bus number - %d\n",b[0].bus_number);
                          printf("your seat - %d\n",b[0].seat);
                          printf("pickup at bustand, 'stand-4'\n");
                          printf("timings- pickup : 13:00\n");
                          printf("          drop  : 17:05\n");
                     printf("for any further details contact - 9988770\n");
                          count--;
                         printf("number of seats avilable -%d\n",count);
                            process++;
                       } else {
                           printf("--your payment is failed, try again--\n");
                       }
                       break;
                   }
                     case 3: if(choicep==3) {
                         printf("enter the credit card number-\n");
                         scanf("%d",&credit_o);
                         printf("enter the otpco-");
                         scanf("%d",&otpco);
                         if (ootp==otpco)  {
                           printf("your payment is succesfull\n");
                          printf(" your bus number - %d\n",b[0].bus_number);
                          printf("your seat - %d\n",b[0].seat);
                          printf("pickup at bustand, 'stand-4'\n");
                          printf("timings- pickup : 13:00\n");
                          printf("          drop  : 17:05\n");
                    printf("for any further details contact - 9988770\n");
                         count--;
                          printf("number of seats avilable -%d\n",count);
                            process++;
                       } else {
                           printf("--your payment is failed, try again--\n");
                       }
                       break;
                   }
                      case 4: if(choicep==4) {
 printf("attended to bustand counter before 13:00pm, so pay at the counter and collect your ticket at the counter itself");
 count--;
  printf("number of seats avilable -%d\n",count);
    process++;
    break;
                      }
                       }          //switch choice p
                       break;
                    }             //choiceg
               }                 // switch choiceg
        break;  // for case 1;
}             //case 1
        case 2: if(process==0 && choiceo==2) {
            printf("--no bookings--\n");
            break;
        } else {
            printf("bus number-%d\n",b[0].bus_number);
             printf("seat number-%d\n",b[0].seat);
             printf("first name-%s\n",b[0].first_name);
              printf("first name-%s\n",b[0].last_name);
             printf("phone num-%d\n",phone_num);
             printf("id-%d\n",id);
              printf("pickup at bustand, 'stand-4'\n");
                          printf("timings- pickup : 13:00\n");
                          printf("          drop  : 17:05\n");
                    printf("for any further details contact - 9988770\n");
                         break;
        }
          case 3: if(choiceo==3) {
               printf("do you want to cancel the tickets\n");
              printf("yes\n");
              printf("no\n");
              printf("enter the choicec-");
              scanf("%d",&choicec);
              switch (choicec) {
                  case 1: if(choicec==1) {
                      printf("--tickets has been cancelled--\n");
                      printf("the  details of cancelled ticket is-\n");
                      printf("bus number-%d\n",b[0].bus_number);
             printf("seat number-%d\n",b[0].seat);
             printf("first name-%s\n",b[0].first_name);
              printf("first name-%s\n",b[0].last_name);
             printf("phone num-%d\n",phone_num);
             printf("id-%d\n",id);
              printf("pickup at bustand, 'stand-4'\n");
                          printf("timings- pickup : 13:00\n");
                          printf("          drop  : 17:05\n");
                    printf("for any further details contact - 9988770\n");
                    cancel++;
                    count++;
         printf("in bus -%d, remaining seats-%d\n",count,b[0].bus_number);
                         break;
          } 
          case 2: if(choicec==2) {
              printf("--no cancellations--\n");
                     break;
                 }
          }    //switch (choicec)
          break;
          }     //end of choiceo 3 (cancell) 
          case 4: if(choiceo==4) {
              printf("--thank you for choosing our app--\n");
              break;
          }
}             //switch (choiceo)
}             //loop
}             //add options

    int main() {
        app_options();
     return 0;
    }
       
