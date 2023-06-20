#include <stdio.h>

int main() {
    int start = 10, end = 100, sum = 0;
    
    for(int i = start; i <= end; i++) {
        sum += i;
    }
    
    printf("The sum of natural numbers from %d to %d is %d\n", start, end, sum);
    
    return 0;
}
