#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int x, y;
    while (cin >> x >> y) {
        cout << gcd(x, y) << endl;
    }
    return 0;
}
