#include <stdio.h>

int main(){
    int arr[10], n ;

    printf("Enter a number  : ");
    scanf("%d", &n);

    for(int i = 1; i<=n ; i){
        printf("The table of 5 is : 5 X %d = %d\n", i, 5*i);
        i++;
    }
    return 0;
}   