#include <stdio.h>

typedef struct vector{
    int i;
    int j;
}V;

V sumvector(V v1, V v2){
    V v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main(){
    
    V v1 = {6,5};
    V v2 = {7,4};
    V v3 = sumvector(v1,v2);

    printf("%d %d", v3.i, v3.j);


    return 0;
}