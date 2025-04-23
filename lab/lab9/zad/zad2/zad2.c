#include <stdio.h>
#include <stdlib.h>
void openFile(FILE **ptr, const char* MODE, char* fileName);
void sort(int *arr, int n);
int Even(int number);
int Odd(int number);
void EvenAndOdd(int* evenCount, int* oddCount, int number);

int main(){

    FILE *binptr, *fptr;
    
    openFile(&binptr, "rb", "data.bin");

    if(binptr == NULL){
        printf("Error with reading bin file");
        return 1;
    }
    int* arr = NULL;
    int numberCount = 0;
    int temp;
    while(fread(&temp, sizeof(int), 1, binptr) == 1){
        arr = realloc(arr, (numberCount+1)*sizeof(int));
        arr[numberCount] = temp;
        numberCount++;
        
    }
    
    
    
    fclose(binptr);
    printf("%d\n", numberCount);
    
    openFile(&binptr, "wb", "output.bin");
    
    fwrite(arr, sizeof(int), numberCount, binptr);
    
    fclose(binptr);

    int evenCount, oddCount;
    for(int i = 0; i < numberCount; i++){
        EvenAndOdd(&evenCount, &oddCount, arr[i]);
    }

    sort(arr, numberCount);

    openFile(&fptr, "w", "output.txt");
    if (fptr == NULL) {
        printf("Error with writing output.txt\n");
        return 1;
    }
    for(int i = 0; i<numberCount;i++){
        fprintf(fptr, "%d ", arr[i]);
    }
    
    fclose(fptr);

    free(arr);  

}

void openFile(FILE **ptr, const char* MODE, char* fileName){
    *ptr = fopen(fileName, MODE);
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

int Even(int number){
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

int Odd(int number){
    int counter = 0;
    number = abs(number);
    while(number > 0){
        int digit = number % 10;
        if(digit%2 != 0){
            counter++;
        }
        number /= 10;
    }
    return counter;
}

void EvenAndOdd(int* evenCount, int* oddCount, int number){
    *evenCount = Even(number);
    *oddCount = Odd(number);
}