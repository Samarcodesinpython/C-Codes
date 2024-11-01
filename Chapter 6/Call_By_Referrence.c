#include <stdio.h>

int sum(int* a , int* b){
    *a = 5;
    return *a + *b;
}

int main(){
    int x=6,y=9;
    
    printf("The sum of x and y is : %d",sum(&x,&y));

    return 0;
}