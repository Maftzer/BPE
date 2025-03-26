#include <stdio.h>

int main(){

    float price_veg;
    float price_fruit;

    int veg;
    int fruit;

    printf("Enter price for vegetables: ");
    scanf("%f", &price_veg);

    printf("Enter price for fruit: ");
    scanf("%f", &price_fruit);

    printf("Enter how many kilograms vegetables: ");
    scanf("%d", &veg);

    printf("Enter how many kilograms fruit: ");
    scanf("%d", &fruit);

    price_veg *= 0.51;
    price_fruit*= 0.51;
    veg *= price_veg;
    fruit *= price_fruit;

    printf("You got %d euro from the fruits and %d euros from the vegetables", fruit, veg);

}