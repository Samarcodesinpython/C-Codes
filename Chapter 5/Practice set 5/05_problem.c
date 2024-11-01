#include <stdio.h>

int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1) + n;
}
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int sum1 = sum(n);

    printf("The sum of the given number is : %d", sum1);
    return 0;
}