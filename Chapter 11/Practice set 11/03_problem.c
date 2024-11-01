#include <stdio.h>
#include <Stdlib.h>

int main(){
    int n = 10;
    int* ptr;
    int* ptr1;

    // scanf("%d", &n);
 
    ptr = (int* ) malloc(n * sizeof (int));

    printf("%d", ptr[0]=3);

    n = 90;
    ptr1 = (int* )realloc(ptr, 90 * sizeof(int));

    return 0;
}