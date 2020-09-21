// Написать функцию:
// void arrayShiftRight(int array[], int size)
// Реализовать циклический сдвиг массива на 1 элемент вправо.
// Использование дополнительного массива не разрешается.


#include <stdio.h>

void arrayShiftRight(int array[], int size) {
    int dim = size - 1;
    int tmp = array[dim];
    
    for ( int i = dim; i > 0; i-- ) {
        array[i] = array[i-1];
    }
    array[0] = tmp;
}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
