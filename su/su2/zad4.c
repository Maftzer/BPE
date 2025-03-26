#include <stdio.h>

int main(){
    int points;
    double bonus;

    printf("Enter amount of points: ");
    scanf("%d", &points);

    if (points <= 100)
    {
        bonus = 5;
    } else if( points > 100 && points < 1000){
        bonus = 0.2 * points;
    }
    else if(points > 1000){
        bonus = 0.1 * points;
    } else{
        printf("Invalid amount of points\n");
    }

    if(points % 2 == 0){
        bonus += 1;

    }
    if(points % 10 == 5){
        bonus += 2;
    }

    printf("Amount of bonus points is %.1lf and total points are %.1lf\n", bonus, points + bonus);
    
}