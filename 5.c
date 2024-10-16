#include <stdio.h>

int main() {
    int n;
    

    scanf("%d", &n);
    
    int sum_n = n * (n + 1) / 2;  
    
    int sum_input = 0, temp;
    
    
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &temp);
        sum_input += temp;
    }
   
    int missing_number = sum_n - sum_input;
    
   
    printf("%d\n", missing_number);
    
    return 0;
}
