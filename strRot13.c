// Написать функцию:
// void strRot13(char str[])
// Зашифровать строку по алгоритму ROT13

#include <stdio.h>

#define LEN 100

void strRot13(char str[]) {
    for ( int i = 0, temp = str[0]; temp != 0; i++ ) {
        temp = str[i];
        if ( temp > '`' && temp < '{' ) {
            if ( temp < 'n' ) {
                str[i] += 13;
            } else {
                str[i] -= 13;
            }
        }
        if ( temp > '@' && temp < '[' ) {
            if ( temp < 'N' ) {
                str[i] += 13;
            } else {
                str[i] -= 13;
            }
        }
    }
}

int main() {
    char str[LEN+1];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", str);

    strRot13(str);

    fprintf(out, "%s\n", str);

    fclose(in);
    fclose(out);
    return 0;
}

// void strRot13(char str[]) {
//     char base[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//     char inp[53] =  "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
//     for ( int i = 0, temp = str[0]; temp != 0; i++ ) {
//         temp = str[i];
//         for ( int j = 0; j < 53; j++ ) {
//             if ( temp == base[j] ) {
//                 str[i] = inp[j];
//             }
//         }
//     }
// }

// void strRot13(char str[]) {
//     for ( int i = 0, temp = str[0]; temp != 0; i++ ) {
//         temp = str[i];
//         if ( temp > '`' && temp < '{' ) {
//             if ( temp < 'n' ) {
//                 str[i] += 13;
//             } else {
//                 str[i] -= 13;
//             }
//         }
//         if ( temp > '@' && temp < '[' ) {
//             if ( temp < 'N' ) {
//                 str[i] += 13;
//             } else {
//                 str[i] -= 13;
//             }
//         }
//     }
// }