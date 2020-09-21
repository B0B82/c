#include <stdio.h>

int main() {
    int min, max;
    int step;
    
    scanf("%d %d", &min, &max);
    
    step = min;
    
    if ( min % 2 != 0 ) {
        step += 1;
    }
    for ( ; step <= max; step += 2 ) {
        printf("%d\n", step);
    }
    
    return 0;
}

// Считать min, max. Вывести в столбик чётные числа от min до max включительно.

// Пример ввода
// 0 8
// Пример вывода
// 0
// 2
// 4
// 6
// 8