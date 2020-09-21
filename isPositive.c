#include <stdio.h>

int main() {
    int index;
    
    scanf("%d", &index);
    
    if ( index > 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}

// Считать с клавиатуры число. Если число положительное, 
// вывести на экран «yes», иначе вывести «no».

// Пример ввода
// -20
// Пример вывода
// no