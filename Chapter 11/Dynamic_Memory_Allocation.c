// MALLOC

#include <stdio.h>
#include <Stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
 
    ptr = (int* ) malloc(n * sizeof (int));

    printf("%d", ptr[0]=3);

    return 0;
}