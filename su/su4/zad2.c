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
    int maxSum = -1000000;
    int maxRow = 0, maxCol = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; i++){
            int sum = 0;


            for(int nx = -1; nx<=1; nx++){
                for(int ny = -1; ny<=1; ny++){
                    int ni = i+nx;
                    int nj = j+ny;


                    if(ni>=0 && ni < n && nj>= 0 && nj < m){
                        if(ni == i && nj == j) continue;
                        sum += matrix[ni][nj];
                    }
                }
            }

            if (sum > maxSum){
                maxSum = sum;
                maxRow = i;
                maxCol = j;
            }
        }
    }


}