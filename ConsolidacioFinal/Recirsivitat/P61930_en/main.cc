#include <iostream>
using namespace std;


bool is_multiple_3(int n);


int main() {
    int n;
    while (cin >> n) {
        cout << (is_multiple_3(n) ? "true" : "false") << endl;
    }
    return 0;
}
