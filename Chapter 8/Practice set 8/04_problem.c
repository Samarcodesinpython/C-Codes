#include <stdio.h>
#include <string.h>

char strcopy(char str[], char str2[]){ 
    int a = strlen(str);
    for(int i = 0 ; i < a; i++){
        str2[i] = str[i];
    }
    str2[strlen(str)] = '\0';
}

int main(){

    char str1[] = "Samar";
    char str2[100];

    strcopy(str1,str2);

    printf("The new string is : %s %s", str1, str2);

    return 0;
}