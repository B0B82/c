#include <stdio.h>

int main() {
    int min, max, divisor;
    int step;
    
    scanf("%d %d %d", &min, &max, &divisor);
    
    step = min - min % divisor;
    
    if ( step < min ) {
        step += divisor;
    }
    for ( ; step <= max; step += divisor ) {
        printf("%d\n", step);
    }
    
    return 0;
}

// Считать с клавиатуры целые числа min, max и положительный делитель. Вывести в столбик числа, кратные делителю, от min до max включительно.

// Пример ввода
// 0 8 2
// Пример вывода
// 0
// 2
// 4