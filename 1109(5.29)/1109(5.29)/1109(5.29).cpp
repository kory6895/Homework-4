#include <stdio.h>
#include <stdlib.h>

long long gcd_ll(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;  
}

long long lcm_ll(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    long long g = gcd_ll(a, b);
    return (a / g) * b > 0 ? (a / g) * b : -((a / g) * b);
}

int main(void) {
    long long x, y;
    printf("Enter two integers: ");
    if (scanf_s("%lld %lld", &x, &y) == 2) {
        printf("gcd(%lld, %lld) = %lld\n", x, y, gcd_ll(x, y));
        printf("lcm(%lld, %lld) = %lld\n", x, y, lcm_ll(x, y));
    }
    return 0;
}
