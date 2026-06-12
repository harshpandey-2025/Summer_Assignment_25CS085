# include <stdio.h>
int main() {
    int n, sum=0, temp, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}