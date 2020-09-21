// void strCopy(char target[], char source[])

// Гарантируется, что строка target не короче строки source.


#include <stdio.h>

void strCopy(char target[], char source[]) {
    int position;
    
    for ( position = 0; source[position] != 0; position++ ) {
        target[position] = source[position];
    }
    target[position] = 0;
}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
