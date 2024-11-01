#include <stdio.h>
int main(){
    int marks[] = {12,34,45,56,67,78};
    int* ptr = marks;
    for(int i = 0; i <= 5; i++){
    printf("The address is : %u\n", *ptr);
    ptr++;
    }
    return 0; 
}