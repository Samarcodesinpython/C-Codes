#include <stdio.h>

int average(int a, int b, int c){
    int avg = (a + b + c)/3;
    return avg;
}

int main(){
    int a = 5, b= 10, c = 8;
    printf("%d", average(a,b,c));
}