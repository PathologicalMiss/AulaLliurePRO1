//Mode P65538
#include <iostream>
#include <vector>
#include <string>
using namespace std;

using P = pair<int, string>;
using VP = vector<P>;

int find(const VP &v, string s) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (v[i].second == s) return i;
    }
    return -1;
}


void read_vector(VP &v, int n) {
    string in;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        int pos = find(v, in);
        if (pos == -1) {
            v.push_back(P(1, in));
        }
        else ++v[pos].first;
    }    
}

void print_mode(const VP &v) {
    int mode = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].first > v[mode].first or (v[i].first == v[mode].first and v[i].second > v[mode].second)) mode = i;
    }
    cout << v[mode].second << endl;
}



int main() {
    int n;
    while(cin >> n and n != 0) {
        VP v;
        read_vector(v, n);
        print_mode(v);
    }
}