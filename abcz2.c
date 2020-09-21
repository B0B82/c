#include <stdio.h>

int main() {
    int a;
    int check=1;

    scanf("%d", &a);

    if ( a % 2 == 0 ) {
        printf("alpha\n");
        check += 2;
    }
    if ( a % 3 == 0 ) {
        printf("bravo\n");
        check += 3;
    }
    if ( a % 5 == 0 ) {
        printf("charlie\n");
        check += 5;
    }
    if ( check == 1 ) {
        printf("zulu\n");
    }

    return 0;
}

// Считать с клавиатуры целое число.
// - Если число четное, вывести alpha
// - Если число кратно трем, вывести bravo
// - Если число кратно пяти, вывести charlie
// - Если число не кратно ни одному из них, вывести zulu

// Пример ввода
// 8
// Пример вывода
// alpha

    // if ( a % 2 == 0 ) {
    //     printf("alpha\n");
    // } else if ( a % 3 == 0 ) {
    //     printf("bravo\n");
    // } else if ( a % 5 == 0 ) {
    //     printf("charlie\n");
    // } else {
    //     printf("zulu\n");
    // }