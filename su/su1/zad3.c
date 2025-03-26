#include <stdio.h>

int main(){
    char symbol;

    printf("Enter a symbol: ");

    scanf("%c", &symbol);

    for(int i = 1; i<=10; i++){
        printf("%c", symbol);
    }
    printf("\n");
    for (int i = 1; i<=3; i++){
        for(int j = 1; j<= 10; j++){
            if(j==1 || j == 10){
                printf("%c", symbol);
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }

    for(int i = 1; i<=10; i++){
        printf("%c", symbol);
    }

    printf("\n");




}