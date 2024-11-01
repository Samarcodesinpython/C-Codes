// BINARY SEARCH

#include <stdio.h>

int binarysearch(int a[], int n, int target){

    int low = 0;
    int high = n - 1;

    while( low <= high){

        int mid = low + (high - low)/2;

        if(a[mid] == target){
            return mid;
        }
        else if(a[mid] > target){
            low = mid - 1;
        }
        else if(a[mid] > target){
            low = mid + 1;
        }

    }

    return -1;

}

void Bubblesort(int a[], int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = a[j];
            }
        }
    }

}

int main(){
    
    int n, target, result;

    printf("Enter a number to search in the array : ");
    scanf("%d", &target);

    printf("Enter the number of elements :  ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements : ");
    for(int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }

    Bubblesort(arr, n);

    printf("The sorted array is : ");
    for(int i = 0; i < n ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    result = binarysearch(arr, n, target);

    if(result == -1){
        printf("Element not found !!");
    }
    else{
        printf("Element Found at index : %d", result);
    }

    return 0;
}