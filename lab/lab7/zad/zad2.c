#include <stdio.h>
#include <stdlib.h>

int main() {
    int max = 0;
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

            if(arr[i] > max){
                max = arr[i];
            }
            numbers++;
        }
        break;  
    }

    printf("The max of the array : %d\n", max);  
    free(arr);
    return 0;
}