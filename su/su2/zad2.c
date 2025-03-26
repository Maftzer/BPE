#include <stdio.h>

int main() {
    int hours;
    int minutes;

    
    printf("Enter hours (0-23): ");
    scanf("%d", &hours);
    printf("Enter minutes (0-59): ");
    scanf("%d", &minutes);

    minutes += 15;

    
    if (minutes >= 60) {
        minutes -= 60;
        hours++;
    }

    if (hours == 24) {
        hours = 0;
    }

    printf("Time after 15 minutes: %d:%02d\n", hours, minutes);

    return 0;
}