#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    long long id;
    double price;
    int quantity;
    char name[31];
    char expiry[8];
} Medicine;

int main() {
    Medicine m1;
    m1.id = 1234567890123;
    m1.price = 7.99;
    m1.quantity = 50;
    strncpy(m1.name, "Paracetamol", sizeof(m1.name));
    strncpy(m1.expiry, "06.2025", sizeof(m1.expiry));

    FILE *f = fopen("medicines.bin", "wb");
    if (!f) {
        perror("File open error");
        return 1;
    }

    fwrite(&m1, sizeof(Medicine), 1, f);
    fclose(f);
    return 0;
}