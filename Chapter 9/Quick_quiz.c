// using structure print name, coide, anfd salary of three employees
#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[100];
};

int main(){

    struct employee e1, e2, e3;

    // Details of employee 1
    printf("Enter the Name of the empolyee : ");
    scanf("%s", &e1.name);

    printf("Enter the code of the employee : ");
    scanf("%d", &e1.code);

    printf("Enter the Salary of the employee : ");
    scanf("%f", &e1.salary);

    printf("%s\n%d\n%f\n", e1.name, e1.code, e1.salary);

    // Details of employee 2
    printf("Enter the Name of the empolyee : ");
    scanf("%s", &e2.name);

    printf("Enter the code of the employee : ");
    scanf("%d", &e2.code);

    printf("Enter the Salary of the employee : ");
    scanf("%f", &e2.salary);

    printf("%s\n%d\n%f\n", e2.name, e2.code, e2.salary);

    // Details of employee 3
    printf("Enter the Name of the empolyee : ");
    scanf("%s", &e3.name);

    printf("Enter the code of the employee : ");
    scanf("%d", &e3.code);

    printf("Enter the Salary of the employee : ");
    scanf("%f", &e3.salary);

    printf("%s\n%d\n%f", e3.name, e3.code, e3.salary);

    return 0;
}