// В файле task.in дана последовательность символов.
// Перевести все буквы в нижний регистр и вывести результирующую последовательность в файл task.out

// Пример ввода
// ABCD
// Пример вывода
// abcd

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char arr; fscanf(in, "%c", &arr) != EOF; ) {
        if ( arr > '@' && arr < '[' ) {
            fprintf(out, "%c", arr+32);
        } else {
            fprintf(out, "%c", arr);
        }
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
