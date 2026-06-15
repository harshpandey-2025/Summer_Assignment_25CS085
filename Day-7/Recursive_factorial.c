#include <stdio.h>
long long int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long long int result = factorial(number);
        printf("Factorial of %d is %lld\n", number, result);
    }
    
    return 0;
}