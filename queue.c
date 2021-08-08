  
#include <stdio.h>
#include <stdlib.h>

struct queue_node{
  int val;
  struct node* next_val;
};


int main()
{   
    struct queue_node* bot = NULL;
    struct queue_node* top = NULL;
    bot = (struct queue_node*)malloc(sizeof(struct queue_node));
    top = (struct queue_node*)malloc(sizeof(struct queue_node));
    int length = 0;
    
    int vals;
    printf("How many values to insert?\n");
    scanf("%d", &vals);
    
    // Insertion:
    while(vals > 0){
        int value;
        printf("Push a value: ");
        scanf("%d", &value);
        printf("\n", value);
        
        struct queue_node* new_node = NULL;
        new_node = (struct queue_node*)malloc(sizeof(struct queue_node));
        new_node -> val = value;
        
        if(length == 0){
            bot = new_node;
            
        }
        else if (length == 1){
            top = new_node;
            bot -> next_val = top;
        }
        else{
            top -> next_val = new_node;
            top = new_node;
        }
            
        length ++;
        vals --;
    }

        
    // Print values:
    int i = 0;
    struct queue_node* print = NULL;
    print = (struct queue_node*)malloc(sizeof(struct queue_node));
    print = bot;
    
    printf("Popping the inserted Values:\n");
    while(i < length){
        int out = bot -> val;
        bot = bot -> next_val;
        printf("Popping %d:th time: %d\n", (i+1), out);
        i++;
    }
    
    
    return 0;
}
