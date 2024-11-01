// Multiplication of Number Given by user

include <stdio.h>

int main(){
    int n;
    printf("Enetr a Number : ");
    scanf("%d", &n);

    for(int i = 1; i < 11; i++){
        int product = i * n;
        printf("The Product of %d x %d = %d \n", n, i, product);
    }
    return 0;
}