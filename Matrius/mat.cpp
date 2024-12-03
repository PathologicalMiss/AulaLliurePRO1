#include <iostream>
#include <vector>

using namespace std;


int main() {
    int files, columnes;
    cin >> files >> columnes;

    vector< vector<int> > mat1(files, vector<int>(columnes));
    for (int i = 0; i < files; ++i){
        for  (int j = 0; j < columnes; ++j) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
}
