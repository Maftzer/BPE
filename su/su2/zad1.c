#include <stdio.h>

int biggest();
int main(){

    int a = 0;
    int b = 0;
    int result;

    int n = 0;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("The bigger number is: %d", bigger(a,b));

    printf("The smaller number is: %d", smaller(a,b));


    biggest();

}

int bigger(int a, int b){
    return (a > b) ? a : b;
}

int smaller(int a, int b){
    return (a < b) ? a : b;
}

int biggest(){
    int biggest = -999999;
    int smallest = 999999;
    int number = 0;
    while(1){
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number >= biggest){
            biggest = number;
        }
        else if(number <= smallest){
            smallest = number;
        }
        if(number == 0){
            break;
        }
    }
    printf("The biggest number is %d\n", biggest);
    printf("The smallest number is %d\n", smallest);
}
