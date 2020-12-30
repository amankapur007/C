#include<stdio.h>
#include<stdlib.h>

//Print
int main(){
    int age;
    char name[20];
    char fname[20];
    char lname[20];
    char grade;
    double gpa;
    char fullName[20];
   printf("Enter the age - ");
   scanf(" %d",&age);
   printf("Enter the name - ");
   scanf(" %s",&name);
   printf("Enter the grade - ");
   scanf(" %s",&grade);
   printf("Enter the gpa - ");
   scanf(" %lf",&gpa);
   fflush(stdin);//This is required otherwise below line does not ask for the input
   printf("Enter full Name - ");
   fgets(fullName, 20, stdin);
   printf("Enter the full name again - ");
   scanf(" %s%s",&fname,&lname);
   printf("Name is %s , age is %d have gpa of %f and has achieved grade %c (%s) \n",name, age,gpa, grade, fullName);
   printf("Full name is %s %s \n",fname,lname);
}