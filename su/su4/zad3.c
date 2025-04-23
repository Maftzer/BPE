#include <stdio.h>

int main(){
    int n,m = 0;

    printf("Enter N: ");
    scanf("%d", &n);
    
    printf("Enter M: ");
    scanf("%d", &m);

    int matrix[n][m];
    printf("Enter numbers in your matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = -9999999;
    int maxRow = -1;
    int min = 99999999;
    int minRow = -2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(matrix[i][j] > max){
                max = matrix[i][j];
                maxRow = i;
           }

        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] < min && i != maxRow){
                min = matrix[i][j];
                minRow = i;
            }

        }
    }
    


    int arr[m];
    for(int j = 0; j < m;j++){
        arr[j] = matrix[minRow][j];
        matrix[minRow][j] = matrix[maxRow][j];
        matrix[maxRow][j] = arr[j];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    
}