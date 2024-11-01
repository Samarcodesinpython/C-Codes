#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float*ptr;
    float n;

    printf("Enter something : ");
    scanf("%f", &n);
    
    ptr = (float*) calloc(30, sizeof (float));

    ptr[0] = 45.8945;
    ptr[1] = 45.8945;
    ptr[2] = 45.8945;
    ptr[3] = 45.8945;
    ptr[4] = 45.8945;

    printf("%f\n", ptr[0]);
    printf("%f\n", ptr[1]);
    printf("%f\n", ptr[2]);
    printf("%f\n", ptr[3]);
    printf("%f\n", ptr[4]);

    return 0;
}