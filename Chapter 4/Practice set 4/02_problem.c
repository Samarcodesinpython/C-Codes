#include <stdio.h>

int main(){
    int n;
    printf("Enetr a Number : ");
    scanf("%d", &n);

    for(int i = 10; i > 0; i--){
        int product = i * n;
        printf("The Product of %d x %d = %d \n", n, i, product);
    }
    return 0;
}