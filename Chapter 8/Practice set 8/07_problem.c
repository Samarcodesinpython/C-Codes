#include <stdio.h>
#include <string.h>

int main(){
    char c = 's';
    char str[100] = "samar";
    int count = 0;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c){
            count ++;
        }
    }
    printf("%d\n", count);
    printf("%s", str);

    return 0;
}