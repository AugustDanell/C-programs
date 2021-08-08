#include <string.h>  
#include <stdio.h>
#include <stdlib.h>

struct queue_node{
  int val;
  struct node* next_val;
};


int is_palindrome(char str[], int length){
    int back_counter = length -1;
    int forw_counter = 0;
    
    while(forw_counter <= back_counter){
        back_counter--;
        forw_counter++;
        if(str[forw_counter] != str[back_counter]){
            printf("%s is NOT a palindrome", str);
            return 0;
        }
    }
    
    printf("%s is a palindrome", str);
    return 1;
}

int main()
{   
    char candidate[20];
    printf("Enter in a potential palindrome (Max 20 letters): \n");
    scanf("%s", &candidate);
    int length = strlen(candidate);
    is_palindrome(candidate, length);
    
    
    return 0;
}
