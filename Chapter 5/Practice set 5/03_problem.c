#include <stdio.h>

float force(int mass){
    return mass * 9.8;
}

int main(){
    int mass;
    printf("Enter the mass : ");
    scanf("%d", &mass);

    float force1 = force(mass);
    printf("The force after the calculation is %f", force1);
    return 0;
}