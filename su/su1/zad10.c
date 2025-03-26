#include <stdio.h>
#include <math.h>

int main(){

    float degrees = 0;
    float radians = 0;
    float result = 0;
    const float PI = 3.14;

    printf("Enter how many degrees is your angle: ");

    scanf("%f", &degrees);

    radians = degrees *(PI / 180);
    result = sin(radians);
    printf("The sin is: %f", result);

    result = cos(radians);
    printf("The cos is: %f", result);

    result = tan(radians);
    printf("The tan is: %f", result);

    result = 1 / tan(radians);
    printf("The cotan is: %f", result);



}
