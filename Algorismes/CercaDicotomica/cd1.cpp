#include <iostream>
#include <vector>
#include <algorithm>
#include <random> // Required for random_device, mt19937, shuffle
using namespace std;

// Function to generate a random vector of a given size with numbers in a specific range
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

    // Resize the vector to keep only the first 'size' elements
    vec.resize(size);

    // Sort the vector in increasing order
    sort(vec.begin(), vec.end());

    return vec;
}

// Function to perform binary search on a sorted vector
int dico_search(const vector<int> &v, int l, int r, int n) {
    if (l > r) return -1; // Base case: the element is not found
    int mid = (l + r) / 2; // Calculate the middle index
    if (v[mid] < n) return dico_search(v, mid + 1, r, n); // Search in the right half
    if (v[mid] > n) return dico_search(v, l, mid - 1, n); // Search in the left half
    return mid; // Element found at index mid
}

// Function to perform Insertion Sort on the vector
void insertion_sort(vector<int>& v) {
    for (int i = 1; i < v.size(); ++i) {
        int key = v[i]; // The current element to insert
        int j = i - 1;

        // Move elements of v[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 and v[j] > key) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key; // Place the key in the correct position
    }
}

int main() {
    int size = 10;           // Desired number of elements in the vector
    int lower_bound = 1;     // Lower bound of the range
    int upper_bound = 100;   // Upper bound of the range

    // Generate a sorted random vector
    vector<int> v = generate_random_vector(size, lower_bound, upper_bound);

    // Print the generated vector
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // Input the number to search for
    int n;
    cin >> n;

    // Perform binary search
    int pos = dico_search(v, 0, size - 1, n);

    // Output the result
    if (pos != -1) 
        cout << "The position of " << n << " in the vector is " << pos << endl;
    else 
        cout << "The element " << n << " is not in the vector :(" << endl;

    return 0;
}
