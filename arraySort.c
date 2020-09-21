// Написать функцию:
// void arraySort(int array[], int size)
// Отсортировать элементы в порядке неубывания.
// Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.


#include <stdio.h>
#define SIZE 20

void arraySort(int array[], int size) {
    for ( int j = 0; j < size; j++ ) {
        for ( int i = 0, temp = 0; i < size; i++ ) {
            if ( array[j] < array[i] ) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int last = SIZE - 1;
    int array[SIZE] = { 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    
    arraySort(array, SIZE);
    
    printf("\n");
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}
