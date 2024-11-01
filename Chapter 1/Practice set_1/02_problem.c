#include <stdio.h>
int main(){
    int area, lenght, width;
    printf("Enter the lenght of the rectangle");
    scanf("%d", &lenght);
    printf("Enter the width of the rectangle");
    scanf("%d", &width);
    area = lenght * width;
    printf("The area of the rectangle for the given lenght %d and width %d is : %d", lenght, width, area);
    return 0;
}