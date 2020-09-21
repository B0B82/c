// Написать функцию:
// void sliceShiftRight(int array[], int start, int end)
// Осуществить циклический сдвиг части массива на один элемент вправо от start до end включительно.


#include <stdio.h>

void sliceShiftRight(int array[], int start, int end) {
    if ( start < end ) {
        int temp = array[end];
        
        for ( int i = end; i > start; i-- ) {
            array[i] = array[i-1];
        }
        array[start] = temp;
    }
}

// void arrayShiftRight(int array[], int size) {
//     int dim = size - 1;
//     int tmp = array[dim];
    
//     for ( int i = dim; i > 0; i-- ) {
//         array[i] = array[i-1];
//     }
//     array[0] = tmp;
// }


int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
