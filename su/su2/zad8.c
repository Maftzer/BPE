#include <stdio.h>

int main(){
    double volume;
    double pump1;
    double pump2;
    double result;

    int hours;

    printf("Enter volume of the pool");
    scanf("%lf", &volume);

    printf("Enter debit for first pump: ");
    scanf("%lf", &pump1);

    printf("Enter debit for second pump: ");
    scanf("%lf", &pump2);
    
    printf("Enter hours: ");
    scanf("%d", &hours);

    result = ((pump1 + pump2)* hours) / 1000;
    if(volume > result){
        printf("The pool is %lf cubic metres full", result);
        return;
    }
    if(volume == result){
        printf("The pool is full");
    }
    if(volume < result){
        printf("The pool has overflown by %lf cubic metres", result - volume);
    }

}