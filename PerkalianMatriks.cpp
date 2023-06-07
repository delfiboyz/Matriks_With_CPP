#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void multiplyMatrix(int A[MAX_ROWS][MAX_COLS], int B[MAX_ROWS][MAX_COLS], int C[MAX_ROWS][MAX_COLS], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[MAX_ROWS][MAX_COLS];
    int B[MAX_ROWS][MAX_COLS];
    int C[MAX_ROWS][MAX_COLS];
    int rowsA, colsA, rowsB, colsB;
    
    cout << "Masukkan jumlah baris matriks A: ";
    cin >> rowsA;
    
    cout << "Masukkan jumlah kolom matriks A: ";
    cin >> colsA;
    
    cout << "Masukkan elemen-elemen matriks A:\n";
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            cin >> A[i][j];
        }
    }
    
    cout << "Masukkan jumlah baris matriks B: ";
    cin >> rowsB;
    
    cout << "Masukkan jumlah kolom matriks B: ";
    cin >> colsB;
    
    cout << "Masukkan elemen-elemen matriks B:\n";
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cin >> B[i][j];
        }
    }
    
    if (colsA != rowsB) {
        cout << "Perkalian matriks tidak memungkinkan!";
        return 0;
    }
    
    multiplyMatrix(A, B, C, rowsA, colsA, colsB);
    
    cout << "Hasil perkalian matriks A dan B:\n";
    displayMatrix(C, rowsA, colsB);
    
    return 0;
}
