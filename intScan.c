// int intScan(FILE *in)
// Считать число из файла и вернуть его.


#include <stdio.h>

int intScan(FILE *in) {
    int file;
    
    fscanf(in, "%d", &file);
    return file;
}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
