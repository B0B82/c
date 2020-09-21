#include <stdio.h>

int main() {
    int num;
    int sumdiv = 0;
    
    scanf("%d", &num);
    
    for ( int i = 1; i <= num; i++ ) {
        if ( num % i == 0 ) {
            sumdiv += 1;
        }
    }
    
    printf("%d\n", sumdiv);
    
    return 0;
}

// Считать с клавиатуры целое положительное число, 
// вывести на экран количество всех делителей этого числа.
// Пример ввода
// 12
// Пример вывода
// 6