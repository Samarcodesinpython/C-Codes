#include <stdio.h>
#include <Stdlib.h>

int main(){
    int n;
    int* ptr;
    int* ptr1;

    scanf("%d", &n);
 
    ptr = (int* ) malloc(n * sizeof (int));

    printf("%d", ptr[0]=3);

    ptr1 = (int* )realloc(ptr, 10 * sizeof(int));

    return 0;
}