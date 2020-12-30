#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age=30;//integer variable store integer value
    printf("Age's memory address %p \n",&age);//&age is pointer data
    //Pointer is type of data that store memory address just like int , double and char
    //Create pointer variable 
    int *pAge = &age;
    printf("%p \n",pAge);
    //Deferencing pointer
    printf("%d \n",*pAge);
    return 0;
}
