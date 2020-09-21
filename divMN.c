// Считать с клавиатуры целые числа min, max, m, n, причём m и n положительные.
// Вывести на экран в столбик целые числа от min до max включительно, которые без остатка делятся как на m, так и на n.
// В указанном промежутке гарантируется хотя бы одно число, подлежащее выводу.

// Пример ввода
// 0 12 2 3
// Пример вывода
// 0
// 6
// 12


#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    int min, max, n, m;
    int val, rez;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    val = m / gcd(m, n) * n;
    
    rez = min - min % val;
    
    if ( min > 0 && min % val != 0 ) {
        rez += val;
    }
    
    for ( ; rez <= max; rez += val ) {
        printf("%d\n", rez);
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int min, max, n, m;
//     int val;
    
//     scanf("%d %d %d %d", &min, &max, &m, &n);
    
//     if ( m % n == 0 ) {
//         val = n;
//     } else if ( n % m == 0 ) {
//         val = m;
//     } else {
//         val = m * n;
//     }
    
//     for ( int rez = min - min % val; rez <= max; rez += val ) {
//         printf("%d\n", rez);
//     }
    
//     return 0;
// }
