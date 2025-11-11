#include <stdio.h>
#include <stdint.h>

long long power(long long base, unsigned int exp) {
    if (exp == 0) return 1;          
    if (exp == 1) return base;       
    return base * power(base, exp - 1);  
}

int main(void) {
    long long b;
    unsigned int e;
    printf("Enter base and exponent (exp >= 1): ");
    if (scanf_s("%lld %u", &b, &e) == 2) {
        printf("%lld^%u = %lld\n", b, e, power(b, e));
    }
    return 0;
}
