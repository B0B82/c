#include <stdio.h>

int isPrime(int n) {
    if ( n == 2 ) {
        return 1;
    }
    
    if ( n <= 1 || n % 2 == 0 ) {
        return 0;
    }
    
    for ( int i = 3; i*i < n; i++ ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num, max;
    int count = 1;
    
    scanf("%d", &num);
    
    if ( num < 1 ) {
        printf("-1\n");
        return 0;
    }
    for ( int i = 1; count <= num; i++ ) {
        if ( isPrime(i) == 1 ) {
            count += 1;
            max = i;
            // printf("%d * %d\n", count, max);
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}


// Вывести N-ное по счёту простое число (см. Википедию).
// N считать с клавиатуры.
// Оптимизировать работу программы, насколько это возможно.
// В случае неопределенности ответа вывести -1.

// Пример ввода
// 3
// Пример вывода
// 5

// #include <stdio.h>

// int isPrime(int n) {
//     if ( n == 2 ) {
//         return 1;
//     }
    
//     if ( n <= 1 || n % 2 == 0 ) {
//         return 0;
//     }
    
//     for ( int i = 3, limit = n / 2; i < n / 2; i += 2 ) {
//         if ( n % i == 0 ) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main() {
//     int num, max;
//     int count = 1;
    
//     scanf("%d", &num);
    
//     if ( num < 1 ) {
//         printf("-1\n");
//         return 0;
//     }
//     for ( int i = 1; count <= num; i++ ) {
//         if ( isPrime(i) == 1 ) {
//             count += 1;
//             max = i;
//             // printf("%d * %d\n", count, max);
//         }
//     }
    
//     printf("%d\n", max);
    
//     return 0;
// }
