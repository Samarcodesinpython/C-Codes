#include <stdio.h>

int main(){
    int volume, pi = 3.14, radius, height;
    printf("Enter the radius of circle : ");
    scanf("%d", &radius);
    printf("Enter the height of circle : ");
    scanf("%d", &height);
    volume = pi * radius * radius * height;
    printf("The volume of the Cylinder with the given radius of %d and a height of %d is : %d", radius, height, volume);
    return 0;
}
