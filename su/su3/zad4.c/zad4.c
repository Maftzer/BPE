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

    int k;
    printf("Enter an amount to move items: ");
    scanf("%d", &k);
    int temp[k];

    printf("The array before is: ");
    for(int i = 0; i<N; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    for(int i =0; i < k;i++){
        temp[i] = arr[N-k+i];

    }
    for(int i = N-1; i>=k;i--){
        arr[i] = arr[i-k];
    }
    for(int i = 0; i<k; i++){
        arr[i] = temp[i];
    }
    printf("The array now is: ");
    for(int i = 0; i<N; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    
}