// Написать функцию:
// arrayShiftLeft(int array[], int size)
// Реализовать циклический сдвиг массива на 1 элемент влево.
// Использование дополнительного массива не разрешается.

#include <stdio.h>

void sliceShiftLeft(int array[], int start, int end) {
    if ( start < end ) {
        int temp = array[start];
        
        for ( int i = start; i < end; i++ ) {
            array[i] = array[i+1];
        }
        array[end] = temp;
    }
}

// void sliceShiftLeft(int array[], int start, int end) {
//     if ( start < end ) {
//         int tmp = array[start];
        
//         for ( int i = start + 1; i <= end; i++ ) {
//             array[i-1] = array[i];
//         }
//         array[end] = tmp;
//     }
// }


int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
