#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    int arr[n][n];

    printf("Enter the elements of the matrix: ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == i){
                printf("Glaven diagonal - [%d][%d]: %d\n", i,j,arr[i][j]);
            }
            
        }
    }
    printf("\n");
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j+i == n-1){
                printf("Vtorostepenen diagonal - [%d][%d]: %d\n", i,j,arr[i][j]);
            }
            
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j > i){
                printf("Nad glavniq diagonal - [%d][%d]: %d\n", i,j,arr[i][j]);
            }
            
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < i){
                printf("Pod glavniq diagonal - [%d][%d]: %d\n", i,j,arr[i][j]);
            }
            
        }
    }

}