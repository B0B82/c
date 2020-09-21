// void strUpperCase(char str[])

#include <stdio.h>

void strUpperCase(char str[]) {
    for ( int i = 0, temp = str[0]; temp != 0; i++ ) {
        temp = str[i];
        if ( temp > '`' && temp < '{' ) {
            str[i] -= 32;
        }
    }
}


// void strUpperCase(char str[]) {
//     for ( int i = 0; str[i] != 0; i++ ) {
//         if ( str[i] > '`' && str[i] < '{' ) {
//             str[i] -= 32;
//         }
//     }
// }


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