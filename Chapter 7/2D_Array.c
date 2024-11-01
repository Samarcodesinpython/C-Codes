#include <stdio.h>

int main(){
    int arr[3][2], i, j;
    // printf("Enter the number of elements : \n");
    // scanf("%d", &n);

    for(i = 0; i<3; i++){
        for(j = 0; j<2; j++){
        printf("Enter an Element : \n");
        scanf("%d", &arr[i][j]);
    }
    }
    for(i = 0; i<3; i++){
        for(j = 0; j<2; j++){
        printf("Entered Elements of array are : %d\n", arr[i][j]);
    }
    }
}