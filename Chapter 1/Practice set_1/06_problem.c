#include <stdio.h>

int main(){
    float simple_interest;
    int Principle, Rate , interest;

    printf("\nEnter the principle : ");
    scanf("%D", &Principle);
    printf("Enter the Rate : ");
    scanf("%D", &Rate);
    printf("Enter the interest : ");
    scanf("%D", &interest);

    simple_interest = (Principle * Rate * interest)/100;
    printf(" The Simple Interst for the given Value of\n Principle = %d\n Rate = %d\n Interest = %d is : %f", Principle, Rate, interest, simple_interest);
    return 0;
}