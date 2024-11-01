#include <stdio.h>
#include <stdio.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(10 * sizeof(int));
    

    for(int i = 1; i<11; i++){
        ptr[i] = 7 * i;
        printf("%d\n-", ptr[i]);
    }

    ptr = (int*)realloc(ptr, 15 * sizeof(int));

    for(int i = 1; i<16; i++){
        ptr[i] = 7 * i;
        printf("%d\n", ptr[i]);
    }

    return 0;
}