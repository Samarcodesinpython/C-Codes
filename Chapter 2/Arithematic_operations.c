#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    int sum = a + b;
    int difference = b - a;
    int product = a * b;
    float division = a / b;
    float remainder = a % b;

    printf("The sum of %d and %d is : %d\n", a, b, sum);
    printf("The difference of %d and %d is : %d\n", a, b, difference);
    printf("The product of %d and %d is : %d\n", a, b, product);
    printf("The division of %d and %d is : %f\n", a, b, division);
    printf("The remainder of %d and %d is : %f\n", a, b, remainder);
    return 0;
}