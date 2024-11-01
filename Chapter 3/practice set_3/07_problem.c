#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the Value of a : ");
    scanf("%d", &a);
    printf("Enter the Value of b : ");
    scanf("%d", &b);
    printf("Enter the Value of c : ");
    scanf("%d", &c);
    printf("Enter the Value of d : ");
    scanf("%d", &d);
    
    if(a > b && a > c && a > d){
        printf("A is the greatest");
    }
    if(b > a && b > c && b > d){
        printf("B is the greatest");
    }
    *if(c > b && c > a && c > d){
        printf("C is the greatest");
    }
    if(d > a && d > c && d > b){
        printf("D is the greatest");
    }
    else{
        printf("Invalid Number");
    }

    return 0;
}