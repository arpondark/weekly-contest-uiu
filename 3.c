#include <stdio.h>

int main() {
    int a;  
    scanf("%d", &a);
    
    while (a--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        
        
        if (y % x == 0 && y / x <= n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
