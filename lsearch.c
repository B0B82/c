// В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
// Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.

// Пример ввода
// 40
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода
// 3

#include <stdio.h>

#define MAXS 100

int arrayScan(FILE *in, int array[], int limit) {
    int quantity = 0;
    
    for ( ; quantity < limit && fscanf(in, "%d", &array[quantity]) == 1; quantity++ );
    return quantity;
}

int arraySearch(int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[MAXS];
    int needle;
    int size;
    
    fscanf(in, "%d", &needle);
    
    size = arrayScan(in, array, MAXS);
    
    fprintf(out, "%d\n", arraySearch(array, size, needle));
    
    fclose(in);
    fclose(out);
    return 0;
}
