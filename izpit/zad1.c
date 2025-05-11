#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkExpire(int year1, int year2, int month1, int month2);

typedef struct {
    char name[31];
    char expiryDate[8];
    long long id;
    float price;
    int quantity;
}Medicine;

int main(){
  

    FILE *fptr = fopen("medicines.bin", "rb");
    if(!fptr){
        printf("Error with opening file");
        return 1;
    }

    fseek(fptr, 0, SEEK_END);
    size_t fileSize = ftell(fptr);
    if(fileSize == -1L){
        printf("Error using ftell");
        return 1;
    }


    int count = fileSize/ sizeof(Medicine);

    Medicine *medicines = malloc(fileSize);
    if(medicines == NULL){
        printf("Error allocating memory");
        return 1;
    }

    rewind(fptr);

    fread(medicines, sizeof(Medicine), count, fptr);

    fclose(fptr);
    free(medicines);

}

Medicine* Expired(Medicine *medicines, int count, char *checkDate){
    Medicine *ExpiredMedicines = NULL;

    int ExpiredCount = 0;
    int month2 = 0, year2 = 0;
    sscanf(checkDate, "%2d.%4d", &month2, &year2);

    for(int i = 0; i < count; i++){
        int month1 = 0, year1 = 0;
        sscanf(medicines[i].expiryDate, "%2d.%4d", &month1, &year1);
        
        if(checkExpire(year1, year2, month1, month2) == 0){
            ExpiredMedicines = realloc(ExpiredMedicines, (ExpiredCount + 1)* sizeof(Medicine));
            if(ExpiredMedicines == NULL){
                printf("Error allocating memory");
                return NULL;
            }
            ExpiredMedicines[ExpiredCount] = medicines[i];
            ExpiredCount++;
        }
    }
    return ExpiredMedicines;
}

int checkExpire(int year1, int year2, int month1, int month2){
    if(!((year1 == year2 && month1 < month2) || (year1 < year2))){
        return 0;
    } else return 1;
}

int OfferCount(Medicine *medicines, int count, double minPrice, double maxPrice){
    FILE *fptr = fopen("offer.txt", "w");
    if(!fptr){
        printf("Error opening file");
        return 1;
    }
    int inPriceCount = 0;
    for(int i = 0; i < count; i++){
        if(IsInRange(minPrice, maxPrice, medicines[i].price) == 0){
            inPriceCount++;
            fprintf(fptr, "Name: %s\n", medicines[i].name);
            fprintf(fptr, "Expiry date: %s\n", medicines[i].expiryDate);
            fprintf(fptr, "ID: %lld\n", medicines[i].id);
            fprintf(fptr, "Price: %lf leva\n", medicines[i].price);
            

        }
    }
    fclose(fptr);
    return inPriceCount;
}

int IsInRange(double minPrice, double maxPrice, double productPrice){
    if((productPrice < minPrice ) || (productPrice>maxPrice)){
        return 1;
    } else return 0;
}


int isValid(char *productName, char *productExpiryDate, char *checkName, char *checkExpiryDate){
    if((strcmp(productName, checkName) == 0) && strcmp(productExpiryDate, checkExpiryDate) == 0){
        return 0;
    }
    return 1;
}

void deleteElement(Medicine **medicines, int *count, char *checkName, char *checkExpiryDate){
    int localCount = *count;
    for(int i = 0; i < *count; i++){ 
        if(isValid((*medicines)[i].name, (*medicines)[i].expiryDate, checkName, checkExpiryDate) == 0){
            for(int j = i; j < *count-1; j++){
                (*medicines)[j] = (*medicines)[j+1];
                
            }
            (*count)--;
            i--;
        
        }
    }   
    *medicines = realloc(*medicines, (*count) * sizeof(Medicine));
    if(*medicines == NULL){
        printf("Error");
        return 1;
    }
    if((*count) == localCount){
        printf("No match found");
        return 1;
    }
    return 0;
}
