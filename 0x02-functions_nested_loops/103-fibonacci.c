#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int first = 0, second = 1;
    for (int i = 2; i <= n; i++) {
        int temp = first + second;
        first = second;
        second = temp;
    }
    return second;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %d-th Fibonacci number is %d\n", n, fibonacci(n));
    return 0;
}
