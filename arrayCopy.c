// Написать функцию
// void arrayCopy(int destination[], int source[], int size)


#include <stdio.h>

void arrayCopy(int destination[], int source[], int size) {
    for ( int i = 0; i < size; i++ ) {
        destination[i] = source[i];
    }
}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
