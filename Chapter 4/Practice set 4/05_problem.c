#include <stdio.h>

int main(){
    int product= 1, n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for( int i = 1; i <= n; i++){
        product *= i;
    }
    printf("The Factorial of %d is : %d", n,product);
    return 0;

}