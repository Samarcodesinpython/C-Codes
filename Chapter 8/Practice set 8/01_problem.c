#include <stdio.h>

int main(){
    int s1[4];
    int s2[10];
    
    printf("Enter a string : ");
    for(int i = 0; i <3; i++){
    scanf("%c",s1[i]);
    fflush(stdin);
    }
    s1[3] = '\0';

    printf("Enter a string : ");
    scanf("%s",s2);
    
    printf("The string Entered in s1 is : %c\n", s1); 
    printf("The string Entered in s2 is : %s", s2); 
    return 0;
}