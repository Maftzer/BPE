#include <stdio.h>

int main(){

    const float PI = 3.14;
    double r = 0;
    double area_circle = 0;

    printf("Give me a value for r: \n");

    scanf("%lf", &r);

    area_circle = PI * 2 * r;

    printf("The area of the circle is: %.2lf\n", area_circle);


}