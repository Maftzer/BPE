#include <stdio.h>
#include <stdlib.h>
int main(){

    float x1 = 0;
    float x2 = 0;
    float y1 = 0;
    float y2 = 0;
    float height = 0;
    float width = 0;
    float area = 0;

    printf("Enter coordinates for A: ");

    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates for B: ");

    scanf("%f %f", &x2, &y2);

    height = abs(y1-y2);

    width = abs(x1-x2);

    area = height * width;

    printf("The area is: %f\n", area);

    

}