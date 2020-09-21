// В файле task.in даны два целых положительных числа.
// Записать в файл task.out наименьшее общее кратное этих чисел.
// Пример ввода
// 3 5
// Пример вывода
// 15


#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    int a, b;
    long long x;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d%d", &a, &b);
    
    x = a / gcd(a, b) * b;
    
    fprintf(out, "%lli\n", x);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
