#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( int row = 1, counter = 2; row < total; row++ ) {
        for ( int col = 1; col > row; col++ ) {
            printf("*%d ", counter);
            counter += 1;
        }
        printf("+%d\n", counter);
        counter += 1;
    }
    
    return 0;
}


// #include <stdio.h>

// int main() {
//     int total = 3;
//     int out;
    
//     scanf("%d", &total);
    
//     for ( int row = total, i = 0; row > 0; row--, i++ ) {
//         // out = 2*total - i*total;
//         for ( int col = 1; col < row; col++ ) {

//             printf("+%d ", col);
//         }
//         printf("*%d\n", row);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int total;
    
//     scanf("%d", &total);
    
//     for ( int row = total, col = 1; row > 0; row-- ) {
//         for ( int col = 1; col < row; col++ ) {
//             col = total * total - total * row + col;
//             printf("%d ", col);
//         }
//         row = total * total - total * row + col;
//         printf("%d\n", row);
//     }

//     return 0;
// }


// Вывести числовую пирамидку на total строк. Порядок строк – обратный.
// В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.

// Пример ввода
// 3
// Пример вывода
// 4 5 6
// 2 3
// 1