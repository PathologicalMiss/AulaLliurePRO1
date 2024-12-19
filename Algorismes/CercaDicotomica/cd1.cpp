#include <iostream>
#include <vector>
#include <algorithm>
#include <random> // Required for random_device, mt19937, shuffle
using namespace std;

vector<int> generate_random_vector(int size, int lower_bound, int upper_bound) {
    // Create a vector with numbers from lower_bound to upper_bound-1
    vector<int> vec;
    for (int i = lower_bound; i < upper_bound; ++i) {
        vec.push_back(i);
    }

    // Shuffle the vector to randomize the order
    random_device rd;    // Random device to seed the generator
    mt19937 g(rd());     // Mersenne Twister random number generator
    shuffle(vec.begin(), vec.end(), g);  // Shuffle the vector

    // Take the first 'size' elements of the shuffled vector
    vec.resize(size);

    // Sort the vector in increasing order
    sort(vec.begin(), vec.end());

    return vec;
}


int dico_search(const vector<int> &v, int l, int r, int n) {
    if (l>r) return -1;
    int mid = (l+r/2);
    if (v[mid] < n) return dico_search(v, l, mid, n);
    if (v[mid] > n) return dico_search(v, mid, l, n);
    else return mid;

}


int main() {
    int size = 10;           // Desired number of elements in the vector
    int lower_bound = 1;     // Lower bound of the range
    int upper_bound = 100;   // Upper bound of the range

    vector<int> v = generate_random_vector(size, lower_bound, upper_bound);

    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;


    int n;
    cin >> n;
    int pos = dico_search(v, 0, size, n);
    if (pos != -1) cout << "Posició de " << n << " al vector és " << pos << endl;
    else cout << "L'element " << n << "no es troba al vector :(" << endl;


}
