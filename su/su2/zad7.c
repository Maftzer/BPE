#include <stdio.h>

int main(){
    int dist = 0;
    char time;
    double taxi = 0;
    double bus = 0;
    double train = 0;
    double cheapest = 0;

    printf("Enter distance: ");
    scanf("%d", &dist);
    printf("Enter is it day or night(D or N): ");
    scanf("%c", &time);
    
    if(time == 'D'){
    taxi = 0.7 + 0.79*dist;
    }
    else if(time == 'N'){
        taxi  == 0.7 + 0.9*dist;
    }

    if(dist >= 20){
        bus = 0.09*dist;
    } else{
        bus = taxi + 1;
    }

    if(dist >=100){
        train = 0.06*dist;
    } else{
        bus = taxi + 1;
    }
    cheapest = taxi;
    if(bus < cheapest){
        cheapest = bus;
    }
    if(train < cheapest){
        cheapest = train;
    }

    printf("The cheapest price is: %lf\n", cheapest);






}