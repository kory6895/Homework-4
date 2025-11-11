#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

unsigned long long fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long prev1 = 0, prev2 = 1, curr = 0;

    for (unsigned int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    return curr;
}

int main(void) {
    unsigned int n;
    printf("Enter n (to find nth Fibonacci number): ");
    scanf_s("%u", &n);
    printf("F(%u) = %llu\n", n, fibonacci(n));
    unsigned int i = 0;
    unsigned long long a = 0, b = 1;
    while (1) {
        if (ULLONG_MAX - b < a) break;
        unsigned long long next = a + b;
        a = b;
        b = next;
        i++;
    }
    printf("\nLargest Fibonacci number within unsigned long long:\n");
    printf("F(%u) = %llu\n", i, a);

    return 0;
}
