#include <stdio.h>

int main(){
    int sum = 0, i = 0, n;
    printf("Enter number");
    scanf("%d", &n);

    for(i = 0; i <=10; i++){
        int product = i * n;
        printf("The product of %d X %d = %d\n", n,i,product);
        sum = sum + product;
    }
        printf("The sum of the table is : %d\n", sum);
    
}