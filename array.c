// Считать в массив последовательность чисел длиной 10 из файла task.in.
// Записать его через пробел в файл task.out.

// Пример ввода
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода
// 10 20 30 40 50 60 70 80 90 100

#include <stdio.h>

#define LENGTH 10

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[LENGTH];
    int len = LENGTH - 1;
    
    for ( int i = 0; i < LENGTH; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    for ( int i = 0; i < len; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[len]);
    fclose(in);
    fclose(out);
    
    return 0;
}


    // fscanf(in, %s, str);
    // fprintf(out, %s, str);

    // int strLen(char str[]) {
    //     int len = 0;
    
    //     for ( ; str[len] != 0; len++ );
    //     return len;
    // }
    // printf("%d", strLen(in));
    // if ( in == NULL) {
    //     printf("loading error\n");
    //     return -1;
    // } else {
    //     printf("accepted\n");
    // }
    

    // for ( int i = 0; i < sizeof(array); i++ ) {
    //     fscanf(in, "%d ", &array[i]);
    // }

    // for ( int i = 0; i < sizeof(array); i++ ) {
    //     fprintf(out, "%d ", &array[i]);
    // }

