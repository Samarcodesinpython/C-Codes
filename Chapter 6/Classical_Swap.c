#include <stdio.h>

int main(){
    int  x = 6, y= 9;
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("The new value of x is %d and y is %d", x,y);
}