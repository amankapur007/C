#include<stdio.h>
#include<stdlib.h>

void passByValue(int x){
    x = x*2;
}

void passByRef(int *x){
    *x = *x*2;
}

int main()
{
    int x =10;
    passByValue(x);
    printf("Value of x : %d \n",x);
    passByRef(&x);
    printf("Value of x : %d \n",x);
    return 0;
}
