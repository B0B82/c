#include <stdio.h>

int main() {
    int limit, power;
    int result = 1;
    
    scanf("%d %d", &limit, &power);
    printf("1");
    
    for ( int i = 0; i < power; i++ ) {
        result *= limit;
        printf(" %d", result);
    }
    printf("\n");
    
    return 0;
}


// Считать с клавиатуры целое основание и целый неотрицательный показатель. 
// Вывести через пробел степени числа основания от нулевой до заданной.

// Пример ввода
// 2 3
// Пример вывода
// 1 2 4 8