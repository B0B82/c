#include <stdio.h>

int main() {
    int maxDiv;
    
    scanf("%d", &maxDiv);
    
    for ( int i = 2; i < maxDiv / 2; i++ ) {
        if ( maxDiv % i == 0 ) {
            printf("%d\n", maxDiv/i);
            return 0;
        }
    }
    printf("0\n");
    
    return 0;
}

// Считать с клавиатуры целое положительное число. Вывести на экран 
// наибольший его нетривиальный делитель. В случае неопределенности 
// вывести 0.

// Пример ввода
// 12
// Пример вывода
// 6