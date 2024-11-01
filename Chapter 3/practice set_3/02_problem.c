#include <stdio.h>

int main(){
    int Maths, Physics, Dsa;
    printf("Enter Maths MArks : ");
    scanf("%d", &Maths);
    printf("Enter Physics MArks : ");
    scanf("%d", &Physics);
    printf("Enter Dsa MArks : ");
    scanf("%d", &Dsa);

    int avg = (Maths + Physics + Dsa)/3;

    if(avg > 40){
        if(Maths > 33){
            printf("Passed in Maths\n");
        }
        if(Physics > 33){
            printf("Passed in Physics\n");
        }
        if (Dsa > 33){
            printf("Passed in Dsa\n");
        }
        printf("You Passed the Exams!!");
    }
    else{
        printf("You Failed the Exam!!");
    }

    return 0;
}