#include <stdio.h>
int main(){
    int prime = 0;
    int i = 2, n;

    printf("Enter a Number : ");
    scanf("%d", &n);

    for(i= 2; i <= n; i++ ){
        if(n % 2 == 0){
            prime = 1;
        }
    }
    if(prime){
        printf("The ginven number is not prime");
    }
    else{
        printf("The Given number is prime");
    }
}