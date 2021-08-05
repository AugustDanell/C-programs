#include <stdio.h>

int main()
{
    printf("Hello, please provide two numbers. \n");
    float a;
    float b;
    
    scanf("%f%f", &a, &b);
    printf("What operation would you like to make?\n");
    printf("1. Addition 2. Subtraction 3. Multiplication 4. Division\n");
    int operation;
    scanf("%d", &operation);
    
    switch(operation){
        case 1:
            printf("%f\n", a+b);
            break;
        
        case 2:
            printf("%f\n", a-b);
            break;
        
        case 3:
            printf("%f\n", a*b);
            break;
            
        case 4:
            if(b != 0){
                printf("%f\n", a/b);
                break;
                
            }
            else{
                printf("Can't do division with zero");
            }
    }
    
    return 0;
}
