#include <stdio.h>
#include <math.h>

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

    int closest = arr[0], index = 0;
    for (int i = 1; i < 7; i++) {
        if (fabs(arr[i] - average) < fabs(closest - average)) {
            closest = arr[i];
            index = i;
        }
    }
    
    
    printf("Closest value: %d (at position %d)\n", closest, index);
    return 0;
}