#include <stdio.h>

int main(){

    float width = 0;
    float height = 0;
    int row = 0;
    int column = 0;
    int total = 0;


    scanf("%f %f", &width, &height);

    width = width -1;

    row = width/0.7;
    column = height/1.2;

    total = row * column;

    total -= 3;

    printf("Avaible seats are %d", total);







}