#include <stdio.h>
#include <stdlib.h>


int main(){
    double num1;
    double num2;
    char op;

    printf("Enter the first number  - ");
    scanf(" %lf",&num1);
    printf("Enter the second number - ");
    scanf(" %lf",&num2);
    printf("Enter the operation     - ");
    scanf(" %c",&op);
    if(op=='+'){
        printf("Answer is %f \n",num1+num2);
    }else if(op=='-'){
        printf("Answer is %f \n",num1-num2);
    }else if(op=='*'){
        printf("Answer is %f \n",num1*num2);
    }else if(op=='/'){
        printf("Answer is %f \n",num1/num2);
    }else{
        printf("Invalid operation");
    }
    return 0;
}
