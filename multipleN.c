#include <stdio.h>

int main() {
    int max;
    int divisor;
    
    scanf("%d %d", &max, &divisor);
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    max -= max % divisor;
    for ( int i = 0; i < max; i += divisor ) {
        printf("%d ", i);
    }
    
    printf("%d\n", max);
    
    return 0;
}


// Считать с клавиатуры целое неотрицательное число-максимум.
// Считать с клавиатуры целый, не равный нулю делитель.
// Вывести в строку числа от нуля до указанного максимума включительно, 
// кратные заданному делителю.

// Пример ввода
// 99 10
// Пример вывода
// 0 10 20 30 40 50 60 70 80 90


// #include <stdio.h>

// int main() {
//     int max;
//     int div;
    
//     scanf("%d %d", &max, &div);
    
//     printf("0");
    
//     for ( int i = div; i <= max; i += div ) {
//         printf(" %d", i);
//     }
    
//     printf("\n");
    
//     return 0;
// }
