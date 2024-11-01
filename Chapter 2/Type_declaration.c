#include <stdio.h>

int main(){
    int a, b, c;
    a = 10;
    b = 15;
    c = 18;
    float e, f, g;
    e = 1.000;
    f = 1.500;
    g = 1.800;
    
    //The %d is for integer vaules
    //The %f is for decimal vaules

    printf("The value of a, b, c is %d %d %d\n", a, b, c);
    printf("The value of e, f, g is %f %f %f", e, f, g);

    return 0;
}