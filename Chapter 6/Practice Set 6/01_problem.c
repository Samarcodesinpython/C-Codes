#include <stdio.h>

int change(int* a){
    *a = (*a * 10);
    return *a;
}

int main(){
    int a = 6;

    printf("The changed value of a is : %d", change(&a));

    return 0;
}