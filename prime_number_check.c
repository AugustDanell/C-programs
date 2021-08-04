#include <stdio.h>

int naive_prime_test(int c){
    for(int i = 2; i < c; i++){
        if(c % i == 0){
            return 0;
        }
    }
    
    return 1;
    
}   

int main()
{
    printf("Hello, please enter in a number you wish to test if it is prime.\n");
    int candidate;
    scanf("%d", &candidate);
    
    int choice;
    printf("What method would you like to use?\n");
    printf("1. Naive Prime Test\n");
    scanf("%d", &choice);
    
    int is_prime;
    if(choice == 1){
        printf("You have made choice 1, naive primality test: ");
        is_prime = naive_prime_test(candidate);
    }
    
    if(is_prime){
        printf("Your number is prime!");
    }
    else{
        printf("Your number is not prime!");
    }
}
