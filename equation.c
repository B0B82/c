#include <stdio.h>

int main() {
    int discrim;
    
    scanf("%d", &discrim);
    if ( discrim > 0 ) {
        printf("2\n");
    } else if ( discrim < 0 ) {
        printf("0\n");
    }
    if ( discrim == 0 ) {
        printf("1\n");
    }
    
    return 0;
}

// ax^{2}+bx+c=0,

// Считать с клавиатуры целое число - дискриминант квадратного уравнения. Вывести на экран число разных корней этого уравнения.

// Пример ввода
// -20
// Пример вывода
// 0