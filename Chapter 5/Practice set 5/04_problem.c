#include <Stdio.h>

int fibonacci(int n){
    if(n==1||n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter a  number : ");
    scanf("%d", &n);

    int fib = fibonacci(n);
    printf("The Fibonacci serires till %dth place is : %d", n, fib);
    return 0;
}