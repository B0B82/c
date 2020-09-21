#include <stdio.h>

int main() {
    int first, step, counter;
    
    scanf("%d %d %d", &first, &step, &counter);
    
    for ( int i = 1; i < counter; i++, first += step ) {
        printf("%d ", first);
    }
    printf("%d\n", first);
    
    return 0;
}

// #include <stdio.h>

// int main() {
//     int num, step, count;

//     scanf("%d %d %d", &num, &step, &count);

//     printf("%d", num);

//     for ( int i = 2; i <= count; i++ ) {
//         num += step;
//         printf(" %d", num);
//     }

//     return 0;
// }


// Считать с клавиатуры три целых числа - первый член, шаг и количество 
// членов арифметической прогрессии. Вывести в строку через пробел члены 
// заданной прогрессии.
// Задаваемое количество больше нуля.

// Пример ввода
// 12 2 4
// Пример вывода
// 12 14 16 18