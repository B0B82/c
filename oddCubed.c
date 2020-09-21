#include <stdio.h>

int main() {
    int min, max;
    int oddCube;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min = min + 1;
    }
    if ( max % 2 == 0 ) {
        max = max - 1;
    }
    
    for ( ; min < max; min += 2 ) {
        oddCube = min * min * min;
        printf("%d ", oddCube);
    }
    oddCube = min * min * min;
    printf("%d\n", oddCube);
    
    return 0;
}



// Считать с клавиатуры целые числа min и max. Вывести в строку кубы всех нечетных чисел в промежутке от min до max включительно. В указаном промежутке гарантированно существует минимум одно нечетное число.

// Пример ввода
// 0 7
// Пример вывода
// 1 27 125 343


// #include <stdio.h>

// int main() {
//     int min, max;
    
//     scanf("%d %d", &min, &max);
    
//     printf("1");
    
//     for ( int i = 3; i <= max; i += 2 ) {
//         printf(" %d", i*i*i);
//     }
    
//     printf("\n");
    
//     return 0;
// }
