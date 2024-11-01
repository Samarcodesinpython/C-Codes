#include <stdio.h>

int* sum(int x, int y){
    int sum = x + y;
    int* ptr = &sum;
    return ptr;
}

int* average(int x, int y){
    int avg = (x + y) / 2;
    int* ptr = &avg;
    return ptr;
}

int main(){
    int x = 10, y = 20;
    int* ptr;
    int* ptr1;

    // int a = sum(x,y);
    // int b = average(x,y);

    // printf("The sum of two numbers is : %d\n", a);
    // printf("The average of two numbers is : %d", b);
    
    ptr = sum(x,y);
    ptr1 = average(x,y);

    printf("The Address of sum is %u and of avg is %u ", ptr, ptr1);
    return 0;

}