#include <stdio.h>

int main(){
    int marks[10];

    for(int i =0; i <= 10; i++){
        printf("Enter the number : ");
        scanf("%d", &marks[i]);
    }
    for(int i =0; i <= 10; i++){
        printf("The Entered Number are : %d\n", marks[i]);
    }
}