#include <stdio.h>
int count(int a[]){
    int count = 0;
    for(int i = 0; i < 10; i++){
        if(a[i]%2 != 0){
            count ++;
        }
    }
    return count;
}
int main(){
    int n, countodd = 0;
    int a[10]= {1,2,3,4,5,5,6,6,73};
    printf("The number of odd number in the array is  : %d\n", count(a));
    return 0;
}