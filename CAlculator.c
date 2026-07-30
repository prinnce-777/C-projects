#include <stdio.h>
int main(){
float a;
float b;
int  option;
 printf("option 1-add\n");
 printf("option 2-subtract\n");
 printf("option 3-multiply\n");
 printf("option 4-divide\n");
 printf("enter the option-");
 scanf("%d",&option);
 if (option>4) {
     printf("enter the options only mentioned above");
     return 0;
 } else {
     printf("your option is=%d\n",option);
 }
 printf("enter the value of a-");
 scanf("%f",&a);
 printf("enter the value of b-");
 scanf("%f",&b);
 if(b==0){
     printf("zero is not applicable for denominator(b)\n");
     return 0;
 } else {
     printf("denominator(b) is non zero number,ok\n");
 }
 printf("a=%f, b=%f\n",a,b);
 switch (option){
     case 1:printf("%f + %f = %f",a,b,a+b);
     break;
     case 2:printf("%f - %f = %f",a,b,a-b);
     break;
     case 3:printf("%f * %f = %f",a,b,a*b);
     break;
     case 4:printf("%f / %f = %f",a,b,a/b);
     break;
 }
 }