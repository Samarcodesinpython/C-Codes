#include <stdio.h>

int main(){
    FILE * ptr;
    ptr = fopen("Samar1.txt","r");
    int n;

    fscanf(ptr, "%d", &n);
    printf("%d", n);

    return 0;
}