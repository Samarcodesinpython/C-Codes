#include <stdio.h>

int main(){
    int a[1][6][7];
    for(int i = 0 ; i < 1; i++){

        for(int j = 0 ; j < 6; j++){

            for(int k = 0 ; k < 7; k++){
                
                printf("%u \n", &a[i][j][k]);
            }
        }   
    }
    
    return 0;
}