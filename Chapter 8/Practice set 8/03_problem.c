#include <stdio.h>

char * slice(char str[], int m, int n){
char * ptr1 = &str[m];
char * ptr2 = &str[n];

str = ptr1;
str[n] = '\0';

return str;

}

int main(){
    
    char str[100] = "Samar Jamal";

    printf("Teh sliced string is : %s", slice(str, 2, 6));

    return 0;
}