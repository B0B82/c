#include <stdio.h>

int main() {
    int factorial;
    int result;
    
    scanf("%d", &factorial);
    
    for ( result = 1; 1 < factorial; factorial-- ) {
        result *= factorial;
    }
    if ( factorial < 0 ) {
        printf("-1\n");
    } else {
        printf("%d\n", result);
    }
    
    return 0;
}



// Вычислить и вывести факториал считанного с клавиатуры целого числа.
// В случае неопределенности ответа вывести -1.
// Для решения пользоваться циклами.

// Пример ввода
// 5
// Пример вывода
// 120


// #include <stdio.h>

// int main() {
//     int factorial;
//     int res = 1;
    
//     scanf("%d", &factorial);
    
//     for ( int i = 1; i < factorial + 1; i++ ) {
//         res *= i;
//     }
//     if ( factorial < 0 ) {
//         printf("-1");
//     } else {
//         printf("%d\n", res);
//     }
    
//     return 0;
// }

