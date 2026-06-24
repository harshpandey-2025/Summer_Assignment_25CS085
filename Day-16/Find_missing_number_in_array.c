#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;  
    int size = 5;
    int expectedSum, actualSum = 0, missingNumber;

    expectedSum = n * (n + 1) / 2;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    missingNumber = expectedSum - actualSum;

    printf("Missing Number = %d\n", missingNumber);

    return 0;
}