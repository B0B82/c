// Написать функцию:
// int arrayMax(int array[], int size)
// Вернуть значение максимального элемента в массиве.


#include <stdio.h>

int arrayMax(int array[], int size) {
    int max = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        if ( max < array[i] ) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
