#include <stdio.h>
#include <math.h>

int main() {
    int n, i;

    for (n = 1; n <= 100; n++) {
        if (n == 1) continue;  // skip 1 because it’s not prime

        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                goto next;  // n is not prime, skip printing
            }
        }

        printf("%d ", n);  // print prime number
        next: ;  // label for goto
    }

    return 0;
}
