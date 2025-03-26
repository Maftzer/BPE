#include <stdio.h>


int main(){

    const float PI = 3.14;
    int degrees = 0;
    float converted = 0; 

    printf("How many degrees do you want to convert: ");

    scanf("%d", &degrees);

    converted = degrees * (PI/180);

    printf("%d degrees is %f radians\n", degrees, converted);


}