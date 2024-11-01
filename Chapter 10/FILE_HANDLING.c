#include <stdio.h>

int main(){
    
    FILE * ptr;
    ptr = fopen("samar.txt", "r");
    int n;

    fscanf(ptr, "%d", &n);
    printf("%d", n);

    fscanf(ptr, "%d", &n);
    printf(" %d", n);

    return 0;
}