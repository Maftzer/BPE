#include <stdio.h>

int main() {
    int sum = 0; 
    int arr[7];

    
        for (int i = 0; i < 7; i++) {
            printf("Enter a value between -5000 and 5000: ");
            scanf("%d", &arr[i]);

            if (arr[i] < -5000 || arr[i] > 5000) {  
                printf("Enter a valid value!\n");
                i--;  
                continue;
            }

            sum += arr[i];  
        }
        

    printf("Sum of array elements: %d\n", sum);  
    return 0;
}