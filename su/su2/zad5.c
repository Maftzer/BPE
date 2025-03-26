#include <stdio.h>

int main(){
    int first_Time, second_Time, third_Time;
    int hours = 0;
    int minutes = 0;

    printf("Enter first time: ");
    scanf("%d", &first_Time);
    printf("Enter second time: ");
    scanf("%d", &second_Time);

    printf("Enter third time: ");
    scanf("%d", &third_Time);

    minutes = first_Time + second_Time + third_Time;
    if (minutes >= 60) {
        hours = minutes / 60;
        minutes -= 60 * hours;
    }

    printf("Their total time is: %d:%02d\n", hours, minutes);


}