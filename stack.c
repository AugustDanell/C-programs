#include <stdio.h>
#include <stdlib.h>

/* stack_node
*  The struct of a stack. A stack is like a pile of different objects, like a pile of plates that need to be dished (sigh). The stack_node is implemented in such a way that it holds a value and a pointer to 
*/

struct stack_node{
  int val;
  struct node* prev_val;
};


int main()
{   
    struct stack_node* top = NULL;
    top = (struct stack_node*)malloc(sizeof(struct stack_node));
    int length = 0;
    
    int vals;
    printf("How many values to insert?\n");
    scanf("%d", &vals);
    
    // Insertion:
    while(vals > 0){
        int value;
        printf("Push a value: ");
        scanf("%d", &value);
        printf("\n");
        
        struct stack_node* new_node = NULL;
        new_node = (struct stack_node*)malloc(sizeof(struct stack_node));
        new_node -> val = value;
        
        if(length == 0){
            top = new_node;
        }
        else{
            new_node -> prev_val = top;
            top = new_node;
        }
            
        length ++;
        vals --;
    }

        
    // Print values:
    int i = 0;
    struct stack_node* print = NULL;
    print = (struct stack_node*)malloc(sizeof(struct stack_node));
    print = top;
    
    printf("Popping the inserted Values:\n");
    while(i < length){
        int out = top -> val;
        top = top -> prev_val;
        printf("Popping %d:th time: %d\n", (i+1), out);
        i++;
    }
    
    
    return 0;
}
