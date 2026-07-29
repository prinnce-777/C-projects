#include <stdio.h>
#include <string.h>                  //type string.h             
struct SD{
    char name[20];
    int Tmarks;
    float cgpa;
    char grade;
};
int main(){
    struct  SD s1;
    printf("enter the name-");
    scanf("%s",&s1.name);
    printf("enter the tmarks-");
    scanf("%d",&s1.Tmarks);
    printf("enter the cgpa-");
    scanf("%f",&s1.cgpa);
    printf("enter the grade-");
    scanf(" %c",&s1.grade);           // gap infront of %c
    
    printf(" the student details:\n");
    
    printf("name-%s\n",s1.name);
    printf("Tmarks-%d\n",s1.Tmarks);
    printf("cgpa-%f\n",s1.cgpa);
    printf("grade-%c\n",s1.grade);
    
    struct SD s2;
    printf(" the student 2 details:\n");
    printf("enter the name-");
    scanf("%s",&s2.name);
    printf("enter the tmarks-");
    scanf("%d",&s2.Tmarks);
    printf("enter the cgpa-");
    scanf("%f",&s2.cgpa);
    printf("enter the grade-");
    scanf(" %c",&s2.grade);
    
    printf("name-%s\n",s2.name);
    printf("Tmarks-%d\n",s2.Tmarks);
    printf("cgpa-%f\n",s2.cgpa);
    printf("grade-%c",s2.grade);
}
