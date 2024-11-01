#include <stdio.h>

int main(){
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);
    
    if (ch >= 97 && ch <= 122){
        printf("You entered a lower case character !!\n");
    }
    else{
        printf("You entered a upper case character");
    }
    return 0;
}