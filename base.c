// Считать с клавиатуры целое неотрицательное число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 10).
// Вывести в консоль число, записанное в новой системе счисления.
// Задача решается без массивов.

// Пример ввода
// 8 3
// Пример вывода
// 22
#include <stdio.h>

int main() {
    int num, base;
    int k = 1;
    
    scanf("%d%d", &num, &base);
    
    for ( int i = num; base <= i; i /= base ) {
        k *= base;
    }
    
    for ( int x; k > 0; k /= base ) {
        x = num / k;
        printf("%d", x);
        if ( x > 0 ) {
            num -= k * x;
        }
    }
    
    printf("\n");
    
    return 0;
}

// #include <stdio.h>

// int mainFun(int num) {
//     int i = 1;
    
//     for ( ; i < num; i *= 2 ) {
//         num -= i;
//     }
//     return i;
// }

// int mainPrint(int a, int b) {
//     for ( ; b > 0; b /= 2 ) {
//         if ( a == 1 && b == 1 ) {
//             printf("1");
//         }
//         if ( a >= b ) {
//             printf("1");
//             a -= b;
//         } else {
//             printf("0");
//         }
//     }
//     return 0;
// }

// int main() {
//     int num, base;
//     unsigned long long x = 0;
//     unsigned long long i = 1;
    
//     scanf("%d%d", &num, &base);
    
//     if ( num > 1000000 && base == 2 ) {
//         x = mainFun(num);
//         mainPrint(num, x);
//     }
//     if ( num < 1000000 ) {
//         for ( ; num > 0; num /= base, i *= 10 ) {
//             x += (num % base) * i;
//         }
//         printf("%llu\n", x);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int num, base;
//     unsigned long long x = 0;
//     unsigned long long i = 1;
    
//     scanf("%d%d", &num, &base);
    
//     for ( ; num > 0; num /= base, i *= 10 ) {
//         x += (num % base) * i;
//     }
    
//     printf("%llu\n", x);
    
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int num, base;
//     int x = 0;
    
//     scanf("%d%d", &num, &base);
    
//     for ( int i = 1; num > 0 ; num /= base, i *=10) {
//         printf("*%d*", num);
//         printf(" %d ", num%base);
//         x += (num%base)*i;
//     }
    
//     printf("*%d*", x);
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num, base;
//     int extra = 0;
    
//     unsigned long long x2 = 0;
//     unsigned long long i = 1;
    
//     scanf("%d%d", &num, &base);
    
//     if ( num > 1000000 && base == 2 ) { // 2 147 483 647
//         while(num) {
//             printf("%d", num%2);
//             num /= 2;
//         }
//         return 0;
//     }
    
//     unsigned long long mainFun( int num, int base) {
//         unsigned long long x = 0;  
    
//         for ( ; num > 0; num /= base, i *= 10 ) {
//             x += (num % base) * i;
//         }
//         return x;
//     }
//     printf("%llu\n", mainFun(num, base));
    
//     return 0;
// }
