#include <stdio.h>

int main(){
    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);

    if(marks <= 100 && marks >= 90){
        printf("Your grades are : A");
    }
    if(marks <= 90 && marks >= 80){
        printf("Your grades are : B");
    }
    if(marks <= 80 && marks >= 70){
        printf("Your grades are : C");
    }
    if(marks <= 70 && marks > 50){
        printf("Your grades are : D");
    }
    if(marks <= 50 && marks >= 40){
        printf("You grades are : f");
    }
    else{
        printf("You Failed The Exam!!");
    }
}