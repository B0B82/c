// В файле task.in дана строка длиной не более 100 символов.
// Прочитать строку в память и произвести ее реверс.
// Результат вывести в task.out.

// Пример ввода
// hello
// Пример вывода
// olleh

#include <stdio.h>

#define LEN 100

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != 0; len++ );
    return len;
}

void arrayReverse(char array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int tmp = array[i];
        
        array[i] = array[j];
        array[j] = tmp;
    }
}

int main() {
    char str[LEN+1];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%s", str);
    
    arrayReverse(str, strLen(str));
    fprintf(out, "%s\n", str);
    fclose(in);
    fclose(out);
    return 0;
}
