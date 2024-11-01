#include <stdio.h>

typedef struct vector{
    int i;
    int j;
}vec;

int main(){
    struct vector v = {1,2};
    
    printf("The vector is : %di + %dj", v.i, v.j);
    
    return 0;
}