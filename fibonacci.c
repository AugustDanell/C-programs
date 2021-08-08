#include <string.h>  
#include <stdio.h>
#include <stdlib.h>

struct queue_node{
  int val;
  struct node* next_val;
};


int naive_fibonacci(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 1;
    }
    else{
        return naive_fibonacci(n-2) + naive_fibonacci(n-1);
    }
}

int main()
{   
    int n;
    printf("Enter in a fibonacci number: \n");
    scanf("%d", &n);
    printf("Your fibonacci number is: %d", naive_fibonacci(n));
    
    
    return 0;
}
