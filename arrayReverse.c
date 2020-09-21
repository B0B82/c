// Написать функцию:
// void arrayReverse(int array[], int size)

// Использование дополнительного массива не разрешается.


#include <stdio.h>

void arrayReverse(int array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int tmp = array[i];
        
        array[i] = array[j];
        array[j] = tmp;
    }
}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
