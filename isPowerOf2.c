#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    if ( !(num & (num - 1)) ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}

// Считать с клавиатуры целое положительное число. Если число является целой 
// степенью двойки, вывести "yes", иначе вывести "no".

// Пример ввода
// 8
// Пример вывода
// yes

// for ( int i = 2; i <= limit; i *= 2 ) {
    //     if ( limit == i ) {
    //         rez += 1;
    //     }
    // }
    
    // if ( rez > 0 ) {