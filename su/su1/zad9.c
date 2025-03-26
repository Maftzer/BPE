#include <stdio.h>

int main(){

    float a = 0;
    float b = 0;
    float h = 0;

    float area = 0;

    printf("Enter size of a: ");
    scanf("%f", &a);

    printf("Enter size of a: ");
    scanf("%f", &b);

    printf("Enter size of a: ");
    scanf("%f", &h);

    area =((a+b)/2)*h;
    printf("The area is: %.1f", area);

}