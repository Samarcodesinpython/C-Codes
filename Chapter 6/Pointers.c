#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i;     // This store the address of i 
    int** k = &j;

    printf("The address of i is : %u\n", j);
    printf("The value at address of i is : %u\n", *j);
    printf("The value at address of i is : %u\n", **k);
    printf("The value at address of i is : %u\n", *(&i));
    printf("The value at address of i is : %u\n", *(&j));
    printf("The value at address of i is : %u", *(&k));
    
    
    return 0;
}