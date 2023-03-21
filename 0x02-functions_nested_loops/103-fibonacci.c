#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int sum = 0;

    while (b <= 4000000) {
        int temp = b;
        if (b % 2 == 0) {
            sum += b;
        }
        b = a + b;
        a = temp;
    }

    printf("%d\n", sum);

    return 0;
}
