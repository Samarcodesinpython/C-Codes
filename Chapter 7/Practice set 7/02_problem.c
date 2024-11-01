#include <stdio.h>

void printarray(int a[], int n){
    for(int i = 0 ; i < n; i ++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n){
    for( int i = 0 ; i < n/2 ; i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

int main(){
    int n, a[100] = { 1,2,3,4,5,6,7,8,9};
    printf("Enter a number : ");
    scanf("%d", &n);
    
    printarray(a,n);
    reverse(a, n);
    printarray(a,n);
    return 0;
}