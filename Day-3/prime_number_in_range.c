#include <stdio.h>
int main() {
    int start, end, i, j, isprime;
    printf("Enter the start and end of the range:   ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers are:\n");
    for (i = start; i <= end; i++) {
        if (i < 2) 
            continue; 
        
        isprime = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isprime = 0; 
                break;
            }
        }
        if (isprime == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}