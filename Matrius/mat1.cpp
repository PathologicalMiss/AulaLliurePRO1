#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

int main () {
    Matriu mat (5, Fila(5, 0));
    int n = mat.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            mat[i][j] = i+j;
        }
    }

     for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > j+1) cout << mat[i][j];
            else cout << " ";
        }
        cout << endl;
    }


}


