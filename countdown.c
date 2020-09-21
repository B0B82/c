#include <stdio.h>

int main() {
    int counter;
    
    scanf("%d", &counter);
    
    for ( ; 0 < counter; counter-- ) {
        printf("%d ", counter);
    }
    printf("0\n");
    
    return 0;
}

// Считать с клавиатуры целое неотрицательное число.
// Вывести в строку убывающий ряд чисел от заданного до нуля.

// Пример ввода
// 7
// Пример вывода
// 7 6 5 4 3 2 1 0