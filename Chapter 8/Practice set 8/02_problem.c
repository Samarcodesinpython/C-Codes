#include <stdio.h>

int main(){
    char s1[10] = "Samar";
    int count = 0;

    for(int i = 0; s1[i] !='\0'; i++){
        count++;
    }
    printf("%d", count);
    return 0;
}