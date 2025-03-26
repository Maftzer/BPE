#include <stdio.h>

int main(){
    int area;
    double grape;
    double wine;
    double wanted_Amount;

    printf("Enter area: ");
    scanf("%d", &area);
    printf("Enter area: ");
    scanf("%lf", &wanted_Amount);

    grape = 0.4 * area;
    if(grape > 2.5){
        wine = grape / 2.5;
    }

    if (wine > wanted_Amount){
        printf("There is enough wine, and the amount left is: %lf\n",  wine - wanted_Amount);

    } else if(wine == wanted_Amount){
        printf("There is enough wine, but nothing is left\n");
    } else{
        printf("The amount of wine is not enough\n");
    }
}