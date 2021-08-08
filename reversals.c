#include <string.h>  
#include <stdio.h>
#include <stdlib.h>

void reverse_int(int* n){

}

void reverse_str(char* str){
    
}

int main()
{   
    int n;
    printf("Do you want to 1. reverse a number or 2. reverse a string? \n");
    scanf("%d", &n);
    
    if(n == 1){
        int number;
        scanf("%d", &number);
        reverse_int(&number);
        
    }
    else if(n == 2){
        char str[50];
        scanf("%s", &str);
        reverse_str(str);
    }
    
    
    return 0;
}
