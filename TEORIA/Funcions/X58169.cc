//X58169  Positions of a maximum within two sequences
#include <iostream>
using namespace std;

//Pre: lectura de una seqüència no negativa d'enters (cin>>)
//Post: max = max de la seqüència i lp = última aparició de max en la seqüència
void infoSequence1(int& max, int& lpos) {
    int n;
    max = -1;
    int pos = 1;
    while (cin >> n and n!= 0) {
        if (n >= max) {
            max = n;
            lpos = pos;
        }
        ++pos;
    }

}

void infoSequence2(int max, int& fpos) {
    int n;
    int pos = 1;
    bool trobat = false;
    while (cin >> n and n != 0 and !trobat) {
        if (n == max) {
            fpos = pos;
            trobat = true;
        }
        ++pos;
    }
    if (!trobat) fpos = 0;

}

int main() {
    int max, lpos, fpos;
    infoSequence1(max, lpos);
    infoSequence2(max, fpos);
    cout << max << ' ' << lpos << ' ';
    if (fpos == 0) cout << '-';
    else cout << fpos;
    cout << endl;
}