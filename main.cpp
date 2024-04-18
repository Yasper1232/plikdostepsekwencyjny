#include <stdio.h>
#include <stdlib.h>
#include <iostream>


FILE* fptr;


int main(){

    fptr = fopen("plik.txt","w");
    if(fptr == 0){

        printf("blad otwierania pliku\n");
        exit(1);
    }

    fprintf(fptr,"napis dodawany na koncu pliku.\n");

    fclose(fptr);

    return(0);
}