#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[];
};

int main(){
    struct employee e1;
    e1.code = 123345;
    e1.salary = 25000.00;
    strcpy(e1.name, "Samar");

    printf("  %d\n %f\n %s", e1.code, e1.salary, e1.name);
    return 0;
}