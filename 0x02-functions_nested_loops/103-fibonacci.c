#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
    int count;
    unsigned long fib1 = 1, fib2 = 2, next;

    printf("%lu, ", fib1);
    printf("%lu, ", fib2);

    for (count = 3; count <= 50; count++)
    {
        next = fib1 + fib2;
        printf("%lu", next);

        if (count != 50)
            printf(", ");

        fib1 = fib2;
        fib2 = next;
    }

    printf("\n");
    return (0);
}
