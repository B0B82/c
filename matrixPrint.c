// void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size);
// Столбец – первый индекс, строка – второй.

void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int last = size - 1;

    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < last; col++ ) {
            printf( "%d", matrix[row][col]);
        }
        printf("%d\n", matrix[row][last]);
    }
}


// void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
//     int last = size - 1;

//     for ( int row = 0; row < size; row++ ) {
//         for ( int col = 0; col < last; col++ ) {
//             printf( "%d", matrix[row][col]);
//         }
//         printf("%d\n", matrix[row][last]);
//     }
// }
