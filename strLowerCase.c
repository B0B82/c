// void strLowerCase(char str[])


#include <stdio.h>

void strLowerCase(char str[]) {
    for ( int i = 0, temp = str[0]; temp != 0; i++ ) {
        temp = str[i];
        if ( temp > '@' && temp < '[' ) {
            str[i] += 32;
        }
    }
}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
