#include <stdio.h>

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;

}
int main(){
    int x = 6, y= 9;
    int temp;

    swap(&x,&y);

    printf("the new value of x and y is : %d, %d", x, y);
}