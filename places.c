// Считать с клавиатуры целое число.
// Вывести на экран количество знакомест, нужных для вывода этого числа.

// Пример ввода
// 123
// Пример вывода
// 3

#include <stdio.h>

int main() {
    int a;
    int counter = 1;
    
    scanf("%d", &a);
    
    if ( a < 0 ) {
        a *= -1;
        counter += 1;
    }
    
    for ( ; a > 9; a /= 10 ) {
        counter += 1;
    }
    
    printf("%d\n", counter);
    return 0;
}
