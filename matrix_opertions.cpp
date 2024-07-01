#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int rowA = 0;
    int colA = 0;
    ifstream fin("100k.txt");
    string line;

    int arrayA[3][3] = {{0}};
    int arrayB[3][3] = {{0}};
    int arrayC[3][3] = {{0}};

    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    while (getline(myfile, line)) {
        colA = 0;
        int x;
        stringstream stream(line);
        while (stream >> x) {
            arrayA[rowA][colA] = x;
            colA++;
        }
        rowA++;
    }

    cout << "Matrix A:" << endl;
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            cout << arrayA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "First Matrix (3x3 submatrix from A):" << endl;
    for (int i = 0; i < 3 && i < rowA; i++) {
        for (int j = 0; j < 3 && j < colA; j++) {
            cout << arrayA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Second Matrix (copy of 3x3 submatrix into B):" << endl;
    for (int i = 0; i < 3 && i < rowA; i++) {
        for (int j = 0; j < 3 && j < colA; j++) {
            arrayB[i][j] = arrayA[i][j];
            cout << arrayB[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Multiplication Result (A * B = C):" << endl;
    for (int i = 0; i < 3 && i < rowA; i++) {
        for (int j = 0; j < 3 && j < colA; j++) {
            arrayC[i][j] = 0;
            for (int k = 0; k < 3 && k < colA; k++) {
                arrayC[i][j] += arrayA[i][k] * arrayB[k][j];
            }
            cout << arrayC[i][j] << " ";
        }
        cout << endl;
    }

    myfile.close();

    return 0;

}
