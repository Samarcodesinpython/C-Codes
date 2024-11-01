#include <stdio.h>

int sum(int a, int b); //Function Prototype

int sum(int a, int b){  // Function Definition
    printf("The sum of two given number is : %d\n", a + b);
    return a + b;
}
int main(){
    int a = 5;
    int b = 10;

    sum(a,b);   //Function Call
}