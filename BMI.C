#include <stdio.h>

int main()
{
    printf("Hello, please enter your weight in kg.\n");
    float height;
    float weight;
    
    scanf("%f", &weight);
    
    printf("Now please enter in your height in meters.\n");
    scanf("%f", &height);
    
    
    printf("Your body mass index is %f", weight/(height*height));    
    return 0;
}
