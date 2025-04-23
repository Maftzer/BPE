#include <stdio.h>

int main(){
    int n,m = 0;

    printf("Enter N: ");
    scanf("%d", &n);
    
    printf("Enter M: ");
    scanf("%d", &m);

    int matrix[n][m];
    printf("Enter numbers in your matrixay: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; i++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        int colStart = -9999999999;
        for(int j = 0; j < m; i++){
            if(matrix[i][j]>colStart){
                colStart = matrix[i][j];
            }
            else{
                printf("Redovete ne sa vuv namalqvasht red!");
                return 0;
            }
            printf("Kolonite sa vuv namalqvasht red");
        }

    }

    for(int j = 0; j < m; j++){
        int rowStart = -9999999999;
        for(int i = 0; i < n; i++){
            if(matrix[i][j]>rowStart){
                rowStart = matrix[i][j];
            }
            else{
                printf("Redovete ne sa vuv narashtvasht red!");
                return 0;
            }
            printf("Redovete sa vuv narashtvasht red");
        }

    }



}