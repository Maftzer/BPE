#include <stdio.h>

void CompareSpeed(TypeVehicle v1, TypeVehicle v2);


typedef struct {
    int maxSpeed;
    int weight;
    char name[50];

} Vehicle;

typedef struct {
    Vehicle base;
    char type[20];
    int passengers;
} TypeVehicle;



int main(){
    int amount_vehicles;
    
    printf("Enter how many vehicles you want to input: ");
    scanf("%d", &amount_vehicles);
    TypeVehicle vehicles[amount_vehicles];

    for(int i = 0; i<amount_vehicles; i++){
        printf("Enter info for vehicle %d: \n", i+1);
        printf("Type of vehicle: ");
        scanf("%s", vehicles[i].type);
        printf("Name: ");
        scanf("%s", vehicles[i].base.name);
        printf("MaxSpeed: ");
        scanf("%s", vehicles[i].base.maxSpeed);
        printf("Weight: ");
        scanf("%s", vehicles[i].base.weight);
        printf("Max passengers: ");
        scanf("%s", vehicles[i].passengers);
    }

    printf("Which vehicles you want to compare: ");
    for(int i = 0; i<amount_vehicles; i++){
        printf("%d.%s\n", i+1, vehicles[i].base.name);
    }

    int choice1;
    int choice2;

    scanf("%d %d", &choice1, &choice2);

    CompareSpeed(vehicles[choice1-1], vehicles[choice2-1]);
    
}

void CompareSpeed(TypeVehicle v1, TypeVehicle v2){
    printf("We are comparing %s and %s", v1.base.name, v2.base.name);
    if(v1.base.maxSpeed > v2.base.maxSpeed){
        printf("The %s is faster", v1.base.name);
        return 0;
    }
    if(v1.base.maxSpeed < v2.base.maxSpeed){
        printf("The %s is faster", v2.base.name);
        return 0;
    }
    if(v1.base.maxSpeed == v2.base.maxSpeed){
        printf("They have equal speed");
        return 0;
    }
}