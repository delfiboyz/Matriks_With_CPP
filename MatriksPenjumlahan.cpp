#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void addMatrix(int A[MAX_ROWS][MAX_COLS], int B[MAX_ROWS][MAX_COLS], int C[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] + B[i][j];
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
    int rows, cols;
    
    cout << "Masukkan jumlah baris dan kolom matriks: ";
    cin >> rows >> cols;
    
    cout << "Masukkan elemen-elemen matriks A:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> A[i][j];
        }
    }
    
    cout << "Masukkan elemen-elemen matriks B:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> B[i][j];
        }
    }
    
    addMatrix(A, B, C, rows, cols);
    
    cout << "Hasil penjumlahan matriks A dan B:\n";
    displayMatrix(C, rows, cols);
    
    return 0;
}
