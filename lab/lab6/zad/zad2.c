#include <stdio.h>

int main(){
    int sum = 0;
    int n = 0;
    int sumCol, sumRow = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    int arr[n][n];

    printf("Enter the elements of the matrix: ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int j = 0; j < n; j++){
        sum+=arr[0][j];
    }
    for(int i = 0; i < n; i++){
        sumRow = 0;
        for(int j = 0; j < n; j++){
            sumRow += arr[i][j];
            if(sumRow!=sum){
                return;
            }
        }
    }

    for(int j = 0; j < n; j++){
        sumCol = 0;
        for(int i = 0; i < n; i++){
            sumCol += arr[i][j];
            if(sumCol!=sum){
                return;
            }
        }
    }

    printf("It is magical");
}