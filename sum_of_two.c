#include <stdio.h>

int main()
{
    int a;
    int b;
    
    printf("Give two integers to sum\n");
    scanf("%d%d", &a, &b);
    printf("The sum of %d and %d is: %d", a, b, (a+b));
    

    return 0;
}
