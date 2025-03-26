#include <stdio.h>

int main(){

    int n = 0;
    int k = 0;
    int counter = 0;
    int temp = 0;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("Enter a value for k: ");
    scanf("%d", &k);

    printf("Enter %d numbers:\n", n);
    for(int i = 1; i<=n; i++){
        scanf("%d", &temp);
        if(temp > k && temp %3 == 0){
            counter++;
        }
    }

    printf("You have %d numbers that are bigger than K and are dividable by 3\n", counter);

}