
#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 3;

// Function to add two matrices
void addmatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    // Loop through each row
    for(int i = 0; i < ROWS; i++) {
        // Loop through each column
        for(int j = 0; j < COLS; j++) {
            // Add corresponding elements from mat1 and mat2, store in result
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int result[ROWS][COLS];

    // Input for Matrix 1
    cout << "Enter values for Matrix 1:" << endl;
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input for Matrix 2
    cout << "Enter values for Matrix 2:" << endl;
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Add the matrices using the addmatrices function
    addmatrices(matrix1, matrix2, result);

    // Display Matrix 1
    cout << "Matrix 1: " << endl;
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Display Matrix 2
    cout << "Matrix 2: " << endl;
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    // Display Result
    cout << "Result: " << endl;
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}