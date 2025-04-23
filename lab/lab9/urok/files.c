#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("myfile", "r");


    // fseek - za tursene 
    // SEEL_SET - nachalo na faila
    // SEEK_CUR - tursi segashnata poziciq na cursosa
    // SEEK_END - tursi kraq na faila

    // ftell() kazva poziciqta na cursosa sega
    // rewind() vrushta cursosa v nachaloto
    
    // fgets() Прочита ред до определен знак.
    // fputs() Записва низ.
    // fprintf() Записва форматиран изход.
    // fscanf() Прочита форматиран вход. 

    // fread() Прочита байтов блок в буфер. //! nai-chesto za dvoichni failove
    // fwrite() Записва байтов блок от буфер. //! nai-chesto za dvoichni failove


    
}