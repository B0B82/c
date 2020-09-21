#include <stdio.h>

int main() {
    int min, max;
    int step;
    
    scanf("%d %d", &min, &max);
    
    step = min - min % 3;
    
    if ( step < min ) {
        step += 3;
    }
    for ( ; step <= max; step += 3 ) {
        printf("%d\n", step);
    }
    
    return 0;
}


// Считать min, max. Вывести в столбик кратные тройке числа от min до max включительно.

// Пример ввода
// 0 9
// Пример вывода
// 0
// 3
// 6
// 9