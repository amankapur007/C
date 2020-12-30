#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'A';
    switch(grade){
    case 'A':
        printf("You did great");
        break;
    case 'B':
        printf("You did better");
        break;
    case 'C':
        printf("You did worst");
        break;
    default:
        printf("Invalid grade");
        break;
    }
    return 0;
}
