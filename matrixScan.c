// void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size);
// Столбец – первый индекс, строка – второй.

void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0, counter = 1; row < size; row++ ) {
        for ( int col = 0; col < size; col++, counter++ ) {
            matrix[col][row] = counter;
        }
    }
}

// void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
//     int quantity = 0;

//     for ( ; quantity < size && fscanf(in, "%d", &matrix[0][quantity]) == 1; quantity++ );
// }
