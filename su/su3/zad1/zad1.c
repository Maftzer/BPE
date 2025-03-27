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
    int currentLenght = 1, maxLenght = 1;
    int currentStart = 0, maxStart = 0;

    for(int i = 0; i<N;i++){
        if(arr[i] == arr[i-1]){
            currentLenght++;
        } else{
            if(currentLenght>maxLenght){
                maxLenght = currentLenght;
                maxStart = currentStart;
            }
            currentLenght = 1;
            currentStart = i;
        }
    }
    printf("The index of the start of the longest is %d and the longest is %d\n", maxStart, maxLenght);
}