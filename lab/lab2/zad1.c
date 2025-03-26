#include <stdio.h>

int main(){
    char n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(char i = 1; i <= n; i++){
        for(char j = 1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}