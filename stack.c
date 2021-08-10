#include <stdio.h>
#include <stdlib.h>

/* stack_node
*  The struct of a stack. A stack is like a pile of different objects, like a pile of plates that need to be dished (sigh). The stack_node is implemented in such a way that it 
   holds a value and a pointer to the previous value on the stack, the plate below it if you so will. We can put (push) plates to the stack as well as remove (pop) the topmost
   plate from the stack. Any other plates we can simply not get our hands on.
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
    
    // Insertion: Pushing elements (plates) to the stack.
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

        
    // Removal: Popping the values of the stack and printing the process as we go:
    int i = 0;
    printf("Popping the inserted Values:\n");
    while(i < length){
        int out = top -> val;
        top = top -> prev_val;
        printf("Popping %d:th time: %d\n", (i+1), out);
        i++;
    }
    
    
    return 0;
}
