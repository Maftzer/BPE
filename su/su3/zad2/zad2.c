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

    for(int i =0; i<N;i++){
        if((i%2) == 0){
            if(arr[i-1]< arr[i] || arr[i] > arr[i+1]){
                printf("No relation\n");
                return;
            }
        } else{
            if(arr[i-1]> arr[i] || arr[i]<arr[i+1]){
                printf("No relation\n");
                return;
            }
        }

    }
    printf("There are relations between the elements");
    return;


}