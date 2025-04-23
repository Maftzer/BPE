#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0; 
    int numbers = 0;
    int *arr = NULL;
    arr = (int*) malloc(7*sizeof(int));
    


    
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
            
            numbers++;

            sum += arr[i];  
        }
        

    printf("Sum of array elements: %d\n", sum);
    free(arr);
    return 0;
}