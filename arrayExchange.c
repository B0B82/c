// Написать функцию
// void arrayExchange(int array[], int len)

// Попарно обменять местами все четные элементы массива с нечетными, начиная с нулевого.
// a[0] <-> a[1] a[2] <-> a[3] .....
// Если последний элемент не имеет пары — не менять его значение.

// Запрещено использование дополнительного массива


#include <stdio.h>

void arrayExchange(int array[], int len) {
    for ( int i = 0, dim = len - 1; i < dim; i += 2 ) {
        int tmp = array[i];
        
        array[i] = array[i+1];
        array[i+1] = tmp;
    }
}


int main() {
    int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    



    return 0;
}
