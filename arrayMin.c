// Написать функцию:
// int arrayMin(int array[], int size)
// Вернуть значение минимального элемента в массиве.


#include <stdio.h>

int arrayMin(int array[], int size) {
    int min = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        if ( min > array[i] ) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
