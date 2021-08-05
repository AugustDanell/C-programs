#include <stdio.h>

/* is_sorted
*  Uses pointer arithmetics to discern if an array is sorted. We are dereferencing
*  value after value, comparing it to the previous one until the whol array is 
*  exhausted.
*/

int is_sorted(int* arr, int n){
    int prev = *arr;                // Dereferencing the value.
    for(int i = 1; i < n; i++){
        int current = *(arr + i);   // Dereferencing value after value.
        if(prev > current){
            return 0;
        }
        
        prev = current;
        
    }
    
    return 1;
}

void bubble_sort(int* arr, int n){

}

void insertion_sort(int* arr, int n){
    
}

void selection_sort(int* arr, int n){
    
}

int main()
{   
    
    int size = 5;
    // User specified size:
    // printf("Hello, how big of an array do you want?\n");
    // int size = 0;
    // scanf("%d", &size);
    
    
    
    int arr[] = {5, 2, 1, 3, 4};
    printf("%d", is_sorted(arr, size));
    
    int* p = arr;
    
    return 0;
}
