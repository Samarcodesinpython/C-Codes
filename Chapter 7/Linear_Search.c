// LINEAR SEARCH

#include <stdio.h>

int main(){
    int arr[100];
    int n;
    int x;
    int a = 0;

    printf("Enter a Number : ");
    scanf("%d", &n);

    printf("Enter a number to find it : ");
    scanf("%d", &x);

    printf("Enter array elements : ");

    for(int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nThe Entered array elements are : ");

    for(int i = 0; i < n ; i++){
        printf("%d ", arr[i]);
    }

    for(int i = 0; i < n ; i++){
        if(x == arr[i]){
           a++;
        }

    }

    if(a == 1){
        printf("Number Found !!");
    }

    else{
        printf("NUMBER NOT FOUND !!");
    }

    return 0;
}   