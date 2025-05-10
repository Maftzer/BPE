#include <stdio.h>
#include <stdlib.h>
typedef struct {
    long long id;
    double price;
    int quantity;
    char name[31];
    char expiry[8];
} Medicine;

int main(){
    


    FILE *fptr = fopen("medicines.bin", "rb");

    if (fptr == NULL){
        printf("Error opening file");
        return 1;
    }
    
    fseek(fptr, 0, SEEK_END);

    size_t fileSize = ftell(fptr);
    if (fileSize == -1L){
        printf("Ftell failed");
        return 1;
    }
    int n = fileSize / sizeof(Medicine);
    
    Medicine *medicineArr = malloc(fileSize);
    if(!medicineArr){
        printf("Error allocating memory");
        return 1;
    }
    rewind(fptr);

    fread(medicineArr,sizeof(Medicine), n, fptr);

    // for(int i = 0; i < n; i++){
    //     printf("ID: %lld\n, Price: %lf\n, Quantity: %d\n, Name: %s\n, Expiry Date: %s\n", 
    //         medicineArr[i].id,
    //         medicineArr[i].price,
    //         medicineArr[i].quantity,
    //         medicineArr[i].name, 
    //         medicineArr[i].expiry);
    // }
}


void notExpired(Medicine *arr, int count, char *date){
    
}
