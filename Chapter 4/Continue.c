#include <stdio.h>

int main(){
    int i = 0;
    for( i; i < 15; i ++){
        if(i == 6){
            continue; // breaks the for loop
        }
        printf("Value of i is : %d\n", i);
    }
}