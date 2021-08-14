#include <string.h>  
#include <stdio.h>
#include <stdlib.h>

struct queue_node{
  int val;
  struct node* next_val;
};

/* is_palindrome()
*  Similar design to a quicksort in that we have a pointer to the last element and one to the first element. In this algorithm there is no pivot element, though, all there is is the respective pointers.
*  If the pointers at any time point to elements that are not the same, as we decrement the larger and increment the smaller with one all the time, we are sure that str is not a palindrome.
*  If, however, the pointers overlap that means that we would have gone through the entire string without failing it, and it is as such a palindrome. 
*/ 

int is_palindrome(char str[], int length){
    int back_counter = length -1;
    int forw_counter = 0;
    
    // A back pointer and a fowards pointer, one is incremented and one decremented until they overlap:
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
    // User input:
    char candidate[20];
    printf("Enter in a potential palindrome (Max 20 letters): \n");
    scanf("%s", &candidate);
    int length = strlen(candidate);
    is_palindrome(candidate, length);
    
    
    return 0;
}
