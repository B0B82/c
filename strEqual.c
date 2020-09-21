// int strEqual(char str1[], char str2[])

// Выяснить, равны ли строки.

// В файле task.in заданы две строки длиной не более 100 символов каждая.
// Если строки равны, вывести в task.out слово "yes" - иначе вывести "no".

// Пример ввода
// hello
// hello
// Пример вывода
// yes


#include <stdio.h>

#define LEN 100

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str2[i] == str1[i]; i++ ) {
        if ( str2[i] == 0 ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str1[LEN+1];
    char str2[LEN+1];
    
    fscanf(in, "%s", str1);
    fscanf(in, "%s", str2);
    
    if ( strEqual(str1, str2) != 0 ) {
        fprintf(out, "yes\n");
    } else {
        fprintf(out, "no\n");
    }
    fclose(in);
    fclose(out);
    return 0;
}



// int strEqual(char str1[], char str2[]) {
//     for ( int i = 0; scanf("%c", str1) != EOF; i++ ) {
//         for ( int j = 0; scanf("%c", str2) != EOF; j++ ) {
//             if ( str2[j] != str1[i] ) {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

