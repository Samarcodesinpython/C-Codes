#include <stdio.h>

int main(){
    int year;

    printf("Enter the Year : ");
    scanf("%d", &year);

    if ( year % 4 == 0){
        printf("You Entered a Leap Year!!");
    }
    else {
        printf("Not a leap year !!");
    }
    return 0;
}