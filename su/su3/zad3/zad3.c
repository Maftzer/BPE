#include <stdio.h>

int main(){
    int N;

    printf("Enter size of array: ");
    scanf("%d", &N);
    
    int arr[N];

    for(int i =0; i<N;i++){
        printf("Enter number: ");
        scanf("%d", &arr[i]);

    }

    int opp_arr[N];
    int j = 0;
    for (int i = N - 1; i >= 0; i--){
        opp_arr[j] = arr[i];
        j++; 
    }
    printf("First array is: \n");
    for(int i =0; i<N;i++){
        
        printf("%d", arr[i]);

    }
    printf("\nSecond array is: \n");
    for(int i =0; i<N;i++){
        
        printf("%d", opp_arr[i]);

        
    }
    printf("\n");
    
}