#include <stdio.h>


int main(){

    double temp;

    printf("What is your temperature in Celcius: ");
    scanf("%lf", &temp);
    temp = (9* temp / 5 ) + 32;
    printf("Your tempererature in (F) is: %.2lf\n", temp);

}
