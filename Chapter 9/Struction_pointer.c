#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[];
};

int main(){
    
struct employee e1;
e1.code = 12;
struct employee * ptr;
ptr = &e1;

printf("%d", (ptr) -> code);

    return 0;
}