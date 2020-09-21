#include <stdio.h>

int main() {
    int limit;
    int result = 1;
    
    scanf("%d", &limit);
    
    printf("1");
    
    for ( int i = 0; i < limit; i++ ) {
        result *= 2;
        printf(" %d", result);
    }
    printf("\n");
    
    return 0;
}


// Считать с клавиатуры целое неотрицательное число. Вывести через пробел 
// степени числа 2 от нулевой до заданной. Использовать цикл.

// Пример ввода
// 3
// Пример вывода
// 1 2 4 8