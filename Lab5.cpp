#include <iostream> using namespace std; const int SIZE = 5;
void multiplyMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {     for (int a = 0; a < SIZE; ++a) {         for (int b = 0; b < SIZE; ++b) {             result[a][b] = 0;
            for (int c = 0; c < SIZE; ++c) {
                result[a][b] += mat1[a][c] * mat2[c][b];
            }
        }
    }
}
void printMatrix(int matrix[SIZE][SIZE]) {     for (int a = 0; a < SIZE; ++a) {         for (int b = 0; b < SIZE; ++b) {
            cout << matrix[a][b] << "\t";
        }
        cout << endl;
    }
}
int main() {
    int mat1[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int mat2[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int result[SIZE][SIZE];     multiplyMatrices(mat1, mat2, result);
    cout << "Result of matrix multiplication:" << endl;     printMatrix(result);
    return 0; }
