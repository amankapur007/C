#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[20];
    int age;
    double value;
};
int main()
{
    struct Student student1;
    //student1.name="Aman";
    strcpy(student1.name,"Aman");
    student1.age=29;
    student1.value=9.0;
    printf("Name is %s \n",student1.name);
    return 0;
}
