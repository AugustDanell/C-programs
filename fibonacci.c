#include <string.h>  
#include <stdio.h>
#include <stdlib.h>



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


int bot_up_fibonacci(int n){
    int n1 = 1;
    int n2 = 1;
    
    for(int i = 2; i <n; i++){
        int temp = n2;
        n2 = n1 + n2;
        n1 = temp;
    }
    
    return n2;
}

int main()
{   
    int n;
    printf("Enter in a fibonacci number: \n");
    scanf("%d", &n);
    printf("Your naive fibonacci number is: %d\n", naive_fibonacci(n));
    printf("Your bottom-up fibonacci number is: %d\n", bot_up_fibonacci(n));
    
    return 0;
}
