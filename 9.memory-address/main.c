#include <stdio.h>
#include <stdlib.h>

int main(){

    int age=27;
    double gpa=9.5;
    char grade='A';
    printf("age: %p\ngpa: %p\ngrade %p", &age, &gpa, &grade);
    return 0;
}