#include <stdio.h>

int address(int* i){
    
    printf("The address of i is %u\n",i);
    return 5;
}

int main(){
    
    int a = 10;
    int *i = &a;
    printf("The Address of i is : %u\n", &i);

    address(i);

}