#include <stdio.h>

int main() {
    int left, right;
    
    scanf("%d %d", &left, &right);
    
    if ( left == right ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}

// Считать с клавиатуры 2 целых числа. 
// Если они равны вывести на экран «yes», 
// в противном случае вывести «no».

// Пример ввода
// -20 20
// Пример вывода
// no