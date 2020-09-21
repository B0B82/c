// Написать функцию:
// int arraySum(int array[], int size)
// Вернуть сумму элементов массива.
// size > 0


#include <stdio.h>

int arraySum(int array[], int size) {
    int sum = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
