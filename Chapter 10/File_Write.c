#include <stdio.h>

int main(){
    
FILE * fptr;
    fptr = fopen("samar.txt", "w");
    int n = 678 ;

    fprintf(fptr, "%d", n);

    fclose(fptr);
    return 0;
}