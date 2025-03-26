#include <stdio.h>

#include <math.h>
int main(){

    float x1 = 0;
    float x2 = 0;
    float x3 = 0;
    float y1 = 0;
    float y2 = 0;
    float y3 = 0;

    float a = 0;
    float b = 0;
    float c = 0;

    float area = 0;

    printf("Enter coordinates for A: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates for B: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates for C: ");
    scanf("%f %f", &x3, &y3);
    a = ((x2 - x1)*(x2-x1)) + (y2 - y1)*(y2 - y1);
    a = sqrt(a);

    return 0;



}