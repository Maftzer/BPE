#include <stdio.h>

int main(){
    int n = 1;
    int sum = 0;


    while(n != 0){
        printf("Enter number: ");
        scanf("%d", &n);
        sum += n;
    }

    printf("The sum is %d\n", sum);


}