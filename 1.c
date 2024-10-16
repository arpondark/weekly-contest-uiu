#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    int A[T][3];  
    int results[T];  

    
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
    }

    
    for (int i = 0; i < T; i++) {
        int max_val = A[i][0];
        int min_val = A[i][0];

        
        for (int j = 1; j < 3; j++) {
            if (A[i][j] > max_val) {
                max_val = A[i][j];
            }
            if (A[i][j] < min_val) {
                min_val = A[i][j];
            }
        }

        results[i] = max_val - min_val;  
    }

    
    for (int i = 0; i < T; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}
