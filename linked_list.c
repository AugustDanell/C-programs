#include <stdio.h>
#include <stdlib.h>

struct node{
  int val;
  struct node* next_val;
};


int main()
{   
    struct node* root = NULL;
    struct node* current = NULL;
    root = (struct node*)malloc(sizeof(struct node));
    current = root;
    int length = 0;
    
    int vals;
    printf("How many values to insert?\n");
    scanf("%d", &vals);
    
    // Insertion:
    while(vals > 0){
        int value;
        printf("Insert a value: ");
        scanf("%d", &value);
        printf("\n");
        
        struct node* new_node = NULL;
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node -> val = value;
        
        if(length == 0){
            root = new_node;
            current = new_node;
        }
        else if(length == 1){
            root -> next_val = new_node;
            current = new_node;
            
        }
        else{
            current -> next_val = new_node;
            current = new_node;
        }
            
        length ++;
        vals --;
    }

        
    // Print values:
    int i = 0;
    struct node* print = NULL;
    print = (struct node*)malloc(sizeof(struct node));
    print = root;
    printf("Printing the inserted Values:\n");
    while(i < length){
        int out = print ->val;
        printf("Node number %d: %d\n", (i+1), out);
        print = print -> next_val;
        i++;
    }
    
    
    return 0;
}
