#include <string.h>  
#include <stdio.h>
#include <stdlib.h>


/* naive_fibonacci
*  The naive fibonacci is the classic exercise when it comes to recursions. It has, however, an exponential time complexity and is very slow. Consider for instance a big problem instance
*  that is, n is a very large number. Consider even fibonacci 8, fib(8) = fib(7) + fib(6) = fib(6) + fib(5) + fib(5) + fib(4) = fib(5) + fib(4) + 2(fib(4) + fib(3) + fib(3) + fib(2) ...
*  The problem here is overlaps, we get a large amount of overlaps for large n.
*/

int naive_fibonacci(int n){
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 1;
    }
    else{
        return naive_fibonacci(n-2) + naive_fibonacci(n-1);
    }
}

/* bot_up_fibonacci
*  This implementation is the cure for the bad timecomplexity above and it is, as a matter of fact, linear in time complexity while only being slightly more complicated. See, if we
*  now want fib(8) we will work our way up, starting with fib(3) = 1 + 1 -> fib(4) = 2 + 1, fib(5) = 3 + 2 -> ... fib(8) = fib(7) + fib(6). 
*/

int bot_up_fibonacci(int n){
    int n1 = 1;
    int n2 = 1;
    
    for(int i = 2; i <n; i++){
        int temp = n2;
        n2 = n1 + n2;
        n1 = temp;
    }
    
    return n2;
}

int main()
{   
    int n;
    printf("Enter in a fibonacci number: \n");
    scanf("%d", &n);
    printf("Your naive fibonacci number is: %d\n", naive_fibonacci(n));
    printf("Your bottom-up fibonacci number is: %d\n", bot_up_fibonacci(n));
    
    return 0;
}
