#include <stdio.h>

int main(){
    FILE * ptr;
    ptr = fopen("Samar1.txt","r");
    int n;
    int product;

    fscanf(ptr, "%d\n", &n);
    printf("The Number in file is : %d\n", n);

    printf("The table of the given number is : \n");

    for(int i=1; i <=10  ; i++){
        product = n*i;
        printf("%d x %d = %d\n", n,i,product);
    }

    return 0;
}