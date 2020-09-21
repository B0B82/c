// void arrayAbs(int array[], int size)
// Заменить каждый элемент массива его абсолютным значением.



#include <stdio.h>

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0) {
            array[i] *= -1;
        }
    }
}


int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
