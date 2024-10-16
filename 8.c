#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

void simpleSieve(int limit, bool prime[]) {
    for (int i = 2; i <= limit; i++) {
        prime[i] = true;
    }
    for (int p = 2; p * p <= limit; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= limit; i += p)
                prime[i] = false;
        }
    }
}

void segmentedSieve(int m, int n) {
    int limit = (int) sqrt(n) + 1;
    bool prime[limit + 1];
    simpleSieve(limit, prime);

    bool isPrime[n - m + 1];
    for (int i = 0; i <= n - m; i++) {
        isPrime[i] = true;
    }

    for (int p = 2; p <= limit; p++) {
        if (prime[p]) {
            int start = (m / p) * p;
            if (start < m) start += p;
            if (start == p) start += p;

            for (int j = start; j <= n; j += p) {
                isPrime[j - m] = false;
            }
        }
    }

    for (int i = 0; i <= n - m; i++) {
        if (isPrime[i] && (i + m) > 1) {
            printf("%d\n", i + m);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int m, n;
        scanf("%d %d", &m, &n);

        segmentedSieve(m, n);
        if (t > 0) {
            printf("\n");
        }
    }

    return 0;
}
