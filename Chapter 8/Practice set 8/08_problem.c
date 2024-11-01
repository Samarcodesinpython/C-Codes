#include <stdio.h>
#include <string.h>

int main(){
    char c = 'y';
    char str[100] = "samar";
    int count = 0;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c){
            count = 1;
        }
    }
    if(count == 1){
        printf("Character Found\n");
    }
    else{
        printf("Character not Found!!\n");
    }
    printf("%d\n", count);
    printf("%s", str);

    return 0;
}