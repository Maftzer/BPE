#include <stdio.h>

int main(){

int n1;
int n2;
int sum = 0;
int mult = 1;


printf("Enter first number: ");

scanf("%d", &n1);

printf("Enter second number: ");
scanf("%d", &n2);

if(n1 > n2){
for (int i = n2 + 1 ; i < n1; i++){
    if (i % 2 == 0){
        sum+=i;
    }
    else{
        mult *= i;
    }
}
}
else if (n2> n1)
{
    for (int i = n1 + 1 ; i < n2; i++){
        if (i %2 == 0){
            sum+=i;
        }
        else{
            mult *= i;
        }
    }
}
else{
    return 0;
}


printf("The sum of even is %d and the multiplication of odds is %d\n", sum ,mult);



}
