// Написать функцию:
// void sliceReverse(int array[], int lo, int hi)
// Осуществить реверс части массива от lo до hi включительно.


#include <stdio.h>
void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; lo++, hi-- ) {
        int temp = array[lo];
        
        array[lo] = array[hi];
        array[hi] = temp;
    }
}

void sliceReverse(int array[], int lo, int hi) {

}

int main() {
    int a;

    scanf("%d", &a);



    return 0;
}
