#include <stdio.h>

int main() {
    int min, max;
    int step;
    
    scanf("%d %d", &min, &max);
    
    step = min - min % 2;
    
    if ( step < min ) {
        step += 2;
    }
    for ( ; step < max - 1; step += 2 ) {
        printf("%d ", step*step);
    }
    printf("%d\n", step*step);
    
    return 0;
}

// Считать с клавиатуры целые числа min и max. Вывести в строку квадраты всех четных чисел в 
// промежутке от min до max включительно. В указанном промежутке гарантированно существует 
// как минимум 1 парное число.

// Пример ввода
// 0 7
// Пример вывода
// 0 4 16 36


