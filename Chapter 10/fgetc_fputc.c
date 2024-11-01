#include <stdio.h>

int main(){
    
    FILE * ptr;
    ptr = fopen("samar.txt", "a");

    // Only works in read mode
    // char c = fgetc(ptr);
    // printf("%c", c);

    // Works in write, append
    fputc('c', ptr);
    fclose(ptr);

    return 0;
}