#include <stdio.h>
#include <string.h>

int main(){

    struct Book{
        char name[200];
        char author[200];
        char subject[200];
        int book_id;
    } book1; // moje da postavq vsichki instances tuk

    typedef struct {
        int feet;
        int inch;
    } Distance;
    
    struct Book b1;
    Distance d1;

    strcpy(book1.author,"I love C porgramming");

    union Data{
        int i;
        float f;
        char str[20];
    };
}