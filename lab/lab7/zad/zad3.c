#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    int numbers = 0;
    int* arr;

    while (1) {
        for (int i = 0; i < 7; i++) {
            int *arrTemp = (int*)realloc(arr, (++numbers)* sizeof(int));
            if(arrTemp == NULL) exit(1);
            arr = arrTemp;
            printf("Enter a value between -5000 and 5000: ");
            scanf("%d", &arr[i]);

            if (arr[i] < -5000 || arr[i] > 5000) {  
                printf("Enter a valid value!\n");
                i--;  
                continue;
            }

            sum += arr[i];  
            numbers++;
        }
        break;  
    }
    double average = (double) sum / 7.0;
    
    printf("Average of array elements: %.2lf\n", average); 
    free(arr);
    return 0;
}