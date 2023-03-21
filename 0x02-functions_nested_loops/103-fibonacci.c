#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
        int a = 1, b = 2, sum = 0;

        while (b <= 4000000)
        {
                if (b % 2 == 0)
                        sum += b;

                int temp = b;
                b += a;
                a = temp;
        }

        printf("%d\n", sum);

        return (0);
}
