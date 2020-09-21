#include <stdio.h>

int main() {
    int min, max;
    int step;
    
    scanf("%d %d", &min, &max);
    
    step = min - min % 5;
    
    if ( step < min ) {
        step += 5;
    }
    for ( ; step <= max; step += 5 ) {
        printf("%d\n", step);
    }
    
    return 0;
}

// Считать min, max. Вывести в столбик кратные пяти числа от min до max включительно.

// Пример ввода
// 0 15
// Пример вывода
// 0
// 5
// 10
// 15