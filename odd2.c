// #include <stdio.h>

// int main() {
//     int min, max;
//     int step;
    
//     scanf("%d %d", &min, &max);
    
//     step = max;
    
//     if ( max % 2 == 0 ) {
//         step -= 1;
//     }
//     for ( ; step -3 > 0; step -= 2 ) {
//         printf("%d ", step);
//     }
    
//     printf("%d", step);
    
//     return 0;
// }

// Считать с клавиатуры два целых числа, причём второе число не меньше первого.
// Вывести в строку все нечётные числа в промежутке от первого до второго включительно.
// В указанном промежутке гарантируется на вывод хотя бы одно число.

// Пример ввода
// 7 15
// Пример вывода
// 7 9 11 13 15

#include <stdio.h>

int main() {
    int min, max;
    int step;
    
    scanf("%d %d", &min, &max);
    
    step = min;
    
    if ( min % 2 == 0 ) {
        step += 1;
    }
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    for ( ; step < max; step += 2 ) {
        printf("%d ", step);
    }
    
    printf("%d\n", step);
    
    return 0;
}
