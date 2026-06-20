#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int armstrong(int num)
{
    int sum = 0, temp = num, rem, digits = 0;

    temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += power(rem, digits);
        temp /= 10;
    }

    return sum == num;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}