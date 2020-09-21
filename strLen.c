// В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
// Прочитать строку в память и подсчитать ее длину.
// Результат вывести в task.out.

// Пример ввода
// hello
// Пример вывода
// 5


#include <stdio.h>

#define LEN 100

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != 0; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[LEN+1];
    
    fscanf(in, "%s", str);
    fclose(in);
    
    fprintf(out, "%d\n", strLen(str));
    fclose(out);
    
    return 0;
}

// #include <stdio.h>

// int main() {
//     int counter = 0;
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
    
//     for ( char str; fscanf(in, "%c", &str) != EOF && counter < 100; counter++ );
    
//     fprintf(out, "%d\n", counter);
//     fclose(in);
//     fclose(out);
//     return 0;
// }



// #include <stdio.h>
// #define MAX 100

// int main() {
//     int counter = 0;
//     char str[MAX];
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
    
//     for ( ; fscanf(in, "%c", str) != EOF; ) {
//         counter += 1;
//     }
    
//     fprintf(out, "%d\n", counter);
//     fclose(in);
//     fclose(out);
//     return 0;
// }
