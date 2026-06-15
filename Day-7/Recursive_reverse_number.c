#include <stdio.h>
int reverseNum(int n, int rev) {
    if (n == 0) {
        return rev;
    } else {
        return reverseNum(n / 10, rev * 10 + n % 10);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverseNum(num, 0);
    printf("Reversed number of %d is %d\n", num, reversed);
    return 0;
}