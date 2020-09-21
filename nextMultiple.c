#include <stdio.h>

int main() {
    int dividend, divisor;
    int multiple;
    
    scanf("%d %d", &dividend, &divisor);
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    multiple = dividend - dividend % divisor;
    if ( multiple < dividend ) {
        multiple += divisor;
    }
    
    printf("%d\n", multiple);
    
    return 0;
}

// #include <stdio.h>

// int main() {
//     int dividend, divisor;
//     int x = 0;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     if ( dividend > 0 ) {
//         x = dividend + divisor - dividend % divisor;
//     }
//     if ( dividend <= 0 ) {
//         x = dividend - dividend % divisor;
//     }
//     printf("%d\n", x);
    
//     return 0;
// }


// Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
// Вывести на экран наименьшее число, кратное делителю, не меньшее делимого.
// Пример ввода
// 15 6
// Пример вывода
// 18


// #include <stdio.h>

// int main() {
//     int dividend, divisor;
//     int x;
    
//     scanf("%d %d", &dividend, &divisor);
    
//     if ( dividend < 0 ) {
//         dividend = dividend*(-1);
//     }
//         x = dividend + divisor - (dividend % divisor);
    
//     printf("%d\n", x);
    
//     return 0;
// }