#include <stdio.h>

int main(){
int n1;
int n2;
int sum = 0;

printf("Enter first number: ");

scanf("%d", &n1);

printf("Enter second number: ");
scanf("%d", &n2);

if(n1 > n2){
for (int i = n2 + 1 ; i < n1; i++){
    sum +=i;
}
}
else if (n2> n1)
{
    for (int i = n1 + 1 ; i < n2; i++){
        sum +=i;
    }
}
else{
    return 0;
}


printf("The result is %d\n", sum);




}
