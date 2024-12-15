//Control_C501A P16425
#include <iostream>
#include <vector>
using namespace std;

const int THOUS_PRIME = 7919;
using VB = vector<bool>;

//PRE: vector of bools where v.size() >= 3
//POST: vector v filled indicatin wether v[i] is prime or not, being i the number
void fill_primes(VB &v) {
    for (int i = 2; i < v.size(); ++i) {
        if (v[i]) {
            for (int j = i+i; j < v.size(); j += i)
                v[j] = false;
        }
    }
    //0, 1 are NOT primes
    v[0] = v[1] = 0;
}


int main() {
    VB primes(THOUS_PRIME, true);
    fill_primes(primes);

    int n;
    while(cin >> n) {
        int i = 2; //start at i = 2, for it's the first prime
        while(n > 0) {
            if (primes[i]) {
                if (n != 1) cout << i << ',';
                else cout << i << endl;
                --n;
            }
            ++i;
        }
    }
}