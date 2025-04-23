#include <stdio.h>
#include <stdlib.h>
void openFile(FILE *ptr, const char* MODE, char* fileName);
void sort(int *arr, int n);
int Even(int number, int n);
int Odd(int number, int n);
void EvenAndOdd(int* evenCount, int* oddCount, int number, int n);

int main(){

    FILE *binptr, *fptr;
    
    openFile(binptr, "rb", "data.bin");

    if(binptr == NULL){
        printf("Error with reading bin file");
        return 1;
    }

    int n;

    fread(&n, sizeof(int), 1, binptr);

    int* arr = (int*)malloc(n*sizeof(int));
    fread(arr, sizeof(int), n, binptr);
    fclose(binptr);

    openFile(binptr, "wb", "output.bin");
    
    fwrite(arr, sizeof(int), n, binptr);
    
    int evenCount, oddCount;
    for(int i = 0; i < n; i++){
        EvenAndOdd(&evenCount, &oddCount, arr[i], n);
    }

    sort(arr, n);

    openFile(fptr, "w", "output.txt");

    for(int i = 0; i<n;i++){
        fprintf(fptr, "%d ", arr[i]);
    }
    




}

void openFile(FILE *ptr, const char* MODE, char* fileName){
    ptr = fopen(fileName, MODE);
}

void sort(int *arr, int n){
    int temp;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j< n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int Even(int number, int n){
    int counter = 0;
    if(number == 0) counter++;
    number = abs(number);
    while(number > 0){
        int digit = number % 10;
        if(digit%2 == 0){
            counter++;
        }
        number /= 10;
    }
    return counter;
}

int Odd(int number, int n){
    int counter = 0;
    number = abs(number);
    while(number > 0){
        int digit = number % 10;
        if(digit%2 == 0){
            counter++;
        }

    }
    return counter;
}

void EvenAndOdd(int* evenCount, int* oddCount, int number, int n){
    evenCount = Even(number, n);
    oddCount = Odd(number, n);
}