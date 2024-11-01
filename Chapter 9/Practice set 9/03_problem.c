#include <stdio.h>

typedef struct employee{
    int code;
    float salary;
    char name[];
}emp;

int main(){
    emp e1;
    emp* ptr = &e1;

    ptr -> code = 54;
    ptr -> salary = 5454545.45;

printf("%d %f ", ptr -> code,ptr -> salary );

    return 0;
}