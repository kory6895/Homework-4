#include <stdio.h>
#include <limits.h>

unsigned long long move_count = 0;

void hanoi(int n, char from, char to, char aux) {
    if (n == 0) return;
    hanoi(n - 1, from, aux, to);                    
    printf("Move disk %d: %c -> %c\n", n, from, to);
    move_count++;                                   
    hanoi(n - 1, aux, to, from);                    
}

int main(void) {
    int n;
    printf("Enter number of disks: ");
    if (scanf_s("%d", &n) != 1 || n < 0) {
        puts("Invalid n");
        return 1;
    }

    if (n > 20) {
        printf("n=%d 會產生非常多步驟(約 2^n - 1)；以下仍會計算總步數，但不列印每步。\n", n);
    }

    if (n <= 20) hanoi(n, 'A', 'C', 'B');
    else {
        move_count = (n >= 64) ? ULLONG_MAX : ((1ULL << n) - 1ULL);
    }

    printf("Total moves = %llu\n", move_count);
    return 0;
}
