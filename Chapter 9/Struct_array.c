#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[100];
};

int main(){
    
    struct employee arr[100];

    arr[0].code = 50;
    arr[1].code = 100;

    strcpy(arr[2].name,"samar");
    strcpy(arr[3].name,"Jamal");

    arr[4].salary = 250000.00;
    arr[5].salary = 25000.00;
    
    printf("%d\n %d\n", arr[0].code, arr[1].code);
    printf("%s\n %s\n", arr[2].name, arr[3].name);
    printf("%f\n %f\n", arr[4].salary, arr[5].salary);

    return 0;
}