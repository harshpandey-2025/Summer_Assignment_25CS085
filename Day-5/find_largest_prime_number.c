#include <stdio.h>
int main() {
    long long num;
    long long largest_prime = 1;
    printf("Enter a number: ");
    scanf("%lld", &num);
    while (num % 2 == 0) {
        largest_prime = 2;
        num /= 2;
    }
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largest_prime = i;
            num /= i;
        }
    }
    if (num > 2) 
        largest_prime = num;
    
        printf("The largest prime factor is: %lld\n", largest_prime);
    return 0;
}