#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int isPrime(int n);

int main(){
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n*sizeof(int));
    
    int primeCount = 0;
    int *primes = NULL;
    printf("Enter numbers in the array:");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        if(isPrime(arr[i])){
            primes = (int*)realloc(arr, (primeCount+1)*sizeof(int));
            primes[primeCount] = arr[i];
            primeCount++;


        }
    }

    printf("The prime numbers are: ");
    for(int i = 0; i< primeCount; i++){
        printf("%d", primes[i]);
    }

    free(arr);
    free(primes);


     
}

int isPrime(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    for(int i = 2; i<sqrt(n); i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}