#include <stdio.h>

typedef struct employee{
    int code;
    float salary;
    char name[];
}emp;

int main(){
    // typedef can also be done like this : 
    // typedef struct employee e1;

    emp e1;

    e1.code = 2323;
    printf("The code is : %d", e1.code);
    
    return 0;
}