// Считать из task.in два числа.
// Записать в task.out результат выполнения различных побитовых операций.

// Пример ввода
// 1 1
// Пример вывода
// 1&1=1
// 1|1=1
// 1^1=0
// 1<<1=2
// 1>>1=0


#include <stdio.h>

int main() {
    int a, b;
    int x1, x2, x3, x4, x5;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d%d", &a, &b);
    
    x1 = a & b;
    x2 = a | b;
    x3 = a ^ b;
    x4 = a << b;
    x5 = a >> b;
    
    fprintf(out, "%d&%d=%d\n", a, b, x1);
    fprintf(out, "%d|%d=%d\n", a, b, x2);
    fprintf(out, "%d^%d=%d\n", a, b, x3);
    fprintf(out, "%d<<%d=%d\n", a, b, x4);
    fprintf(out, "%d>>%d=%d\n", a, b, x5);
    fclose(in);
    fclose(out);
    
    return 0;
}
