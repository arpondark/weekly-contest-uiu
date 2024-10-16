#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    
    char results[t][4];  

    for (int i = 0; i < t; i++) {
        int a, b, c, n;
        scanf("%d %d %d %d", &a, &b, &c, &n);
        
        int total = a + b + c + n;
        if (total % 3 == 0) {
            int x = total / 3;
            if (x >= a && x >= b && x >= c) {
                snprintf(results[i], 4, "YES");
            } else {
                snprintf(results[i], 4, "NO");
            }
        } else {
            snprintf(results[i], 4, "NO");
        }
    }

    
    for (int i = 0; i < t; i++) {
        printf("%s\n", results[i]);
    }

    return 0;
}
