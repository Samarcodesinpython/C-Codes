#include <stdio.h>

int fact(int n){
    if( n == 0 || n == 1)
        return 1;

    return fact(n - 1) * n;

}
int main(){
    int a = 5;
    printf("%D",fact(a));
}