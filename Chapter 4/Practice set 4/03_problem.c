#include <Stdio.h>

int main(){
    int sum = 0, n, i = 1;

    while( i < 11){
        sum = sum + i;
        i++;
        printf("The sum of n Natural numbers is %d\n", sum);
    }
    return 0;
}