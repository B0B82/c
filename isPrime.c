#include <stdio.h>

int isPrime(int n) {
    if ( n == 2 ) {
        return 1;
    }
    
    if ( n <= 1 || n % 2 == 0 ) {
        return 0;
    }
    
    for ( int i = 3; i < n / 2; i += 2 ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int num;
    
    scanf("%d", &num);
    
    if ( isPrime(num) == 1 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}



// Написать функцию:
// int isPrime(int n)
// Проверить, является ли данное число простым.