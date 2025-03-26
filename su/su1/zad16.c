#include <stdio.h>

int main(){

    int daysWorking;
    float dayWage;
    float dollarToLeva;

    printf("Enter how many working days in a month: ");
    scanf("%d", &daysWorking);

    printf("Enter how much you earn in a day: ");
    scanf("%f", &dayWage);

    printf("Enter how many leva is 1 dollar: ");
    scanf("%f", &dollarToLeva);

    float leva = dayWage*dollarToLeva;



    float monthWage = daysWorking*leva;
    float yearBonus = monthWage*2.5;
    float yearSalary = monthWage *12 + yearBonus;

    float salaryTax = yearSalary*0.75;

    float salaryDaily = salaryTax / 365;

    printf("The daily income is %.2f\n", salaryDaily);


}