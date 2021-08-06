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
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertion_sort(int* arr, int n){
    
    
}

void selection_sort(int* arr, int n){
    for (int i = 0; i < n; i++){
        int min_index = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    
}

int main()
{   
    
    int size = 5;
    // User specified size:
    // printf("Hello, how big of an array do you want?\n");
    // int size = 0;
    // scanf("%d", &size);
    
    
    
    int arr[] = {5, 2, 1, 3, 4};
    bubble_sort(arr, size);
    if(is_sorted(arr, size)){
        printf("Bubble sort ok!\n");
    }
    
    int arr2[] = {5, 2, 1, 3, 4};
    selection_sort(arr2, size);
    if(is_sorted(arr2, size)){
        printf("Selection sort ok!\n");
    }
    
    int arr3[] = {5, 2, 1, 3, 4};
    insertion_sort(arr3, size);
    if(is_sorted(arr3, size)){
        printf("Insertion sort ok!\n");
    }
    
    int* p = arr;
    
    return 0;
}
