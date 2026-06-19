#include <stdio.h>

int sum_of_two(int a, int b)
{
    return a + b;
}

int main(void)
{
    int num1, num2;

    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Sum = %d\n", sum_of_two(num1, num2));
    return 0;
}
