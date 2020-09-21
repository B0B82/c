#include <stdio.h>

int main() {
    int max;
    
    scanf("%d", &max);
    
    printf("0");
    
    for ( int i = 2; i <= max; i += 2 ) {
        printf(" %d", i);
    }

    printf("\n");
    
    return 0;
}

// Считать с клавиатуры целое положительное число.
// Вывести в строку все чётные числа от нуля до указанного числа включительно.

// Пример ввода
// 7
// Пример вывода
// 0 2 4 6


    // if ( max != 0 ) {
    //     printf("0 ");
    // }
    
    // for ( int i = 1; i <= max; i++ ) {
    //     if ( i % 2 == 0 ) {
    //         printf(" %d", i);
    //     }
    // }
    // printf("\n");


// #include <stdio.h>

// int main() {
//     int max;
//     int i = 0;
    
//     scanf("%d", &max);

//     printf("0");

//     while ( i < max ) {
//         printf(" %d", i +=2);
//     }

//     return 0;
// }
