// This program is with customizable inputs 

#include <stdio.h>

int main(){
    int arr[3][10];
    int n1, n2, n3;

    printf("Enter the three number  : ");
    scanf("%d  %d  %d", &n1 , &n2 , &n3 );
    int product[] = {n1,n2,n3};
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<10 ; j++){
            arr[i][j] = product[i] * (j + 1); 
    }
    }
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<10 ; j++){
            printf("The table is : %d\n", arr[i][j]);

    }
    printf("\n");
    }
    return 0;
}