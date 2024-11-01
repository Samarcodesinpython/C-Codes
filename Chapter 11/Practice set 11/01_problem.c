#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *ptr;

    ptr = (int* )malloc(6 * sizeof(int));

    ptr[0] = 45;
    ptr[2] = 47;
    ptr[3] = 467;
    ptr[4] = 4879;
    ptr[5] = 459;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
    printf("%d\n", ptr[5]);


    return 0;
}