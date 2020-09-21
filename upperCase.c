// В файле task.in дана последовательность символов.
// Перевести все буквы в верхний регистр и вывести результирующую последовательность в файл task.out

// Пример ввода
// abcd
// Пример вывода
// ABCD


#include <stdio.h>

// char upCa(char ch) {
//     return ch - 32;
// }

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char arr; fscanf(in, "%c", &arr) != EOF; ) {
        if ( arr > '`' && arr < '{' ) {
            fprintf(out, "%c", arr-32);
        } else {
            fprintf(out, "%c", arr);
        }
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}

// #include <stdio.h>

// #define LENGTH 4

// char upCa(char ch) {
// return (char)(ch - 32);
// }

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int array[LENGTH];
//     // int len = LENGTH - 1;
    
//     for ( int i = 0; i < LENGTH; i++ ) {
//         fscanf(in, "%c", &array[i]);
//     }
//     for ( int i = 0; i < LENGTH; i++ ) {
//         fprintf(out, "%c", upCa(array[i]));
//     }
//     // fprintf(out, "%c\n", upCa(array[len]));
//     fclose(in);
//     fclose(out);
    
//     return 0;
// }
