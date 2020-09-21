// Написать функцию:
// void sliceShiftLeft(int array[], int start, int end)
// Осуществить циклический сдвиг части массива на один элемент влево от start до end включительно.


#include <stdio.h>

void sliceShiftLeft(int array[], int start, int end) {
    int tmp = array[start];
    
    for ( int i = start + 1; i <= end; i++ ) {
        array[i-1] = array[i];
    }
    array[end] = tmp;
}

// void arrayShiftLeft(int array[], int size) {
    int tmp = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        array[i-1] = array[i];
    }
    array[size-1] = tmp;
// }

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
