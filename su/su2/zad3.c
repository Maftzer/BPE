#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter first number: ");
    scanf("%d", a);
    printf("Enter second number: ");
    scanf("%d", b);
    printf("Enter third number: ");
    scanf("%d", c);

    if(a == b && b == c){
        printf("They are the same");
    } else{
        printf("They are not the same");
    }

}