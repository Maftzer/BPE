#include <stdio.h>

int main() {
    int sum = 0;
    
    int arr[7];

    while (1) {
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
        break;  
    }
    double average = (double) sum / 7.0;
    
    printf("Average of array elements: %.2lf\n", average);  
    return 0;
}