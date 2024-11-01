#include <stdio.h>
#include <Stdlib.h>

int main(){
    int n;
    float *ptr;

    printf("Enter something : ");
    scanf("%d", &n);


    ptr = (float* ) malloc(n * sizeof (float));

    ptr[0] = 5.000;
    ptr[1] = 5.03;
    ptr[2] = 5.005430;
    ptr[3] = 5.000435;
    ptr[4] = 5.000435634;

    printf("%f\n", ptr[0]);
    printf("%f\n", ptr[1]);
    printf("%f\n", ptr[2]);
    printf("%f\n", ptr[3]);
    printf("%f\n", ptr[4]);

    return 0;
}