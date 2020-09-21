// void arrayPrint(FILE *out, int array[], int size)
// Функция должна вывести элементы массива через пробел, завершив вывод символом перевода строки.





#include <stdio.h>

// #define size 5

void arrayPrint(FILE *out, int array[], int size) {
    int slot = size - 1;
    
    for ( int i = 0; i < slot; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[slot]);
}
