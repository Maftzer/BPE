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
    int currentLine = 0;

    for(int i = 0; i<N;i++){
        if(arr[i] == arr[i-1]){
            currentLenght++;
            currentLine = arr[i];
        } else{
            if(currentLenght>maxLenght){
                maxLenght = currentLenght;
                maxStart = currentStart;
            }
            currentLenght = 1;
            currentStart = i;
        }
    }
    
    if(maxLenght == 1){
        printf("Not found anything longer than 1 element");
        return 0;
    }
    printf("The longest line is: ");
    for(int i = 0; i < maxLenght; i++){
    printf("%d ", currentLine);
    }
    printf("\n");
    return 0;
}