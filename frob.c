// Ввести положительную длину последовательности чисел, затем саму последовательность.
// Вывести искаженную последовательность, полученную применением к исходным членам побитовой операции xor с числом 42.
// Каждый член вывести на отдельной строке.
// Пример ввода
// 2
// 0 42
// Пример вывода
// 42
// 0

#include <stdio.h>

int main() {
    int length;
    int x;
    
    scanf("%d\n", &length);
    
    for ( ; length > 0; length-- ) {
        scanf("%d", &x);
        printf("%d\n", x^42);
    }
    
    return 0;
}

// #include <stdio.h>

// int main() {
//     int length;
//     int x;
//     int array[length];
//     int len = length - 1;
    
//     scanf("%d\n", &length);
    
//     for ( int i = 0; len >= 0; len--, i++ ) {
//         scanf("%d", &x);
//         array[i] = x;
//         printf("%d\n", array[i]^42);
//     }
//     return 0;
// }
