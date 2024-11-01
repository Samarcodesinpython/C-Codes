#include <stdio.h>

int main(){
    int area, pi = 3.14, radius;
    printf("Enter the radius of circle : ");
    scanf("%d", &radius);
    area = pi * radius*radius;
    printf("The area of the circle with the given radius of %d is : %d", radius, area);
    return 0;
}