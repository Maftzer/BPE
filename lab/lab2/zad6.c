#include <stdio.h>

int main(){
    double n1;
    double n2;
    double func;

    printf("Enter first number: ");
    scanf("%lf", &n1);

    printf("Enter second number: ");
    scanf("%lf", &n2);

    for(double i = n1 + 0.1; i <= n2; i += 0.1){
        func = i*i-4;
        printf("THe function is %.2lf\n", func);
    }
}